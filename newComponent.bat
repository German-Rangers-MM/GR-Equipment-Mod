@echo off
setlocal enabledelayedexpansion

:: Prompt for Component
set /p "Component=Enter Component name: "
if "%Component%"=="" (
    echo Component name is required.
    exit /b 1
)

:: Prompt for Component Beautified
set /p "ComponentBeautified=Enter Component Beautified name: "
if "%ComponentBeautified%"=="" (
    echo Component Beautified name is required.
    exit /b 1
)
:: Convert Component to uppercase
set "ComponentUpperCase="
set "str=%Component%"
:loop
if not "!str!"=="" (
    set "char=!str:~0,1!"
    set "char=!char:a=A!" & set "char=!char:b=B!" & set "char=!char:c=C!"
    set "char=!char:d=D!" & set "char=!char:e=E!" & set "char=!char:f=F!"
    set "char=!char:g=G!" & set "char=!char:h=H!" & set "char=!char:i=I!"
    set "char=!char:j=J!" & set "char=!char:k=K!" & set "char=!char:l=L!"
    set "char=!char:m=M!" & set "char=!char:n=N!" & set "char=!char:o=O!"
    set "char=!char:p=P!" & set "char=!char:q=Q!" & set "char=!char:r=R!"
    set "char=!char:s=S!" & set "char=!char:t=T!" & set "char=!char:u=U!"
    set "char=!char:v=V!" & set "char=!char:w=W!" & set "char=!char:x=X!"
    set "char=!char:y=Y!" & set "char=!char:z=Z!"
    set "ComponentUpperCase=!ComponentUpperCase!!char!"
    set "str=!str:~1!"
    goto :loop
)

:: Set target folder path
set "folderPath=addons\%Component%"

:: Check if folder exists
if exist "%folderPath%" (
    echo Error: Folder "%folderPath%" already exists.
    exit /b 1
)

:: Create component folder
mkdir "%folderPath%"
if not exist "%folderPath%" (
    echo Error: Failed to create folder "%folderPath%"
    exit /b 1
)

:: Calculate relative path without drive letter
set "fullpath=%CD%"
set "relativepath=\%fullpath:~3%"
set "relativepathTrimmed=%fullpath:~3%"

:: Create script_component.hpp
(
    echo #define COMPONENT %Component%
    echo #define COMPONENT_BEAUTIFIED %ComponentBeautified%
    echo #include "%relativepath%\addons\main\script_mod.hpp"
    echo:
    echo // #define DEBUG_MODE_FULL
    echo // #define DISABLE_COMPILE_CACHE
    echo // #define ENABLE_PERFORMANCE_COUNTERS
    echo:
    echo #ifdef DEBUG_ENABLED_%ComponentUpperCase%
    echo     #define DEBUG_MODE_FULL
    echo #endif
    echo:
    echo #ifdef DEBUG_SETTINGS_%ComponentUpperCase%
    echo     #define DEBUG_SETTINGS DEBUG_SETTINGS_%ComponentUpperCase%
    echo #endif
    echo #include "%relativepath%\addons\main\script_macros.hpp"
) > "%folderPath%\script_component.hpp"

:: Create config.cpp
(
    echo #include "script_component.hpp"
    echo:
    echo class CfgPatches
    echo {
    echo     class ADDON {
    echo         name = COMPONENT_NAME;
    echo         units[] = {};
    echo         weapons[] = {};
    echo         requiredVersion = REQUIRED_VERSION;
    echo         requiredAddons[] = {};
    echo         author = "German Rangers";
    echo         VERSION_CONFIG;
    echo     };
    echo };
) > "%folderPath%\config.cpp"

:: Create $PBOPREFIX$
(
    echo %relativepathTrimmed%\addons\%Component%
) > "%folderPath%\$PBOPREFIX$"

echo Successfully created component in "%folderPath%"
endlocal