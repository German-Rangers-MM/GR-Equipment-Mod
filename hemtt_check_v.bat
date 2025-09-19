@echo off

:launch
hemtt check -v

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