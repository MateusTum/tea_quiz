# Makefile para o Quiz Multidisciplinar
# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Nome do executável
TARGET = quiz

# Arquivos fonte
SOURCES = main.c quiz.c perguntas.c

# Arquivos objeto
OBJECTS = $(SOURCES:.c=.o)

# Regra principal
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Compilação dos arquivos objeto
%.o: %.c quiz.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos compilados
clean:
	rm -f $(OBJECTS) $(TARGET)

# Execução do programa
run: $(TARGET)
	./$(TARGET)

# Targets especiais
.PHONY: all clean run 