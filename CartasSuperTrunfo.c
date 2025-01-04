#include <stdio.h>

int main() {

    //[ Variaveis 👨‍💻 ]//

    int codeCity;
    int population;
    int touristPlaces;
    int area;
    float PIB;
    char (nameCity) [20] = "";

    // [ ENTRADA DE DADOS 💻 ] //

    printf("Codigo da cidade: \n");
    scanf("%d", &codeCity); // pega o codigo da cidade.

    printf("Quantidade de pessoas que vivem nessa cidade?\n:");
    scanf("%d", &population); // Pega o total de pessoas que vivem nessa cidade.

    printf("Quantas areas turisticas existem nessa cidade?\n:");
    scanf("%d", &touristPlaces); // pega todas as areas turisticas.

    printf("Qual e o PIB dessa cidade?\n:");
    scanf("%f", &PIB); // pede o pib dessa cidade.

    printf("Tamanho da area que essa cidade cobre?:\n");
    scanf("%d", &area); // pede o tamanho que a cidade cobre.

    printf("Diga-me o nome de sua cidade:");
    scanf("%20s", nameCity); // pede o nome da cidade.

    // [ SAIDA DE DADOS 💻 ] // 

    printf("SUCCESS 🎉🎉 | AQUI ESTÃO OS DADOS INSERIDOS! 💻\n\n");

    /*  Esta printando os dados ao jogador */

    printf("Codigo da cidade: %d\n", codeCity); 
    printf("População: %d\n", population);
    printf("Areas Turisticas: %d\n", touristPlaces);
    printf("PIB: %f\n", PIB);
    printf("Area ocupada: %d\n", area);
    printf("Nome da cidade: %s\n", nameCity);                

    return 0;

};
