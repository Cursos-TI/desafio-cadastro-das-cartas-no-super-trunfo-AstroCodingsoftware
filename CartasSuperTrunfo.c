#include <stdio.h>

int main() {

    int population, tourist; 
    float zone, PIB;

    printf("==========>> Cadastro de cartas <<============\n\n");
//entrada de dados
    printf("Coloque a população: ");
        scanf("%d", &population);
    printf("Coloque os pontos turisticos: ");
        scanf("%d", &tourist);
    printf("Coloque o PIB: ");
        scanf("%f", &PIB);
    printf("Coloque sua Zone: ");
        scanf("%f", &zone);

    // saida de dados
    printf("Seus dados são!\n\n");
    printf("População:%d\nTuristicos:%d\nZona:%f\nPIB:%f\n", population, tourist, zone, PIB);
    return 0;
};