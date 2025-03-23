#include <stdio.h>

//Criando e manipulando um "objeto" Pessoa
struct Carta
{

    char numeroCarta[2];
    char estado[20];
    char codigoDaCarta[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numeroDePontoTuristico;
};

int main()
{
    struct Carta carta1;

    printf("--------------Digite os dados da sua primeira carta:--------------\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &carta1.estado);

    printf("Digite o codigo da sua carta: \n");
    scanf("%s", &carta1.codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &carta1.nomeCidade);

    printf("Digite o numero populacional: \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de ponto turistico: \n");
    scanf("%d", &carta1.numeroDePontoTuristico);

    // Segunda carta
    struct Carta carta2;

    printf("--------------Digite os dados da sua segunda carta:--------------\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &carta2.estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &carta2.codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &carta2.nomeCidade);

    printf("Digite o numero da populacional: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &carta2.area);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de  ponto turistico \n");
    scanf("%d", &carta2.numeroDePontoTuristico);

    // imprir a primeira carta
    printf("--------------Carta 1:--------------\n");
    printf("Estado: %s \n", carta1.estado);
    printf("Codigo: %s \n ", carta1.codigoDaCarta);
    printf("Nome da ciade: %s \n", carta1.nomeCidade);
    printf("População: %d", carta1.populacao);
    printf("Area: %f \n", carta1.area, "Km²");
    printf("Pib: %f\n", carta1.pib);
    printf("Numero de ponto turistico: \n", carta1.numeroDePontoTuristico);

    // Imprimir a segunda carta
    printf("--------------Carta 2:--------------\n");
    printf("Estado: %s \n", carta2.estado);
    printf("Codigo: %s \n ", carta2.codigoDaCarta);
    printf("Nome da cidade: %s \n", carta2.nomeCidade);
    printf("População :%d\n", carta2.populacao);
    printf("Area: %f \n", carta2.area, "Km²");
    printf("Pib: %f\n", carta2.pib);
    printf("Numero de ponto turistico: %d\n", carta2.numeroDePontoTuristico);

    return 0;
}