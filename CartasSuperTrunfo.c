#include <stdio.h>
#include <string.h>

int main() {
    int populacaoA, pTuristicosA, cidadeA, populacaoB, pTuristicosB, cidadeB, resultado, escolhaJogador, primeiroAttComp, segundoAttComp, valor1A, valor1B;
    char nomeA[30], estadoA[2], nomeB[30], estadoB[2], primeiraEscolha[30], segundaEscolha[30], vencedor1[30], vencedor2[30], vencedorGeral[30];
    float areaA, PIBA, densidadeA, perCaptaA, superPoderA, areaB, PIBB, densidadeB, perCaptaB, superPoderB, resultadoA, resultadoB, valor2A, valor2B;

    //CARTA A
    strcpy(nomeA, "SaoJose");
    strcpy(estadoA, "A");
    populacaoA = 260000;
    pTuristicosA = 30;
    cidadeA = 01;
    areaA = 150;
    PIBA = 13000000000;
    densidadeA = populacaoA/areaA;
    perCaptaA = PIBA/populacaoA;
    superPoderA = (float)populacaoA + areaA + PIBA + (1/densidadeA) + (float)pTuristicosA + perCaptaA;

    //CARTA B
    strcpy(nomeB, "Floripa");
    strcpy(estadoB, "B");
    populacaoB = 550000;
    pTuristicosB = 45;
    cidadeB = 02;
    areaB = 125;
    PIBB = 26000000000;
    densidadeB = populacaoB/areaB;
    perCaptaB = PIBB/populacaoB;
    superPoderB = (float)populacaoB + areaB + PIBB + (1/densidadeB) + (float)pTuristicosB + perCaptaB;

    //COMPARAÇÃO DE CARTAS COM ESCOLHA DO ATRIBUTO VIA SWITCH CASE
    printf("********** Escolha um atributo para comparar: ********** \n");
    printf("1. Populacao \n");
    printf("2. Pontos Turisticos \n");
    printf("3. Area \n");
    printf("4. PIB \n");
    printf("5. Densidade \n");
    printf("6. PIB per Capta \n");
    printf("7. Super Poder \n");
    scanf("%d", &primeiroAttComp);

    switch(primeiroAttComp){
        case 1:
        strcpy(primeiraEscolha, "População");
        valor1A = populacaoA;
        valor1B = populacaoB;
        strcpy(vencedor1, populacaoA > populacaoB ? nomeA : (populacaoB > populacaoA ? nomeB : "Empate!"));
        printf("********** Escolha mais uma opçao: ********** \n");
        printf("2. Pontos Turisticos \n");
        printf("3. Area \n");
        printf("4. PIB \n");
        printf("5. Densidade \n");
        printf("6. PIB per Capta \n");
        printf("7. Super Poder \n");
        scanf("%d", &segundoAttComp);
        break;
        case 2:
        strcpy(primeiraEscolha, "PontosTuristicos");
        valor1A = pTuristicosA;
        valor1B = pTuristicosB;
        strcpy(vencedor1, pTuristicosA > pTuristicosB ? nomeA : (pTuristicosB > pTuristicosA ? nomeB : "Empate!"));
        printf("*** Escolha mais uma opçao: *** \n");       
        printf("1. Populacao \n");
        printf("3. Area \n");
        printf("4. PIB \n");
        printf("5. Densidade \n");
        printf("6. PIB per Capta \n");
        printf("7. Super Poder \n");
        scanf("%d", &segundoAttComp);
        break;
        case 3:
        strcpy(primeiraEscolha, "Area");
        valor1A = areaA;
        valor1B = areaB;
        strcpy(vencedor1, areaA > areaB ? nomeA : (areaB > areaA ? nomeB : "Empate!"));
        printf("*** Escolha mais uma opçao: *** \n");       
        printf("1. Populacao \n");
        printf("2. Pontos Turisticos \n");
        printf("4. PIB \n");
        printf("5. Densidade \n");
        printf("6. PIB per Capta \n");
        printf("7. Super Poder \n");
        scanf("%d", &segundoAttComp);
        break;
        case 4:
        strcpy(primeiraEscolha, "PIB");
        valor1A = PIBA;
        valor1B = PIBB;
        strcpy(vencedor1, PIBA > PIBB ? nomeA : (PIBB > PIBA ? nomeB : "Empate!"));
        printf("*** Escolha mais uma opçao: *** \n");
        printf("1. Populacao \n");
        printf("2. Pontos Turisticos \n");
        printf("3. Area \n");
        printf("5. Densidade \n");
        printf("6. PIB per Capta \n");
        printf("7. Super Poder \n");
        scanf("%d", &segundoAttComp);
        break;
        case 5:
        strcpy(primeiraEscolha, "Densidade");
        valor1A = densidadeA;
        valor1B = densidadeB;
        strcpy(vencedor1, densidadeA < densidadeB ? nomeA : (densidadeB < densidadeA ? nomeB : "Empate!"));
        printf("*** Escolha mais uma opçao: *** \n");
        printf("1. Populacao \n");
        printf("2. Pontos Turisticos \n");
        printf("3. Area \n");
        printf("4. PIB \n");
        printf("6. PIB per Capta \n");
        printf("7. Super Poder \n");
        scanf("%d", &segundoAttComp);
        break;
        case 6:
        strcpy(primeiraEscolha, "PIBperCapta");
        valor1A = perCaptaA;
        valor1B = perCaptaB;
        strcpy(vencedor1, perCaptaA > perCaptaB ? nomeA : (perCaptaB > perCaptaA ? nomeB : "Empate!"));
        printf("*** Escolha mais uma opçao: *** \n");
        printf("1. Populacao \n");
        printf("2. Pontos Turisticos \n");
        printf("3. Area \n");
        printf("4. PIB \n");
        printf("5. Densidade \n");
        printf("7. Super Poder \n");
        scanf("%d", &segundoAttComp);
        break;
        case 7:
        strcpy(primeiraEscolha, "SuperPoder");
        valor1A = superPoderA;
        valor1B = superPoderB;
        strcpy(vencedor1, superPoderA > superPoderB ? nomeA : (superPoderA > superPoderB ? nomeB : "Empate!"));
        printf("*** Escolha mais uma opçao: *** \n");
        printf("1. Populacao \n");
        printf("2. Pontos Turisticos \n");
        printf("3. Area \n");
        printf("4. PIB \n");
        printf("5. Densidade \n");
        printf("6. PIB per Capta \n");
        scanf("%d", &segundoAttComp);
        break;
        default:
        printf("Opçao invalida!");
    }
    switch(segundoAttComp){
        case 1:
        strcpy(segundaEscolha, "População");
        valor2A = populacaoA;
        valor2B = populacaoB;
        strcpy(vencedor2, populacaoA > populacaoB ? nomeA : (populacaoB > populacaoA ? nomeB : "Empate!"));
        break;
        case 2:
        strcpy(segundaEscolha, "PontosTuristicos");
        valor2A = pTuristicosA;
        valor2B = pTuristicosB;
        strcpy(vencedor2, pTuristicosA > pTuristicosB ? nomeA : (pTuristicosB > pTuristicosA ? nomeB : "Empate!"));
        break;
        case 3:
        strcpy(segundaEscolha, "Area");
        valor2A = areaA;
        valor2B = areaB;
        strcpy(vencedor2, areaA > areaB ? nomeA : (areaB > areaA ? nomeB : "Empate!"));
        break;
        case 4:
        strcpy(segundaEscolha, "PIB");
        valor2A = PIBA;
        valor2B = PIBB;
        strcpy(vencedor2, PIBA > PIBB ? nomeA : (PIBB > PIBA ? nomeB : "Empate!"));
        break;
        case 5:
        strcpy(segundaEscolha, "Densidade");
        valor2A = densidadeA;
        valor2B = densidadeB;
        strcpy(vencedor2, densidadeA < densidadeB ? nomeA : (densidadeB < densidadeA ? nomeB : "Empate!"));
        break;
        case 6:
        strcpy(segundaEscolha, "PIBperCapta");
        valor2A = perCaptaA;
        valor2B = perCaptaB;
        strcpy(vencedor2, perCaptaA > perCaptaB ? nomeA : (perCaptaB > perCaptaA ? nomeB : "Empate!"));
        break;
        case 7:
        strcpy(segundaEscolha, "SuperPoder");
        valor2A = superPoderA;
        valor2B = superPoderB;
        strcpy(vencedor2, superPoderA > superPoderB ? nomeA : (superPoderA > superPoderB ? nomeB : "Empate!"));
        break;
        default:
        printf("Opção inválida! \n");
        break;
    }

    resultadoA = valor1A + valor2A;
    resultadoB = valor1B + valor2B;


    strcpy(vencedorGeral, (resultadoA > resultadoB ? nomeA : (resultadoB > resultadoA ? nomeB : "Empate!")));

    printf("A sua primeira escolha foi %s e o vencedor foi %s! \n", primeiraEscolha, vencedor1);
    printf("A sua segunda escolha foi %s e o vencedor foi %s! \n", segundaEscolha, vencedor2);
    printf("O vencedor geral foi %s no somatorio dos dois atributos escolhidos!", vencedorGeral);

    return 0;
}