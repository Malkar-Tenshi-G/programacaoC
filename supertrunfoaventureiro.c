#include <stdio.h>

int main() {
// Super Trunfo Aventureiro Ads
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // Preimeira Carta
    printf("\nCadastro da Carta 1:\n");
    printf("Estado (ex 01, 02): ");
    scanf("%2s", estado1);

    printf("código da Carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", &nome_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Segunda Carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex 01, 02): ");
    scanf(" %2s", estado2);

    printf("Código da Carta (ex: A02): ");
    scanf("%9s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", &nome_cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = area1 > 0 ? populacao1 / area1 : 0;
    densidade2 = area2 > 0 ? populacao2 / area2 : 0;
    pib_per_capita1 = populacao1 > 0 ? pib1 / populacao1 : 0;
    pib_per_capita2 = populacao2 > 0 ? pib2 / populacao2 : 0;

    // Exibição dos dados das cartas cadastradas
    print("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da cidade: %s\n", nome_cidade1");
    printf("População: %d habitantes\n", populacao1);
    printf(Área: %2.f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %2.f hab/km²\n",  densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;


}