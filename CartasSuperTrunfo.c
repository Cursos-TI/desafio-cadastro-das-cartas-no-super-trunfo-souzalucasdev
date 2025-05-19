#include <stdio.h>

int main() {
    int populacaoA, pTuristicosA, cidadeA, populacaoB, pTuristicosB, cidadeB,resultado;
    char nomeA[30], estadoA[2], nomeB[30], estadoB[2];
    float areaA, PIBA, densidadeA, perCaptaA, superPoderA, areaB, PIBB, densidadeB, perCaptaB, superPoderB;

    
    printf("Dados da carta A \n");

    printf("Digite o nome da cidade, sem espacos (ex: SaoJose): \n");
    scanf("%s", nomeA);

    // printf("Digite o estado (de A a H): \n");
    // scanf("%s", &estadoA);

    // printf("Digite o codigo da cidade de 01 a 04: \n");
    // scanf("%d", &cidadeA);

    printf("Digite a população: \n");
    scanf("%d", &populacaoA);

    // printf("Digite quantos pontos turisticos a cidade tem: \n");
    // scanf("%d", &pTuristicosA);

    // printf("Digite a area: \n");
    // scanf("%f", &areaA);

    // printf("Digite o PIB: \n");
    // scanf("%f", &PIBA);

    // densidadeA = populacaoA/areaA;
    // perCaptaA = PIBA/populacaoA;
    // superPoderA = (float)populacaoA + areaA + PIBA + (1/densidadeA) + (float)pTuristicosA + perCaptaA;

    printf("Dados da carta B \n");

    printf("Digite o nome da cidade, sem espacos (ex: SaoJose): \n");
    scanf("%s", nomeB);

    // printf("Digite o estado (de A a H): \n");
    // scanf("%s", &estadoB);

    // printf("Digite o codigo da cidade de 01 a 04: \n");
    // scanf("%d", &cidadeB);

    printf("Digite a população: \n");
    scanf("%d", &populacaoB);

    // printf("Digite quantos pontos turisticos a cidade tem: \n");
    // scanf("%d", &pTuristicosB);

    // printf("Digite a area: \n");
    // scanf("%f", &areaB);

    // printf("Digite o PIB: \n");
    // scanf("%f", &PIBB);

    // densidadeB = populacaoA/areaB;
    // perCaptaB = PIBA/populacaoB;
    // superPoderB = (float)populacaoB + areaB + PIBB + (1/densidadeB) + (float)pTuristicosB + perCaptaB;


    //PRINT CARTA A
    // printf("%s - %s%d \n", nomeA, estadoA, cidadeA);
    // printf("População: %d \n", populacaoA);
    // printf("Área: %f \n", areaA);
    // printf("PIB: %f \n", PIBA);
    // printf("Pontos Turísticos: %d \n", pTuristicosA);
    // printf("Densidade: %.2f \n", densidadeA);
    // printf("Pib per Capta: %.2f \n", perCaptaA);
    // printf("SUPER PODER: %.2f \n", superPoderA);

    //PRINT CARTA B
    // printf("%s - %s%d \n", nomeB, estadoB, cidadeB);
    // printf("População: %d \n", populacaoB);
    // printf("Área: %f \n", areaB);
    // printf("PIB: %f \n", PIBB);
    // printf("Pontos Turísticos: %d \n", pTuristicosB);
    // printf("Densidade: %.2f \n", densidadeB);
    // printf("Pib per Capta: %.2f \n", perCaptaB);
    // printf("SUPER PODER: %.2f \n", superPoderB);

    //COMPARANDO AS CARTAS:


    // printf("Comparando carta A com a carta B: \n");
    // resultado = populacaoA > populacaoB;
    // printf("Populacao: %d\n", resultado);
    // resultado = areaA > areaB;
    // printf("Area: %d\n", resultado);
    // resultado = PIBA > PIBB;
    // printf("PIB: %d\n", resultado);
    // resultado = pTuristicosA > pTuristicosB;
    // printf("Pontos Turisticos: %d\n", resultado);
    // resultado = densidadeA < densidadeB;
    // printf("Densidade: %d\n", resultado);
    // resultado = perCaptaA > perCaptaB;
    // printf("PIB per Capta: %d\n", resultado);
    // resultado = superPoderA > superPoderB;
    // printf("Super Poder: %d\n", resultado);

    //IMPLEMENTAÇÃO IF-ELSE:

    if (populacaoA > populacaoB) {
        printf("A Populacao de %s é maior que a de %s.\n", nomeA, nomeB);
    } else {
        printf("A populacao de %s é maior que a de %s. \n", nomeB, nomeA);
    }



    return 0;
}