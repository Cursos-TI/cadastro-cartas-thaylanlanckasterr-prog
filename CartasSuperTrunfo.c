#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Variáveis da carta 1
    char estado[50], codigodacarta[50], nomedacidade[50];
    int populacao;
    float areaemKM, pib;
    int numeroTuristicos;

    // Variáveis da carta 2
    char estado2[50], codigodacarta2[50], nomedacidade2[50];
    int populacao2;
    float areaemKM2, pib2;
    int numeroTuristicos2;

    //**************************************************************************************
    // Entrada de dados da CARTA 1
    printf("Cadastro de Carta Super Trunfo - Cidades\n");
    printf("\n--- Dados da carta 1 ---\n");

    printf("Digite o nome do Estado: ");
    scanf("%49s", estado);

    printf("Digite o código da carta: ");
    scanf("%49s", codigodacarta);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomedacidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área em KM² da cidade: ");
    scanf("%f", &areaemKM);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeroTuristicos);

    //**************************************************************************************
    // Entrada de dados da CARTA 2
    printf("\n--- Dados da carta 2 ---\n");

    printf("Digite o nome do Estado: ");
    scanf("%49s", estado2);

    printf("Digite o código da carta: ");
    scanf("%49s", codigodacarta2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomedacidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área em KM² da cidade: ");
    scanf("%f", &areaemKM2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeroTuristicos2);

    //**************************************************************************************
    // Exibição dos dados da carta 1
    printf("\n===== DADOS DA CARTA 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área em KM²: %.2f\n", areaemKM);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroTuristicos);

    //**************************************************************************************
    // Exibição dos dados da carta 2
    printf("\n===== DADOS DA CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", areaemKM2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroTuristicos2);

    return 0;
}

