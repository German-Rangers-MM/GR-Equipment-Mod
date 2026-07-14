@echo off
setlocal enabledelayedexpansion

:: Prompt for Addon
:addonReg
set /p "Addon=Enter Addon: "
if "%Addon%"=="" (
    echo Addon is required.
    echo:
    goto compReg
)


:: Prompt for Config
:compReg
set /p "Config=Enter Config: "
if "%Config%"=="" (
    echo Config is required.
    echo:
    goto compReg
)


:: Set template and target folder paths
set "folderPath=addons\%Addon%"

if exist "%folderPath%\%Config%.hpp" (
      echo Config file already exists.
      echo:
      set "cfgExists=1"
      goto regErrorhandler
)

:regErrorhandler
choice /M "Config file already exists. Do you want to add a subcomponent?"
if %errorlevel% equ 1 (
    set "subComponent=1"
    set "cfgExists=0"
    goto moduleReg
) else (
    set "subComponent=0"
    set "cfgExists=0"
    echo Returning to selection...
    goto compReg
)

:moduleReg
if %subComponent%==1 (
    set /p "SubComponentName=Enter Subcomponent: "
    if "%SubComponentName%"=="" (
        echo Subcomponent is required.
        echo:
        goto moduleReg
    )
    (
        echo:
    ) > "%folderPath%\%Config%_%SubComponentName%.hpp"
    echo Create subcomponent at %folderPath%\%Config%_%SubComponent%.hpp
    (
       echo:
       echo #include "%Config%_%SubComponentName%.hpp"
    ) >> "%folderPath%\%Config%.hpp"
    echo Subcomponent %SubComponentName% added to %folderPath%\%Config%.hpp
) else (
    (
       echo class %Config% {};
    ) > "%folderPath%\%Config%.hpp"
    echo Create config at %folderPath%\%Config%.hpp
    (
       echo:
       echo #include "%Config%.hpp"
    ) >> "%folderPath%\%Config%.hpp"
    (
       echo:
       echo #include "%Config%.hpp"
    ) >> "%folderPath%\config.cpp"
    echo Config %Config% added to %folderPath%\config.cpp
)

echo:
echo Process finished.
pause
exit /b 0

