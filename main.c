#include <stdio.h>

int main() {

    char estadoCarta1;
    char estadoCarta2;

    char codCarta1[10];
    char codCarta2[10];

    char cidadeCarta1[50];
    char cidadeCarta2[50];

    unsigned long int populacaoCarta1;
    unsigned long int populacaoCarta2;

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

    float superPoderCarta1;
    float superPoderCarta2;

    
    printf("\n\n- INSIRA OS DADOS DA CARTA 1 -\n\n");
    printf("Digite a primeira letra do estado da carta 1: \n");
    scanf("%c", &estadoCarta1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidadeCarta1);
    
    printf("Digite o número de habitantes da cidade da carta 1: \n");
    scanf("%lu", &populacaoCarta1);

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
    scanf("%lu", &populacaoCarta2);

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
    printf("População: %lu\n", populacaoCarta1);
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
    printf("População: %lu\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicosCarta2);

    denPopulacionalCarta2 = (float) populacaoCarta2 / areaCarta2;
    pibCarta2 *= 1000000000.0;
    pibCapitaCarta2 = (float) pibCarta2 / populacaoCarta2;
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacionalCarta2);
    printf("PIB per Capita: %.2f reais\n", pibCapitaCarta2);

    float inverterDensidadeCarta1 = 1/denPopulacionalCarta1;
    float inverterDensidadeCarta2 = 1/denPopulacionalCarta2;

    superPoderCarta1 = (float) populacaoCarta1 + areaCarta1 + pibCarta1 + qtdPontosTuristicosCarta1 + 
          pibCapitaCarta1 + inverterDensidadeCarta1;

    superPoderCarta2 = (float) populacaoCarta2 + areaCarta2 + pibCarta2 + qtdPontosTuristicosCarta2 +
          pibCapitaCarta2 + inverterDensidadeCarta2;

    printf("\nSuper Poder Carta 1: %.1f\n", superPoderCarta1);
    printf("\nSuper Poder Carta 2: %.1f\n", superPoderCarta2);

    int resultadoPopulação = populacaoCarta1 > populacaoCarta2;
    int resultadoArea = areaCarta1 > areaCarta2;
    int resultadoPib = pibCarta1 > pibCarta2;
    int resultadoPontos = qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2;
    int resultadoDensidade = denPopulacionalCarta1 < denPopulacionalCarta2;
    int resultadoPibCapita = pibCapitaCarta1 > pibCapitaCarta2;
    int resultadoSuperPoder = superPoderCarta1 > superPoderCarta2;

    printf("\n\n ----- COMPARAÇÃO DAS CARTAS -----\n\n");
    printf("População: %d\n", resultadoPopulação);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPontos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPibCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);
    
    printf("\n\n----- COMPARAÇÃO DE CARTAS (ATRIBUTO: QUANTIDADE DE PONTOS TURÍSTICOS) -----\n\n");
    printf("Carta 1 - %s: %d\n", cidadeCarta1, qtdPontosTuristicosCarta1);
    printf("Carta 2 - %s: %d\n", cidadeCarta2, qtdPontosTuristicosCarta2);
    
    if(qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2) {
      printf("Carta 1 (%s) venceu !", cidadeCarta1);
    } else {
      printf("Carta 2 (%s) venceu !", cidadeCarta2);
    }

    int opcao;

    printf("\n\n--- MENU PRINCIPAL ---\n\n");
    printf("1 - Comparar nome da cidade\n");
    printf("2 - Comparar população\n");
    printf("3 - Comparar área\n");
    printf("4 - Comparar PIB\n");
    printf("5 - Comparar quantidade de pontos turísticos\n");
    printf("6 - Comparar densidade populacional\n");
    printf("7 - Sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {

      case 1:
        printf("\nCidade carta 1: %s\nCidade carta 2: %s\n", cidadeCarta1, cidadeCarta2);
        break;

      case 2:
        if(populacaoCarta1 > populacaoCarta2) {
          printf("\nPOPULAÇÃO CARTA 1 (%s): %lu\nPOPULAÇÃO CARTA 2 (%s): %lu\nCARTA 1 VENCEU !", 
          cidadeCarta1, populacaoCarta1, cidadeCarta2, populacaoCarta2);

        } else if (populacaoCarta2 > populacaoCarta1) {
           printf("\nPOPULAÇÃO CARTA 1 (%s): %lu\nPOPULAÇÃO CARTA 2 (%s): %lu\nCARTA 2 VENCEU !", 
          cidadeCarta1, populacaoCarta1, cidadeCarta2, populacaoCarta2);

        } else {
           printf("\nPOPULAÇÃO CARTA 1 (%s): %lu\nPOPULAÇÃO CARTA 2 (%s): %lu\nEMPATE !", 
          cidadeCarta1, populacaoCarta1, cidadeCarta2, populacaoCarta2);
        }
        break;

      case 3:
        if(areaCarta1 > areaCarta2) {
          printf("\nÁREA CARTA 1 (%s): %.2f\nÁREA CARTA 2 (%s): %.2f\nCARTA 1 VENCEU !", 
          cidadeCarta1, areaCarta1, cidadeCarta2, areaCarta2);

        } else if (areaCarta2 > areaCarta1) {
           printf("\nÁREA CARTA 1 (%s): %.2f\nÁREA CARTA 2 (%s): %.2f\nCARTA 2 VENCEU !", 
          cidadeCarta1, areaCarta1, cidadeCarta2, areaCarta2);

        } else {
           printf("\nÁREA CARTA 1 (%s): %.2f\nÁREA CARTA 2 (%s): %.2f\nEMPATE !", 
          cidadeCarta1, areaCarta1, cidadeCarta2, areaCarta2);
        }
        break;

      case 4:
        if(pibCarta1 > pibCarta2) {
          printf("\nPIB CARTA 1 (%s): %.2f\nPIB CARTA 2 (%s): %.2f\nCARTA 1 VENCEU !", 
          cidadeCarta1, pibCarta1, cidadeCarta2, pibCarta2);

        } else if (pibCarta2 > pibCarta1) {
           printf("\nPIB CARTA 1 (%s): %.2f\nPIB CARTA 2 (%s): %.2f\nCARTA 2 VENCEU !", 
          cidadeCarta1, pibCarta1, cidadeCarta2, pibCarta2);

        } else {
           printf("\nPIB CARTA 1 (%s): %.2f\nPIB CARTA 2 (%s): %.2f\nEMPATE !", 
          cidadeCarta1, pibCarta1, cidadeCarta2, pibCarta2);
        }
        break;

      case 5:
        if(qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2) {
          printf("\nPONTOS TURÍSTICOS CARTA 1 (%s): %d\nPONTOS TURÍSTICOS CARTA 2 (%s): %d\nCARTA 1 VENCEU !", 
          cidadeCarta1, qtdPontosTuristicosCarta1, cidadeCarta2, qtdPontosTuristicosCarta2);

        } else if (qtdPontosTuristicosCarta2 > qtdPontosTuristicosCarta1) {
           printf("\nPONTOS TURÍSTICOS CARTA 1 (%s): %d\nPONTOS TURÍSTICOS CARTA 2 (%s): %d\nCARTA 2 VENCEU !", 
          cidadeCarta1, qtdPontosTuristicosCarta1, cidadeCarta2, qtdPontosTuristicosCarta2);

        } else {
           printf("\nPONTOS TURÍSTICOS CARTA 1 (%s): %d\nPONTOS TURÍSTICOS CARTA 2 (%s): %d\nEMPATE !", 
          cidadeCarta1, qtdPontosTuristicosCarta1, cidadeCarta2, qtdPontosTuristicosCarta2);
        }
        break;

      case 6:
        if(denPopulacionalCarta1 > denPopulacionalCarta2) {
          printf("\nDENSIDADE POPULACIONAL CARTA 1 (%s): %.2f\nDENSIDADE POPULACIONAL CARTA 2 (%s): %.2f\nCARTA 1 VENCEU !", 
          cidadeCarta1, denPopulacionalCarta1, cidadeCarta2, denPopulacionalCarta2);

        } else if (denPopulacionalCarta2 > denPopulacionalCarta1) {
           printf("\nDENSIDADE POPULACIONAL CARTA 1 (%s): %.2f\nDENSIDADE POPULACIONAL CARTA 2 (%s): %.2f\nCARTA 2 VENCEU !", 
          cidadeCarta1, denPopulacionalCarta1, cidadeCarta2, denPopulacionalCarta2);

        } else {
           printf("\nDENSIDADE POPULACIONAL CARTA 1 (%s): %.2f\nDENSIDADE POPULACIONAL CARTA 2 (%s): %.2f\nEMPATE !", 
          cidadeCarta1, denPopulacionalCarta1, cidadeCarta2, denPopulacionalCarta2);
        }
        break;

      case 7:
        printf("Jogo Encerrado !\n");
        break;

      default:
         printf("Opção inválida !\n");
    }
    
    


    return 0;
    

}