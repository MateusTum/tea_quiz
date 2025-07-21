# Makefile para o Quiz Multidisciplinar - Versão Simples
# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Nome do executável
TARGET = quiz_simples

# Arquivo fonte
SOURCE = quiz_simples.c

# Regra principal
all: $(TARGET)

# Compilação do executável
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

# Limpeza dos arquivos compilados
clean:
	rm -f $(TARGET)

# Execução do programa
run: $(TARGET)
	./$(TARGET)

# Para Windows (executável .exe)
windows: $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET).exe $(SOURCE)

# Targets especiais
.PHONY: all clean run windows 