@echo off
setlocal enabledelayedexpansion

:: Prompt for Component
:compReg
set /p "Component=Enter Component name: "
if "%Component%"=="" (
    echo Component name is required.
    echo:
    goto compReg
)

:: Set template and target folder paths
set "templatePath=componentTemplate"
set "folderPath=addons\%Component%"
set "funcPath=%folderPath%\functions"

:: Check if folder exists
if exist "%folderPath%" (
    echo Error: Folder "%folderPath%" already exists.
    pause
	cls
	goto configMenu
)

:: Prompt for Component Beautified
:compBea
set /p "ComponentBeautified=Enter Component Beautified name: "
if "%ComponentBeautified%"=="" (
    echo Component Beautified name is required.
    echo:
    goto compBea
)

:: Prompt for CBA XEH
choice /m "Are CBA XEH required?"
set "cbaXEH=%ERRORLEVEL%"

:: Convert Component to uppercase
set "ComponentUpperCase="
set "str=%Component%"
:loop
if not "!str!"=="" (
    set "char=!str:~0,1!"
    set "char=!char:a=A!"
    set "char=!char:b=B!"
    set "char=!char:c=C!"
    set "char=!char:d=D!"
    set "char=!char:e=E!"
    set "char=!char:f=F!"
    set "char=!char:g=G!"
    set "char=!char:h=H!"
    set "char=!char:i=I!"
    set "char=!char:j=J!"
    set "char=!char:k=K!"
    set "char=!char:l=L!"
    set "char=!char:m=M!"
    set "char=!char:n=N!"
    set "char=!char:o=O!"
    set "char=!char:p=P!"
    set "char=!char:q=Q!"
    set "char=!char:r=R!"
    set "char=!char:s=S!"
    set "char=!char:t=T!"
    set "char=!char:u=U!"
    set "char=!char:v=V!"
    set "char=!char:w=W!"
    set "char=!char:x=X!"
    set "char=!char:y=Y!"
    set "char=!char:z=Z!"
    set "ComponentUpperCase=!ComponentUpperCase!!char!"
    set "str=!str:~1!"
    goto :loop
)


:: Calculate relative path without drive letter
set "fullpath=%CD%"
set "relativepathTrimmed=%fullpath:~3%"
set "relativepath=\%fullpath:~3%"



:: Create component folder  
mkdir "%folderPath%"
if not exist "%folderPath%" (
    echo Error: Failed to create folder "%folderPath%"
    pause
    exit /b 1
)

:: Create functions directory if XEH required
if %cbaXEH% equ 1 (
    mkdir "%funcPath%"
    if not exist "%funcPath%" (
        echo Error: Failed to create folder "%funcPath%"
        pause
        exit /b 1
    )
)

:: Create PowerShell replacement script
set "tempPs=%TEMP%\process_template.ps1"
(
echo $inputFile = $args[0]
echo $outputFile = $args[1]
echo $component = $args[2]
echo $componentBeautified = $args[3]
echo $componentUpper = $args[4]
echo $relPath = $args[5]
echo $relPathTrimmed = $args[6]
echo $content = Get-Content -LiteralPath $inputFile -Raw
echo $content = $content -replace 'COMPONENTREGULAR', $component
echo $content = $content -replace 'COMPONENTBEAUTIFIED', $componentBeautified
echo $content = $content -replace 'COMPONENTUPPERCASE', $componentUpper
echo $content = $content -replace 'RELATIVEPATH', $relPath
echo $content = $content -replace 'RELATIVEPATHTRIMMED', $relPathTrimmed
echo $content ^| Set-Content -LiteralPath $outputFile -NoNewline
) > "%tempPs%"

:: Process script_component.hpp
set "tempFile=%TEMP%\script_component"
copy /Y "%templatePath%\script_component.hpp" "%tempFile%" > nul
powershell -ExecutionPolicy Bypass -File "%tempPs%" "%tempFile%" "%folderPath%\script_component.hpp" "%Component%" "%ComponentBeautified%" "%ComponentUpperCase%" "%relativepath%" "%relativepathTrimmed%"
del "%tempFile%"

