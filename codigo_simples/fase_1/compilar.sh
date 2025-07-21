#!/bin/bash

echo "========================================"
echo "   COMPILACAO - QUIZ SIMPLES"
echo "========================================"
echo

echo "Compilando quiz_simples.c..."
gcc -Wall -Wextra -std=c99 -o quiz_simples quiz_simples.c

if [ $? -eq 0 ]; then
    echo
    echo "*** COMPILACAO CONCLUIDA COM SUCESSO! ***"
    echo
    echo "Executando o programa..."
    echo "========================================"
    echo
    ./quiz_simples
else
    echo
    echo "!!! ERRO NA COMPILACAO !!!"
    echo "Verifique se o gcc esta instalado corretamente."
    echo
fi

echo
echo "Pressione ENTER para sair..."
read -r 