#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Comparação por um atributo escolhido pelo jogador

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

    int opcao; // para o menu

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
    // Menu interativo
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área (KM²)\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s (%s): %lu habitantes\n", nomedacidade, estado, populacao);
            printf("%s (%s): %lu habitantes\n", nomedacidade2, estado2, populacao2);
            if (populacao > populacao2)
                printf("Vencedor: %s!\n", nomedacidade);
            else if (populacao < populacao2)
                printf("Vencedor: %s!\n", nomedacidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área (KM²)\n");
            printf("%s (%s): %.2f km²\n", nomedacidade, estado, areaemKM);
            printf("%s (%s): %.2f km²\n", nomedacidade2, estado2, areaemKM2);
            if (areaemKM > areaemKM2)
                printf("Vencedor: %s!\n", nomedacidade);
            else if (areaemKM < areaemKM2)
                printf("Vencedor: %s!\n", nomedacidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s (%s): %.2f bilhões\n", nomedacidade, estado, pib);
            printf("%s (%s): %.2f bilhões\n", nomedacidade2, estado2, pib2);
            if (pib > pib2)
                printf("Vencedor: %s!\n", nomedacidade);
            else if (pib < pib2)
                printf("Vencedor: %s!\n", nomedacidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s (%s): %d pontos\n", nomedacidade, estado, numeroTuristicos);
            printf("%s (%s): %d pontos\n", nomedacidade2, estado2, numeroTuristicos2);
            if (numeroTuristicos > numeroTuristicos2)
                printf("Vencedor: %s!\n", nomedacidade);
            else if (numeroTuristicos < numeroTuristicos2)
                printf("Vencedor: %s!\n", nomedacidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s (%s): %.2f hab/km²\n", nomedacidade, estado, densidadePopulacional);
            printf("%s (%s): %.2f hab/km²\n", nomedacidade2, estado2, densidadePopulacional2);
            // Regra invertida: menor densidade vence
            if (densidadePopulacional < densidadePopulacional2)
                printf("Vencedor: %s!\n", nomedacidade);
            else if (densidadePopulacional > densidadePopulacional2)
                printf("Vencedor: %s!\n", nomedacidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("\n====================================\n");

    return 0;
}
