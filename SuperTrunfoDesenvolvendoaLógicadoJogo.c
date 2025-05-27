#include <stdio.h>
#include <string.h>


struct Carta {
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
   
    struct Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 2200000.0, 30};
    struct Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6000000, 1182.3, 1600000.0, 20};

    
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

   
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

   
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

   
    printf("\n--- Informações adicionais ---\n");
    printf("Carta 1 - Densidade Populacional: %.2f, PIB per capita: %.2f\n", carta1.densidadePopulacional, carta1.pibPerCapita);
    printf("Carta 2 - Densidade Populacional: %.2f, PIB per capita: %.2f\n", carta2.densidadePopulacional, carta2.pibPerCapita);

    return 0;
}