:: Create PBOPREFIX
echo %relativepathTrimmed%\addons\%Component% > "%folderPath%\$PBOPREFIX$"

:: Process files based on XEH choice
if %cbaXEH% equ 1 (
    :: Process XEH files
    for %%F in (CfgEventHandlers.hpp XEH_preStart.sqf XEH_preInit.sqf XEH_postInit.sqf XEH_PREP.hpp) do (
        set "tempFile=%TEMP%\%%F"
        copy /Y "%templatePath%\XEH\%%F" "%tempFile%" > nul
        powershell -ExecutionPolicy Bypass -File "%tempPs%" "%tempFile%" "%folderPath%\%%F" "%Component%" "%ComponentBeautified%" "%ComponentUpperCase%" "%relativepath%" "%relativepathTrimmed%"
        del "%tempFile%"
    )
    
    :: Process config.cpp with XEH
    set "tempFile=%TEMP%\config"
    copy /Y "%templatePath%\XEH\config.cpp" "%tempFile%" > nul
    powershell -ExecutionPolicy Bypass -File "%tempPs%" "%tempFile%" "%folderPath%\config.cpp" "%Component%" "%ComponentBeautified%" "%ComponentUpperCase%" "%relativepath%" "%relativepathTrimmed%"
    del "%tempFile%"
) else (
    :: Process config.cpp without XEH
    set "tempFile=%TEMP%\config"
    copy /Y "%templatePath%\noXEH\config.cpp" "%tempFile%" > nul
    powershell -ExecutionPolicy Bypass -File "%tempPs%" "%tempFile%" "%folderPath%\config.cpp" "%Component%" "%ComponentBeautified%" "%ComponentUpperCase%" "%relativepath%" "%relativepathTrimmed%"
    del "%tempFile%"
)

:: Cleanup
del "%tempPs%"
cls
echo:
echo Successfully created component in "%folderPath%"
echo:
echo:

:: Display menu options
:configMenu
echo Which config classes do you want to create?:
echo [A] CfgVehicles
echo [B] CfgWeapons
echo [C] CfgMagazines
echo [D] CfgMagazineWells
echo [E] CfgAmmo
echo [F] CfgFactionClasses
echo [G] CfgGroups
echo [H] CfgMusic
echo [I] CfgMarkers
echo [J] CfgGlasses
echo [K] CfgFontFamilies
echo [L] CfgEditorCategories
echo [M] CfgEditorSubcategories
echo [X] Exit
echo.
set /p "input=Enter your choices (e.g., a, bc, acb, ade): "

if "%input%"=="" (
	cls
	echo No input provided. Please enter your choices.
	pause
	goto configMenu
)
:: Remove spaces and convert to lowercase
set "input=%input: =%"
set "input=%input:a=a%"
set "input=%input:b=b%"
set "input=%input:c=c%"
set "input=%input:d=d%"
set "input=%input:e=e%"
set "input=%input:f=f%"
set "input=%input:g=g%"
set "input=%input:h=h%"
set "input=%input:i=i%"
set "input=%input:j=j%"
set "input=%input:k=k%"
set "input=%input:l=l%"
set "input=%input:m=m%"

:: Process each character in the input
for /l %%i in (0,1,31) do (
    set "char=!input:~%%i,1!"
    if defined char (
        if "!char!"=="a" (
            set "cfgVehicles=1"
        )
        if "!char!"=="b" (
            set "cfgWeapons=1"
        )
        if "!char!"=="c" (
            set "cfgMagazines=1"
        )
        if "!char!"=="d" (
            set "cfgMagazineWells=1"
        )
        if "!char!"=="e" (
            set "cfgAmmo=1"
        )
        if "!char!"=="f" (
            set "cfgFactionClasses=1"
        )
        if "!char!"=="g" (
            set "cfgGroups=1"
        )
        if "!char!"=="h" (
            set "cfgMusic=1"
        )
        if "!char!"=="i" (
            set "cfgMarkers=1"
        )
        if "!char!"=="j" (
            set "cfgGlasses=1"
        )
        if "!char!"=="k" (
            set "cfgCfgFontFamilies=1"
        )
		if "!char!"=="l" (
			set "cfgEditorCategories=1"
		)
		if "!char!"=="m" (
			set "cfgEditorSubcategories=1"
        )
		if "!char!"=="x" (
			set "exitCall=1"
		)
	)
)

