#include <stdio.h>

int main() {
//Super Trunfo Ads
char estado1, estado2;
char codigo1[10], codigo2[10];
char nome_cidade1[50], nome_cidade2[50];
int populacao1, populacao2;
float area1, area2;
int pontos_turisticos1, pontos_turisticos2;
float pib1, pib2;

//Primeira Carta
printf("\nCadastro da Carta 1:\n");
printf("Estado (ex: AM, SP, RJ...): ");
scanf(" %c", &estado1);

printf("Código da Carta (A01): ");
scanf("%9s", &codigo1);

printf("Nome da Cidade: ");
scanf(" %s", &nome_cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área em km²: ");
scanf("%f", &area1);

printf("Pib: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos_turisticos1);



//Segunda Carta
printf("\nCadastro da Carta 2:\n");
printf("Estado (ex: AM, SP, RJ...): ");
scanf(" %c", &estado2);

printf("Código da Carta (A02): ");
scanf("%9s", &codigo2);

printf("Nome da Cidade: ");
scanf(" %s", &nome_cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área em km²: ");
scanf("%f", &area2);

printf("Pib: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos_turisticos2);



//Dados das Cartas Cadastradas
printf("\n=== Dados na Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("Nome da cidade: %s\n", nome_cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("Pib: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", pontos_turisticos1);


printf("\n=== Dados na Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Nome da cidade: %s\n", nome_cidade2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("pib: %2.f\n", pib2);
printf("Pontos turísticos: %d\n", pontos_turisticos2);


return 0;






}
