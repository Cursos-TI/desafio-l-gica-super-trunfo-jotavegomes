#include <stdio.h>
int main(){

    //Uma letra de A a H  
    char estado1, estado2;
    //A letra do estado seguida de um número de 01 a 04
    char codigo1[4], codigo2[4];
    //nome da cidade
    char cidade1[20], cidade2[20];
    // O número de habitantes da cidade
    int populacao1, populacao2;
    //A área da cidade em quilômetros quadrados e densidade populacional
    float area1, area2, densidade1, densidade2;
    //O Produto Interno Bruto da cidade e pib per capita
    float pib1, pib2, percapita1, percapita2;
    //A quantidade de pontos turísticos na cidade
    int pturistico1, pturistico2;
   
    printf("Primeira carta! \n");

    printf("Digite o estado : \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta : \n");
    scanf("%3s", &codigo1);

    printf("Digite a cidade : \n");
    scanf("%s", &cidade1);

    printf("Digite a população : \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 : \n");
    scanf("%f", &area1);

    printf("Digite o pib : \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos : \n");
    scanf("%i", &pturistico1);

    printf("Segunda carta! \n");

    printf("Digite o estado : \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta : \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade : \n");
    scanf("%s", &cidade2);

    printf("Digite a população : \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 : \n");
    scanf("%f", &area2);

    printf("Digite o pib : \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos : \n");
    scanf("%i", &pturistico2);

    densidade1 = (populacao1 / area1);
    densidade2 = (populacao2 / area2);
    percapita1 = (pib1 / populacao1);
    percapita2 = (pib2 / populacao2);


    printf("Carta1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("N. pontos turisticos: %i\n", pturistico1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("\n");
    printf("Carta2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("N. pontos turisticos: %i\n", pturistico2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("\n");
    printf("Comparação: População\n");

    if ( populacao1 > populacao2 ){
        printf("Carta 1 tem maior população!\n");
    }else {
        printf("Carta 2 tem maior população!\n");
    }


    return 0;


}