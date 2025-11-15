#include <stdio.h>

int main() {

    char estado1[20], estado2[20], codigo1[20], codigo2[20], cidade1[50], cidade2[50];
    int pTuristico1, pTuristico2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    float densidade1, densidade2;
    float pib_percapita1, pib_percapita2;
    float inverso_densidade1, inverso_densidade2;
    float super_poder1, super_poder2;

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

    // --------- CALCULOS CARTA 1 ----------
    densidade1 = (float) populacao1 / area1;
    pib_percapita1 = (float) pib1 / populacao1;
    inverso_densidade1 = area1 / populacao1;
    super_poder1 = pTuristico1 + populacao1 + area1 + pib1 + inverso_densidade1 + pib_percapita1;

    // --------- CALCULOS CARTA 2 ----------
    densidade2 = (float) populacao2 / area2;
    pib_percapita2 = (float) pib2 / populacao2;
    inverso_densidade2 = area2 / populacao2;
    super_poder2 = pTuristico2 + populacao2 + area2 + pib2 + inverso_densidade2 + pib_percapita2;

    // --------- RESULTADOS ----------
    printf("\n\n==== RESULTADOS ====\n");

    printf("\nCARTA 1\n");
    printf("Super poder: %.2f\n", super_poder1);

    printf("\nCARTA 2\n");
    printf("Super poder: %.2f\n", super_poder2);

    // Comparação
    printf("\n===== COMPARAÇÃO FINAL =====\n");

    if (super_poder1 > super_poder2) {
        printf("A carta vencedora é a carta 1, cuja cidade é: %s! \n", cidade1, codigo1);
    }
    else if (super_poder2 > super_poder1) {
        printf("A carta vencedora é a **CARTA 2** (%s - %s)!\n", cidade2, codigo2);
    }
    else {
        printf("As duas cartas estão EMPATADAS!\n");
    }

    return 0;
}
