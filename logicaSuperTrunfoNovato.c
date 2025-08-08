#include <stdio.h>

int main(){
    char estado[20], code[5], cidade[50], cont[20];
    int populacao, PontosTuristicos;
    float area, pib, superpoder1;

    char estado2[20], code2[5], cidade2[50];
    int populacao2, PontosTuristicos2;
    float area2, pib2, superpoder2;

    // Carta 1
    printf("Escreva o Estado da Carta 1: ");
    scanf(" %[^\n]", estado);    
    printf("Agora, escreva o codigo da Carta 1 (ex: A01, B02): ");
    scanf("%s", code);
    printf("Qual o nome da cidade da Carta 1? ");
    scanf(" %[^\n]", cidade);
    printf("me fale o numero da populacao da Carta 1: ");
    scanf("%d", &populacao);
    printf("Digite a Area da Carta 1: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Qual a quantidade de Pontos Turisticos da Carta 1? ");
    scanf("%d", &PontosTuristicos);

    // Carta 2
    printf("\nEscreva o Estado da Carta 2: ");
    scanf(" %[^\n]", estado2);
    printf("Agora, escreva o codigo da Carta 2: ");
    scanf("%s", code2);
    printf("Qual o nome da cidade da Carta 2? ");
    scanf(" %[^\n]", cidade2);
    printf("me fale o numero da populacao da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a Area da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Qual a quantidade de Pontos Turisticos da Carta 2? ");
    scanf("%d", &PontosTuristicos2);

    //Densidade Populacional e PIB per Capita
    float densidadep = (float) populacao / area;
    float densidadep2 = (float) populacao2 / area2;

    float pibc = (pib * 1000000000) / (float) populacao;
    float pibc2 = (pib2 * 1000000000) / (float) populacao2;

    // Super Poder
    superpoder1 = populacao + area + pib + pibc + (1 / densidadep) + PontosTuristicos;
    superpoder2 = populacao2 + area2 + pib2 + pibc2 + (1 / densidadep2) + PontosTuristicos2;

    //Resultado Carta 1
    printf("\n-Passando as Informacoes das Cartas-\n\n-----CARTA 1-----\n");
    printf("Estado: %s", estado);
    printf("\nCodigo: %s\n", code);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2fkm2\n", area);
    printf("Densidade Populacional: %.2fhab/km2\n", densidadep);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("PIB per Capita: %.2f reais\n", pibc);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);
    printf("Super Poder: %.2f\n", superpoder1);

    //Resultado Carta 2
    printf("\n-----CARTA 2-----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", code2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("Densidade Populacional: %.2fhab/km\n", densidadep2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);
    printf("PIB per Capita: %.2f reais\n", pibc2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\nAperte qualquer tecla e Enter para continuar:");
    scanf("%s", cont);

    //Etapa Comparar as Cartas
    printf("\n-----COMPARANDO CARTAS-----\n");

    if (populacao > populacao2) {
        printf("Populacao: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("Populacao: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    if (area > area2) {
        printf("Area: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("Area: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    if (PontosTuristicos > PontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("Pontos Turisticos: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    if (pib > pib2) {
        printf("PIB: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("PIB: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    if (densidadep < densidadep2) {
        printf("Densidade Populacional: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("Densidade Populacional: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    if (pibc > pibc2) {
        printf("PIB Per Capita: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("PIB Per Capita: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 (%s) Ganhou!!\n", cidade);
    } else {
        printf("Super Poder: Carta 2 (%s) Ganhou!!\n", cidade2);
    }

    return 0;
}