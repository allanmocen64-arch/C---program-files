@echo off
REM TaskFlow Setup Script for Windows

echo 📦 TaskFlow - Mobile App Setup
echo ==============================

REM Check Node.js
where node >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo ❌ Node.js not found. Please install Node.js 18+ from https://nodejs.org/
    pause
    exit /b 1
)

echo ✅ Node.js version:
node --version
echo ✅ npm version:
npm --version

REM Backend setup
echo.
echo 🔧 Setting up backend...
cd server
call npm install
echo ✅ Backend ready!

REM Frontend setup
echo.
echo 📱 Setting up frontend...
cd ..\client
call npm install
echo ✅ Frontend ready!

REM Return to root
cd ..

echo.
echo 🎉 Setup complete!
echo.
echo To start the app:
echo   1. Backend:  cd server ^&^& npm run dev
echo   2. Frontend: cd client ^&^& npm start
echo.
pause