goto menuRun

:menuError
cls
set "cfgVehicles=0"
set "cfgWeapons=0"
set "cfgMagazines=0"
set "cfgMagazineWells=0"
set "cfgAmmo=0"
set "cfgFactionClasses=0"
set "cfgGroups=0"
set "cfgMusic=0"
set "cfgMarkers=0"
set "cfgGlasses=0"
set "cfgFontFamilies=0"
set "cfgEditorCategories=0"
set "cfgEditorSubcategories=0"
set "exitCall=0"
echo Conflicting input. X cant be used together with other Options Please enter valid choices (e.g., a, bc, acb, ade).
pause
cls
goto configMenu

:menuRun
cls

if !cfgVehicles! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgVehicles.hpp" (
	   (
	   	echo class CfgVehicles {
	   	echo };
	   ) > "%folderPath%\CfgVehicles.hpp"
	   (
	      echo:
	      echo #include "CfgVehicles.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgVehicles.hpp" (
	      echo Successfully created CfgVehicles.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgVehicles.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgVehicles.hpp already exists in "%folderPath%"
	)
)

if !cfgWeapons! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgWeapons.hpp" (
	   (
	   	echo class CfgWeapons {
	   	echo };
	   ) > "%folderPath%\CfgWeapons.hpp"
	   (
	      echo:
	      echo #include "CfgWeapons.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgWeapons.hpp" (
	      echo Successfully created CfgWeapons.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgWeapons.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgWeapons.hpp already exists in "%folderPath%"
	)
)

if !cfgMagazines! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgMagazines.hpp" (
	   (
	   	echo class CfgMagazines {
	   	echo };
	   ) > "%folderPath%\CfgMagazines.hpp"
	   (
	      echo:
	      echo #include "CfgMagazines.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgMagazines.hpp" (
	      echo Successfully created CfgMagazines.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgMagazines.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgMagazines.hpp already exists in "%folderPath%"
	)
)

if !cfgMagazineWells! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgMagazineWells.hpp" (
	   (
	   	echo class CfgMagazineWells {
	   	echo };
	   ) > "%folderPath%\CfgMagazineWells.hpp"
	   (
	      echo:
	      echo #include "CfgMagazineWells.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgMagazineWells.hpp" (
	      echo Successfully created CfgMagazineWells.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgMagazineWells.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgMagazineWells.hpp already exists in "%folderPath%"
	)
)

if !cfgAmmo! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgAmmo.hpp" (
	   (
	   	echo class CfgAmmo {
	   	echo };
	   ) > "%folderPath%\CfgAmmo.hpp"
	   (
	      echo:
	      echo #include "CfgAmmo.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgAmmo.hpp" (
	      echo Successfully created CfgAmmo.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgAmmo.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgAmmo.hpp already exists in "%folderPath%"
	)
)

if !cfgFactionClasses! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgFactionClasses.hpp" (
	   (
	   	echo class CfgFactionClasses {
	   	echo };
	   ) > "%folderPath%\CfgFactionClasses.hpp"
	   (
	      echo:
	      echo #include "CfgFactionClasses.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgFactionClasses.hpp" (
	      echo Successfully created CfgFactionClasses.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgFactionClasses.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgFactionClasses.hpp already exists in "%folderPath%"
	)
)

if !cfgGroups! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgGroups.hpp" (
	   (
	   	echo class CfgGroups {
	   	echo };
	   ) > "%folderPath%\CfgGroups.hpp"
	   (
	      echo:
	      echo #include "CfgGroups.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgGroups.hpp" (
	      echo Successfully created CfgGroups.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgGroups.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgGroups.hpp already exists in "%folderPath%"
	)
)

