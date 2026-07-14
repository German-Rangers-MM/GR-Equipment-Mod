@echo off

set "tempPs=%TEMP%\process_buildfolder.ps1"
(
echo Rename-Item -Path ".hemttout\build" -NewName "@German Rangers Equipment"
) > "%tempPs%"

START /W hemtt build
ECHO HEMTT DONE 

ECHO RENAMING DIRECTORY  

powershell -ExecutionPolicy Bypass -File "%tempPs%"
DEL "%tempPs%"

ECHO Done
pause