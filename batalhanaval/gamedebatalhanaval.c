#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3

int main() {
    
    int tabuleiro[TAMANHO][TAMANHO];

    
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    
    int linhaHorizontal = 2, colunaHorizontal = 4; 
    int linhaVertical = 5, colunaVertical = 7;     

    
    if (colunaHorizontal + NAVIO <= TAMANHO && linhaVertical + NAVIO <= TAMANHO) {
        
        
        int sobreposicao = 0;
        for (int i = 0; i < NAVIO; i++) {
            if (tabuleiro[linhaHorizontal][colunaHorizontal + i] == NAVIO ||
                tabuleiro[linhaVertical + i][colunaVertical] == NAVIO) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;
            }

           
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;
            }

           
            printf("\nTabuleiro com os navios posicionados:\n\n");
            for (int i = 0; i < TAMANHO; i++) {
                for (int j = 0; j < TAMANHO; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }

        } else {
            printf("Erro: Os navios se sobrepõem! Tente outras coordenadas.\n");
        }

    } else {
        printf("Erro: Um dos navios ultrapassa os limites do tabuleiro.\n");
    }

    return 0;
}
