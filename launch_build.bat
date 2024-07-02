@echo off
rem Run make command
@echo ===============================================================================
@echo Triggering clean build! This is delete the existing build output directory!
@echo ===============================================================================
@echo.
make clean
@echo.
@echo ===============================================================================
@echo Triggering make all for compliling , creating executable and binaries!
@echo ===============================================================================
@echo.
make all
pause