if !cfgMusic! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgMusic.hpp" (
	   (
	   	echo class CfgMusic {
	   	echo };
	   ) > "%folderPath%\CfgMusic.hpp"
	   (
	      echo:
	      echo #include "CfgMusic.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgMusic.hpp" (
	      echo Successfully created CfgMusic.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgMusic.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgMusic.hpp already exists in "%folderPath%"
	)
)

if !cfgMarkers! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgMarkers.hpp" (
	   (
	   	echo class CfgMarkers {
	   	echo };
	   ) > "%folderPath%\CfgMarkers.hpp"
	   (
	      echo:
	      echo #include "CfgMarkers.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgMarkers.hpp" (
	      echo Successfully created CfgMarkers.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgMarkers.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgMarkers.hpp already exists in "%folderPath%"
	)
)

if !cfgGlasses! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgGlasses.hpp" (
	   (
	   	echo class CfgGlasses {
	   	echo };
	   ) > "%folderPath%\CfgGlasses.hpp"
	   (
	      echo:
	      echo #include "CfgGlasses.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgGlasses.hpp" (
	      echo Successfully created CfgGlasses.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgGlasses.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgGlasses.hpp already exists in "%folderPath%"
	)
)

if !cfgFontFamilies! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgFontFamilies.hpp" (
	   (
	   	echo class CfgFontFamilies {
	   	echo };
	   ) > "%folderPath%\CfgFontFamilies.hpp"
	   (
	      echo:
	      echo #include "CfgFontFamilies.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgFontFamilies.hpp" (
	      echo Successfully created CfgFontFamilies.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgFontFamilies.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgFontFamilies.hpp already exists in "%folderPath%"
	)
)

if !cfgEditorCategories! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgEditorCategories.hpp" (
	   (
	   	echo class CfgEditorCategories {
	   	echo };
	   ) > "%folderPath%\CfgEditorCategories.hpp"
	   (
	      echo:
	      echo #include "CfgEditorCategories.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgEditorCategories.hpp" (
	      echo Successfully created CfgEditorCategories.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgEditorCategories.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgEditorCategories.hpp already exists in "%folderPath%"
	)
)

if !cfgEditorSubcategories! equ 1 (
	if !exitCall! equ 1 (
		goto menuError
	)
	if not exist "%folderPath%\CfgEditorSubcategories.hpp" (
	   (
	   	echo class CfgEditorSubcategories {
	   	echo };
	   ) > "%folderPath%\CfgEditorSubcategories.hpp"
	   (
	      echo:
	      echo #include "CfgEditorSubcategories.hpp"
	   ) >> "%folderPath%\config.cpp"
	   if exist "%folderPath%\CfgEditorSubcategories.hpp" (
	      echo Successfully created CfgEditorSubcategories.hpp in "%folderPath%"
	   ) else (
	      echo Error: Failed to create CfgEditorSubcategories.hpp in "%folderPath%"
	   )
	) else (
	   echo CfgEditorSubcategories.hpp already exists in "%folderPath%"
	)
)

:exitMenu
set "cfgVehicles=0"
set "cfgWeapons=0"
set "cfgMagazines=0"
set "cfgMagazineWells=0"
set "cfgAmmo=0"
set "cfgFactionClasses=0"
set "cfgGroups=0"
set "cfgMusic=0"
set "cfgMarkers=0"
set "cfgGlasses=0"
set "cfgFontFamilies=0"
set "cfgEditorCategories=0"
set "cfgEditorSubcategories=0"
set "exitCall=0"
choice /m "Look back to you created Classes. Are you finished?"
set "finished=%ERRORLEVEL%"
if %finished% equ 2 (
	cls
	echo Returning to menu...
	goto configMenu
) else (
	cls
	echo Exiting...
)
echo Process finished.
pause
exit /b 0