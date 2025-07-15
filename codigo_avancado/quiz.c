#include "quiz.h"
#include <ctype.h>

/**
 * Executa o quiz completo com as cinco perguntas
 * @return pontuação total obtida
 */
int executar_quiz() {
    Pergunta perguntas[NUM_PERGUNTAS];
    int pontos_totais = 0;
    
    printf("==============================================\n");
    printf("    BEM-VINDO AO QUIZ MULTIDISCIPLINAR!\n");
    printf("==============================================\n");
    printf("Você terá 5 perguntas sobre diferentes áreas.\n");
    printf("Cada acerto vale %d pontos!\n\n", PONTOS_POR_ACERTO);
    
    // Inicializa as perguntas
    inicializar_perguntas(perguntas);
    
    // Executa cada pergunta
    for (int i = 0; i < NUM_PERGUNTAS; i++) {
        if (fazer_pergunta(perguntas[i], i + 1)) {
            pontos_totais += PONTOS_POR_ACERTO;
        }
        printf("\nPontuação atual: %d pontos\n", pontos_totais);
        printf("----------------------------------------------\n\n");
    }
    
    return pontos_totais;
}

/**
 * Faz uma pergunta individual e processa a resposta
 * @param pergunta - estrutura da pergunta
 * @param numero - número da pergunta (1-5)
 * @return 1 se acertou, 0 se errou
 */
int fazer_pergunta(Pergunta pergunta, int numero) {
    char resposta;
    int acertou = 0;
    
    printf("PERGUNTA %d:\n", numero);
    printf("%s\n", pergunta.pergunta);
    printf("%s\n", pergunta.opcaoA);
    printf("%s\n", pergunta.opcaoB);
    
    // Loop até acertar
    while (!acertou) {
        printf("\nSua resposta (A ou B): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);
        
        // Verifica se a resposta é válida
        if (resposta != 'A' && resposta != 'B') {
            printf("Por favor, digite apenas A ou B.\n");
            continue;
        }
        
        // Verifica se acertou
        if (resposta == pergunta.resposta_correta) {
            mensagem_acerto();
            acertou = 1;
        } else {
            mensagem_erro();
        }
    }
    
    return 1; // Sempre retorna 1 pois o usuário só sai quando acerta
}

/**
 * Exibe mensagem de parabéns para resposta correta
 */
void mensagem_acerto() {
    char mensagens[][100] = {
        "🎉 Parabéns! Excelente trabalho!",
        "🌟 Você acertou! Incrível!",
        "👏 Fantástico! Continue assim!",
        "✨ Perfeito! Você está mandando bem!",
        "🎯 Acertou em cheio! Muito bem!"
    };
    
    int indice = rand() % 5;
    printf("\n%s\n", mensagens[indice]);
}

/**
 * Exibe mensagem encorajadora para resposta incorreta
 */
void mensagem_erro() {
    char mensagens[][100] = {
        "😊 Quase lá! Tente de novo, você consegue!",
        "💪 Não foi dessa vez, mas continue tentando!",
        "🚀 Não desista! Você está no caminho certo!",
        "💡 Pense um pouquinho mais e tente novamente!",
        "⭐ Você pode fazer isso! Mais uma tentativa!"
    };
    
    int indice = rand() % 5;
    printf("\n%s\n", mensagens[indice]);
}

/**
 * Exibe a pontuação final e resultados
 * @param pontos - pontuação total
 */
void exibir_resultado_final(int pontos) {
    printf("\n==============================================\n");
    printf("           RESULTADO FINAL\n");
    printf("==============================================\n");
    printf("🏆 Pontuação total: %d pontos\n", pontos);
    printf("📊 Perguntas respondidas: %d\n", NUM_PERGUNTAS);
    printf("💯 Taxa de acertos: 100%% (após tentativas)\n\n");
    
    if (pontos == NUM_PERGUNTAS * PONTOS_POR_ACERTO) {
        printf("🎉 PARABÉNS! Você completou o quiz com sucesso!\n");
        printf("🧠 Seu conhecimento multidisciplinar está excelente!\n");
    }
    
    printf("==============================================\n");
} 