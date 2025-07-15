#!/bin/bash

echo "========================================"
echo "   COMPILACAO - QUIZ AVANCADO"
echo "========================================"
echo

echo "Compilando arquivos: main.c quiz.c perguntas.c..."
gcc -Wall -Wextra -std=c99 -o quiz main.c quiz.c perguntas.c

if [ $? -eq 0 ]; then
    echo
    echo "*** COMPILACAO CONCLUIDA COM SUCESSO! ***"
    echo
    echo "Arquivos compilados:"
    echo "- main.c"
    echo "- quiz.c"
    echo "- perguntas.c"
    echo "- quiz.h (incluido automaticamente)"
    echo
    echo "Executando o programa..."
    echo "========================================"
    echo
    ./quiz
else
    echo
    echo "!!! ERRO NA COMPILACAO !!!"
    echo "Verifique se:"
    echo "1. O gcc esta instalado corretamente"
    echo "2. Todos os arquivos .c e .h estao na pasta"
    echo "3. Nao ha erros de sintaxe no codigo"
    echo
fi

echo
echo "Pressione ENTER para sair..."
read -r 