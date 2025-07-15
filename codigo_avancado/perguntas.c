#include "quiz.h"
#include <string.h>

/**
 * Inicializa todas as perguntas do quiz cobrindo as disciplinas:
 * Algoritmos I, Fundamentos da Computação, Inglês Instrumental, 
 * Metodologia Científica e Matemática
 * @param perguntas - array de perguntas a ser preenchido
 */
void inicializar_perguntas(Pergunta perguntas[]) {
    
    // Pergunta 1 - Algoritmos I (Estruturas de repetição)
    strcpy(perguntas[0].pergunta, "Qual estrutura de repetição executa o bloco pelo menos uma vez?");
    strcpy(perguntas[0].opcaoA, "A) for");
    strcpy(perguntas[0].opcaoB, "B) do-while");
    perguntas[0].resposta_correta = 'B';
    
    // Pergunta 2 - Fundamentos da Computação (Hardware)
    strcpy(perguntas[1].pergunta, "Qual componente é responsável pelo processamento de dados no computador?");
    strcpy(perguntas[1].opcaoA, "A) CPU");
    strcpy(perguntas[1].opcaoB, "B) HD");
    perguntas[1].resposta_correta = 'A';
    
    // Pergunta 3 - Inglês Instrumental (Termo técnico)
    strcpy(perguntas[2].pergunta, "O que significa 'debugging' em programação?");
    strcpy(perguntas[2].opcaoA, "A) Criar novos bugs");
    strcpy(perguntas[2].opcaoB, "B) Encontrar e corrigir erros");
    perguntas[2].resposta_correta = 'B';
    
    // Pergunta 4 - Metodologia Científica (Etapas de pesquisa)
    strcpy(perguntas[3].pergunta, "Qual é a primeira etapa do método científico?");
    strcpy(perguntas[3].opcaoA, "A) Observação do problema");
    strcpy(perguntas[3].opcaoB, "B) Coleta de dados");
    perguntas[3].resposta_correta = 'A';
    
    // Pergunta 5 - Matemática (Cálculo simples)
    strcpy(perguntas[4].pergunta, "Se um algoritmo tem complexidade O(n²) e n=10, quantas operações aproximadamente?");
    strcpy(perguntas[4].opcaoA, "A) 10");
    strcpy(perguntas[4].opcaoB, "B) 100");
    perguntas[4].resposta_correta = 'B';
} 