#include <stdio.h>

int main() {
    // Simulação do movimento da Torre: 5 casas para a direita
    // Usando estrutura de repetição FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Simulação do movimento do Bispo: 5 casas na diagonal "Cima, Direita"
    // Usando estrutura de repetição WHILE
    printf("Movimento do Bispo (5 casas na diagonal Cima, Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Simulação do movimento da Rainha: 8 casas para a esquerda
    // Usando estrutura de repetição DO-WHILE
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
