#include "quiz.h"
#include <time.h>

/**
 * Função principal do programa
 * Executa o quiz multidisciplinar
 * @return 0 se executado com sucesso
 */
int main() {
    int pontos_finais;
    
    // Inicializa gerador de números aleatórios para mensagens variadas
    srand(time(NULL));
    
    // Executa o quiz completo
    pontos_finais = executar_quiz();
    
    // Exibe resultado final
    exibir_resultado_final(pontos_finais);
    
    printf("\nObrigado por participar do Quiz Multidisciplinar!\n");
    printf("Continue estudando e aprendendo sempre! 📚✨\n\n");
    
    return 0;
} 