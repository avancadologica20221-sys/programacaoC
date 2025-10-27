#include <stdio.h>

	int main(){
		
		char estado1[20], estado2[20], codigo1[20], codigo2[20], cidade1[50], cidade2[50];
		int populacao1, populacao2, pTuristico1,  pTuristico2;
		float area1, pib1, area2, pib2, densidade1, pib_percapita1, densidade2, pibpercapita2;
		
				
		printf("Cadastro de Cartas \n");
		printf("Carta 1 \n");
		printf("Digite o estado \n");
		scanf("%s", &estado1);
		printf("Digite o codigo da carta \n");
		scanf("%s", &codigo1);
		printf("Nome da cidade \n");
		scanf("%s", &cidade1);
		printf("Numero de habitantes: \n");
		scanf("%d", &populacao1);
		printf("area da cidade: \n");
		scanf("%f", &area1);
		printf("PIB da cidade \n");
		scanf("%f", &pib1);
		printf("Quantidade de pontos turísiticos \n");
		scanf("%d", &pTuristico1);	
		
		printf("Cadastro da Carta 2 \n");
		
		printf("Digite o estado \n");
		scanf("%s", &estado2);
		printf("Digite o codigo da carta \n");
		scanf("%s", &codigo2);
		printf("Nome da cidade \n");
		scanf("%s", &cidade2);
		printf("Numero de habitantes: \n");
		scanf("%d", &populacao2);
		printf("area da cidade: \n");
		scanf("%f", &area2);
		printf("PIB da cidade \n");
		scanf("%f", &pib2);
		printf("Quantidade de pontos turisticos \n");
		scanf("%d", &pTuristico2);	
		
		printf("Veja como ficou o cadastramento \n");
		
		printf("Carta1 \n");
		printf("Estado: %s \n", estado1);
		printf("Codigo do estado: %s \n", codigo1);
		printf("Nome da Cidade: %s \n", cidade1);
		printf("Populacao: %d \n", populacao1);
		printf("Area: %2.f \n", area1);
		printf("PIB: %2.f \n", pib1);
		printf("Numero de Pontos Turisticos: %d \n", pTuristico1);
		
	    /*densidade = população/area
		pib_percapita = pib/população'/

		densidade1 = (float) populacao1 / area1;	
		pib_percapita = (float) pib1 / populacao1;

		printf("Densidade: %.2f \n", densidade1);
		printf("Pib per capita: %.2f \n. pib_percapita1);
		
		printf("Carta 2 \n");
		printf("Estado: %s \n", estado2);
		printf("Codigo do estado: %s \n", codigo2);
		printf("Nome da Cidade: %s \n", cidade2);
		printf("Populacao: %d \n", populacao2);
		printf("Area: %2.f \n", area2);
		printf("PIB: %2.f \n", pib2);
		printf("Numero de Pontos Turisticos: %d \n", pTuristico2);

		densidade2 = (float) populacao2 / area2;	
		pib_percapita = (float) pib2 / populacao2;

		printf("Densidade: %.2f \n", densidade2);
		printf("Pib per capita: %.2f \n. pib_percapita2);
		
		return 0;
	}
