#include <stdio.h>

int main() {

    char estado1[20], estado2[20], codigo1[20], codigo2[20], cidade1[50], cidade2[50];
    int pTuristico1, pTuristico2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    float densidade1, densidade2;
    float pib_percapita1, pib_percapita2;

    printf("Cadastro de Cartas \n");

    // --------- CARTA 1 ----------
    printf("\nCarta 1\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Numero de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Area da cidade: ");
    scanf("%f", &area1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pTuristico1);

    // --------- CARTA 2 ----------
    printf("\nCarta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Numero de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pTuristico2);


    // --------- RESULTADOS ----------
    printf("\n\nVeja como ficou o cadastramento\n");

    printf("\nCARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo do estado: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turísticos: %d\n", pTuristico1);

    densidade1 = (float) populacao1 / area1;
    pib_percapita1 = (float) pib1 / populacao1;

    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_percapita1);


    printf("\nCARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo do estado: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turísticos: %d\n", pTuristico2);

    densidade2 = (float) populacao2 / area2;
    pib_percapita2 = (float) pib2 / populacao2;

    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_percapita2);

    return 0;
}
