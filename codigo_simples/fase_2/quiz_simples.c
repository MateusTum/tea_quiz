#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define NUM_PERGUNTAS 10
#define PONTOS_POR_ACERTO 5

/**
 * Exibe mensagem de parabéns para resposta correta
 */
void mensagem_acerto() {
    printf("\n🎉 *** PARABENS! Excelente trabalho! *** 🎉\n");
}

/**
 * Exibe mensagem encorajadora para resposta incorreta  
 */
void mensagem_erro() {
    printf("\n💪 >>> Quase la! Tente de novo, voce consegue! <<< 💪\n");
}

/**
 * Faz uma pergunta e retorna 1 se acertou, 0 se errou
 * @param numero - número da pergunta
 * @param pergunta - texto da pergunta
 * @param opcaoA - primeira opção
 * @param opcaoB - segunda opção
 * @param resposta_correta - resposta correta ('A' ou 'B')
 */
int fazer_pergunta(int numero, char pergunta[], char opcaoA[], char opcaoB[], char resposta_correta) {
    char resposta;
    int acertou = 0;
    
    printf("PERGUNTA %d:\n", numero);
    printf("%s\n", pergunta);
    printf("%s\n", opcaoA);
    printf("%s\n", opcaoB);
    
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
        if (resposta == resposta_correta) {
            mensagem_acerto();
            acertou = 1;
        } else {
            mensagem_erro();
        }
    }
    
    return 1; // Sempre retorna 1 pois só sai quando acerta
}

/**
 * Função principal do programa
 * Executa o quiz multidisciplinar simples
 */
int main() {
    int pontos_totais = 0;
    
    // Inicializa gerador de números aleatórios
    srand(time(NULL));
    
    printf("==============================================\n");
    printf("📚   BEM-VINDO AO QUIZ MULTIDISCIPLINAR!   📚\n");
    printf("          (Versão Simples)\n");
    printf("==============================================\n");
    printf("Voce tera %d perguntas sobre diferentes areas.\n", NUM_PERGUNTAS);
    printf("Cada acerto vale %d pontos!\n\n", PONTOS_POR_ACERTO);
    
    // Pergunta 1 - Algoritmos I
    if (fazer_pergunta(1, 
        "💻 ALGORITMOS I: Qual estrutura de repeticao executa o bloco pelo menos uma vez?",
        "A) for",
        "B) do-while",
        'B')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 2 - Fundamentos da Computacao
    if (fazer_pergunta(2,
        "🖥️ FUNDAMENTOS DA COMPUTACAO: Qual componente e responsavel pelo processamento de dados no computador?",
        "A) CPU",
        "B) HD",
        'A')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 3 - Ingles Instrumental
    if (fazer_pergunta(3,
        "🇺🇸 INGLES INSTRUMENTAL: O que significa 'debugging' em programacao?",
        "A) Criar novos bugs",
        "B) Encontrar e corrigir erros",
        'B')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 4 - Metodologia Cientifica
    if (fazer_pergunta(4,
        "🔬 METODOLOGIA CIENTIFICA: Qual e a primeira etapa do metodo cientifico?",
        "A) Observacao do problema",
        "B) Coleta de dados",
        'A')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 5 - Matematica
    if (fazer_pergunta(5,
        "🧮 MATEMATICA: Se um algoritmo tem complexidade O(n2) e n=10, quantas operacoes aproximadamente?",
        "A) 10",
        "B) 100",
        'B')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 6 - Algoritmos I (segunda pergunta)
    if (fazer_pergunta(6,
        "💻 ALGORITMOS I: Qual e a complexidade de tempo da busca binaria?",
        "A) O(log n)",
        "B) O(n)",
        'A')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 7 - Fundamentos da Computacao (segunda pergunta)
    if (fazer_pergunta(7,
        "🖥️ FUNDAMENTOS DA COMPUTACAO: Qual e a menor unidade de informacao em um computador?",
        "A) Byte",
        "B) Bit",
        'B')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 8 - Ingles Instrumental (segunda pergunta)
    if (fazer_pergunta(8,
        "🇺🇸 INGLES INSTRUMENTAL: O que significa 'loop' em programacao?",
        "A) Estrutura de repeticao",
        "B) Estrutura de decisao",
        'A')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 9 - Metodologia Cientifica (segunda pergunta)
    if (fazer_pergunta(9,
        "🔬 METODOLOGIA CIENTIFICA: O que caracteriza uma hipotese cientifica?",
        "A) Deve ser testavel",
        "B) Deve ser complexa",
        'A')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Pergunta 10 - Matematica (segunda pergunta)
    if (fazer_pergunta(10,
        "🧮 MATEMATICA: Qual e o resultado de 2^3 (2 elevado a 3)?",
        "A) 6",
        "B) 8",
        'B')) {
        pontos_totais += PONTOS_POR_ACERTO;
    }
    printf("\nPontuacao atual: %d pontos\n", pontos_totais);
    printf("----------------------------------------------\n\n");
    
    // Resultado final
    printf("\n==============================================\n");
    printf("🏆           RESULTADO FINAL           🏆\n");
    printf("==============================================\n");
    printf("⭐ Pontuacao total: %d pontos\n", pontos_totais);
    printf("📝 Perguntas respondidas: %d\n", NUM_PERGUNTAS);
    printf("✅ Taxa de acertos: 100%% (apos tentativas)\n\n");
    
    if (pontos_totais == NUM_PERGUNTAS * PONTOS_POR_ACERTO) {
        printf("🎊 *** PARABENS! Voce completou o quiz com sucesso! *** 🎊\n");
        printf("🧠 *** Seu conhecimento multidisciplinar esta excelente! *** 🧠\n");
    }
    
    printf("==============================================\n");
    printf("\n🙏 Obrigado por participar do Quiz Multidisciplinar!\n");
    printf("📖 Continue estudando e aprendendo sempre!\n\n");
    
    // Pausa para evitar que o terminal feche
    printf("⏎ Pressione ENTER para sair...");
    getchar(); // Limpa buffer do scanf anterior
    getchar(); // Aguarda o usuário pressionar ENTER
    
    return 0;
} 