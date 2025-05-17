#include <stdio.h>

int main() {

    char estadoCarta1;
    char estadoCarta2;

    char codCarta1[10];
    char codCarta2[10];

    char cidadeCarta1[50];
    char cidadeCarta2[50];

    int populacaoCarta1;
    int populacaoCarta2;

    float areaCarta1;
    float areaCarta2;
    
    float pibCarta1;
    float pibCarta2;

    int qtdPontosTuristicosCarta1;
    int qtdPontosTuristicosCarta2;

    float denPopulacionalCarta1;
    float denPopulacionalCarta2;

    float pibCapitaCarta1;
    float pibCapitaCarta2;

    
    printf("\n\n- INSIRA OS DADOS DA CARTA 1 -\n\n");
    printf("Digite a primeira letra do estado da carta 1: \n");
    scanf("%c", &estadoCarta1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidadeCarta1);
    
    printf("Digite o número de habitantes da cidade da carta 1: \n");
    scanf("%d", &populacaoCarta1);

    printf("Digite a área da cidade da carta 1: \n");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pibCarta1);

    printf("Digite a quantidade de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &qtdPontosTuristicosCarta1);





    printf("\n\n- INSIRA OS DADOS DA CARTA 2 -\n\n");

    printf("Digite a primeira letra do estado da carta 2: \n");
    scanf(" %c", &estadoCarta2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidadeCarta2);
    
    printf("Digite o número de habitantes da cidade da carta 2: \n");
    scanf("%d", &populacaoCarta2);

    printf("Digite a área da cidade da carta 2: \n");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pibCarta2);

    printf("Digite a quantidade de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &qtdPontosTuristicosCarta2);

    



    printf("\n\n----- CARTA 1 -----\n\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codCarta1);
    printf("Cidade: %s\n", cidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicosCarta1);

    denPopulacionalCarta1 = (float) populacaoCarta1 / areaCarta1;
    pibCarta1 *= 1000000000.0;
    pibCapitaCarta1 =  (float) pibCarta1 / populacaoCarta1;
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacionalCarta1);
    printf("PIB per Capita: %.2f reais\n", pibCapitaCarta1);
    
     
    printf("\n\n----- CARTA 2 -----\n\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codCarta2);
    printf("Cidade: %s\n", cidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicosCarta2);

    denPopulacionalCarta2 = (float) populacaoCarta2 / areaCarta2;
    pibCarta2 *= 1000000000.0;
    pibCapitaCarta2 = (float) pibCarta2 / populacaoCarta2;
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacionalCarta2);
    printf("PIB per Capita: %.2f reais\n", pibCapitaCarta2);
    


    return 0;
    

}