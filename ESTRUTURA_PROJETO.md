# 📁 Estrutura Completa do Projeto

```
tea_quiz/
├── README.md                    # Documentação principal
├── ESTRUTURA_PROJETO.md         # Este arquivo
├── codigo_simples/              # 🎯 Versão para iniciantes
│   ├── quiz_simples.c          # Arquivo único com todo o código
│   ├── Makefile                # Compilação simplificada
│   └── README.md               # Documentação da versão simples
└── codigo_avancado/            # 🚀 Versão estruturada
    ├── main.c                  # Função principal
    ├── quiz.c                  # Implementação das funções
    ├── quiz.h                  # Arquivo de cabeçalho
    ├── perguntas.c             # Definições das perguntas
    ├── Makefile                # Sistema de build completo
    └── README.md               # (será criado se necessário)
```

## 🔍 Comparação das Versões

| Aspecto | Versão Simples | Versão Avançada |
|---------|---------------|-----------------|
| **Arquivos** | 1 arquivo .c | 4 arquivos .c/.h |
| **Estrutura** | Linear | Modular |
| **Complexidade** | Baixa | Média |
| **Manutenção** | Simples | Organizada |
| **Aprendizado** | Conceitos básicos | Boas práticas |
| **Expansibilidade** | Limitada | Alta |

## 🎯 Público-Alvo

### Versão Simples - Ideal para:
- ✅ Estudantes iniciantes em C
- ✅ Primeiro contato com programação
- ✅ Aulas introdutórias
- ✅ Exercícios básicos
- ✅ Quem quer entender rapidamente

### Versão Avançada - Ideal para:
- ✅ Estudantes de nível intermediário
- ✅ Projetos de disciplina
- ✅ Demonstração de boas práticas
- ✅ Base para expansões futuras
- ✅ Portfólio profissional

## 🛠️ Comandos Rápidos

### Para testar a versão simples:
```bash
cd codigo_simples
gcc -o quiz_simples quiz_simples.c
./quiz_simples
```

### Para testar a versão avançada:
```bash
cd codigo_avancado
gcc -o quiz main.c quiz.c perguntas.c
./quiz
```

## 📚 Conceitos Demonstrados

### Na Versão Simples:
- Funções básicas
- Estruturas de repetição (while)
- Estruturas condicionais (if/else)
- Arrays de caracteres (strings)
- Entrada/saída básica (printf/scanf)

### Na Versão Avançada:
- Separação de responsabilidades
- Typedef struct
- Headers (.h) e implementação (.c)
- Modularização
- Makefile
- Documentação de código

## 🎓 Objetivos Pedagógicos

Ambas as versões cumprem os **mesmos requisitos funcionais**:
- ✅ 5 perguntas multidisciplinares
- ✅ Sistema de pontuação (5 pontos por acerto)
- ✅ Feedback positivo para erros
- ✅ Mensagens de parabéns para acertos
- ✅ Pontuação cumulativa
- ✅ Loop até acertar cada pergunta

A diferença está na **abordagem técnica** e **nível de complexidade** do código. 