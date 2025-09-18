#include <stdio.h>

int main(){
    char carta;
    char estado;
    char codigo[5];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;

    printf("Bem Vindo ao Super Trunfo! \n");
    printf("Digite o numero da sua carta: \n");
    scanf(" %c", &carta);

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("digite a área: \n");
    scanf("%f", &area);

    printf("Escreva o PIB da localidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);



    return 0;
}