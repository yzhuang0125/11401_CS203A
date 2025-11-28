@echo off
REM ---------------------------
REM Makefile.bat for Windows C++
REM 編譯 main.cpp + hash_fn.cpp
REM ---------------------------

REM 編譯器
set CXX=g++
REM 編譯選項
set CXXFLAGS=-std=c++17 -Wall

REM 可執行檔名稱
set TARGET=hash_program.exe

REM 指令參數
if "%1"=="all" goto build
if "%1"=="cxx" goto build
if "%1"=="clean" goto clean
goto help

:build
echo Building %TARGET% ...
%CXX% %CXXFLAGS% CXX\main.cpp CXX\hash_fn.cpp -o %TARGET%
echo Build finished.
goto end

:clean
echo Cleaning...
del %TARGET%
echo Clean finished.
goto end

:help
echo Usage: Makefile.bat [all|cxx|clean]
echo all   - build all
echo cxx   - build C++ only
echo clean - delete executable
goto end

:end