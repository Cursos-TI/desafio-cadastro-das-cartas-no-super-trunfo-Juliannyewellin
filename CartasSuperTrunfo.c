#include <stdio.h>

int main (){

    int Pernambuco = 47.000;
    int Ceara = 50.000;
    char estados[5];
    char nome[20]; Pernambuco, Ceara;
    int populacao;
    float area; Pernambuco = 98.281, Ceara = 148.886,308;
    float pib; Pernambuco = 228.67, Ceara = 194.88;
    int numerodepontosturisticos; Pernambuco = 10, Ceara = 16;

    char carta1 = Pernambuco;
    char carta2 = Ceara;
    char estado;

    printf("Bem Vindo ao Super Trunfo! \n");
    printf("Escolha sua carta (Ex: A01): \n");
    scanf(" %c %c", &carta1, &carta2);
    if (carta1 == '1', carta1 == 'carta 1')
    {
        printf("Sua carta é: Pernambuco. \n");
    }
    else if (carta2 == '2', carta2 == 'carta 2')
    {
        printf("Sua carta e: Ceará. \n");
    }
    else
    {
        printf("Escolha invalida.\n");
    }

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB da localidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    return 0;
}