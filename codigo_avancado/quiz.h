#ifndef QUIZ_H
#define QUIZ_H

#include <stdio.h>
#include <stdlib.h>

#define NUM_PERGUNTAS 5
#define PONTOS_POR_ACERTO 5

/**
 * Estrutura que representa uma pergunta do quiz
 * @param pergunta - o texto da pergunta
 * @param opcaoA - primeira alternativa
 * @param opcaoB - segunda alternativa  
 * @param resposta_correta - resposta correta ('A' ou 'B')
 */
typedef struct {
    char pergunta[200];
    char opcaoA[100];
    char opcaoB[100];
    char resposta_correta;
} Pergunta;

/**
 * Inicializa todas as perguntas do quiz
 * @param perguntas - array de perguntas a ser preenchido
 */
void inicializar_perguntas(Pergunta perguntas[]);

/**
 * Executa o quiz completo
 * @return pontuação total obtida
 */
int executar_quiz();

/**
 * Faz uma pergunta individual e processa a resposta
 * @param pergunta - estrutura da pergunta
 * @param numero - número da pergunta (1-5)
 * @return 1 se acertou, 0 se errou
 */
int fazer_pergunta(Pergunta pergunta, int numero);

/**
 * Exibe mensagem de parabéns para resposta correta
 */
void mensagem_acerto();

/**
 * Exibe mensagem encorajadora para resposta incorreta
 */
void mensagem_erro();

/**
 * Exibe a pontuação final
 * @param pontos - pontuação total
 */
void exibir_resultado_final(int pontos);

#endif 