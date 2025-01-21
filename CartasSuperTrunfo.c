#include <stdio.h>

int main() {

    int population, tourist, zone, PIB; 
    float x,y;

    printf("==========>> Cadastro de cartas <<============\n\n");

//entrada de dados
    printf("Coloque a população: ");
        scanf("%d", &population);
    printf("Coloque os pontos turisticos: ");
        scanf("%d", &tourist);
    printf("Coloque o PIB: ");
        scanf("%d", &PIB);
    printf("Coloque sua Zone: ");
        scanf("%d", &zone);

    x = (float) population / zone;
    y = (float) PIB / population;

    // saida de dados
    printf("Seus dados são!\n\n");

    printf("População Media: %.3f\n", x);
    printf("PIB da cidade: %.2f\n", y);
    printf("Pontos turisticos: %d\n", tourist);

    return 0;
};