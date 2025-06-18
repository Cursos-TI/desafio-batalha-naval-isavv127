#include <stdio.h>

int main() {
    char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // criando tabuleiro 10x10
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // posicionando os navios
    for (int j = 4; j < 7; j++) { // navio na linha 10
        tabuleiro[9][j] = 3;
    }
    for (int i = 1; i < 4; i++) { // navio na coluna c
        tabuleiro[i][2] = 3;
    }

    // exibindo tabuleiro
    printf("Tabuleiro Batallha Naval\n");
    printf("  "); // espaço para alinhar com os números da esquerda

    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); // imprime letras de a ate j
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // imprime números de 1 a 10
        if (i + 1 < 10); 

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
