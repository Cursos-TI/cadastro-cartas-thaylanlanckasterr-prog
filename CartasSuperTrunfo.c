#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Comparação por um único atributo escolhido (exemplo: População)

int main() {
    // Variáveis da carta 1
    char estado[50], codigodacarta[50], nomedacidade[50];
    unsigned long int populacao;
    float areaemKM, pib;
    int numeroTuristicos;
    float densidadePopulacional, pibPerCapita, superPoder;

    // Variáveis da carta 2
    char estado2[50], codigodacarta2[50], nomedacidade2[50];
    unsigned long int populacao2;
    float areaemKM2, pib2;
    int numeroTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

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
    scanf("%lu", &populacao);

    printf("Digite a área em KM² da cidade: ");
    scanf("%f", &areaemKM);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeroTuristicos);

    // Cálculos da carta 1
    densidadePopulacional = (float)populacao / areaemKM;
    pibPerCapita = pib / (float)populacao;
    superPoder = (float)populacao + areaemKM + pib + numeroTuristicos + pibPerCapita + (1.0 / densidadePopulacional);

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
    scanf("%lu", &populacao2);

    printf("Digite a área em KM² da cidade: ");
    scanf("%f", &areaemKM2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeroTuristicos2);

    // Cálculos da carta 2
    densidadePopulacional2 = (float)populacao2 / areaemKM2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + areaemKM2 + pib2 + numeroTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    //**************************************************************************************
    // Exibição resumida dos dados
    printf("\n===== RESUMO DAS CARTAS =====\n");
    printf("Carta 1 - %s (%s)\n", nomedacidade, estado);
    printf("Carta 2 - %s (%s)\n", nomedacidade2, estado2);

    //**************************************************************************************
    // COMPARAÇÃO DE UM ÚNICO ATRIBUTO (exemplo: População)
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: População\n\n");

    printf("Carta 1 - %s (%s): %lu habitantes\n", nomedacidade, estado, populacao);
    printf("Carta 2 - %s (%s): %lu habitantes\n\n", nomedacidade2, estado2, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade);
    } else if (populacao < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
