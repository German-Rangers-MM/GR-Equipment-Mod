@echo off
setlocal enabledelayedexpansion

set "VERBOSE_LEVEL="

REM Parse command line arguments
if "%~1" == "-v" set "VERBOSE_LEVEL= -v"
if "%~1" == "-vv" set "VERBOSE_LEVEL= -vv"

:launch
hemtt launch cup%VERBOSE_LEVEL%

choice /M "Run again?"
if %errorlevel% equ 1 ( 
   goto launch 
) else ( 
   cls
   goto end 
)

:end
echo exiting...
pause
cls
exit /b 0