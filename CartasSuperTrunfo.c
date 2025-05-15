#include <stdio.h>

int main() {
    int populacao, pTuristicos, cidade;
    char nome[30], estado[2];
    float area, PIB;

    printf("Digite o nome da cidade, sem espacos (ex: SaoJose): \n");
    scanf("%s", nome);

    printf("Digite o estado (de A a H): \n");
    scanf("%s", &estado);

    printf("Digite o codigo da cidade de 01 a 04: \n");
    scanf("%d", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos a cidade tem: \n");
    scanf("%d", &pTuristicos);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("%s - %s%d \n", nome, estado, cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Pontos Turísticos: %d \n", pTuristicos);

    return 0;
}
