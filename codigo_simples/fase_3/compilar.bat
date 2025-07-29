@echo off
echo ========================================
echo   COMPILACAO - QUIZ SIMPLES
echo ========================================
echo.

echo Compilando quiz_simples.c...
gcc -Wall -Wextra -std=c99 -o quiz_simples.exe quiz_simples.c

if %errorlevel% equ 0 (
    echo.
    echo *** COMPILACAO CONCLUIDA COM SUCESSO! ***
    echo.
    echo Executando o programa...
    echo ========================================
    echo.
    quiz_simples.exe
) else (
    echo.
    echo !!! ERRO NA COMPILACAO !!!
    echo Verifique se o gcc esta instalado corretamente.
    echo.
)

echo.
echo Pressione qualquer tecla para sair...
pause >nul 