#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação por dois atributos escolhidos pelo jogador

int main() {
    // Variáveis da carta 1
    char estado[50], codigodacarta[50], nomedacidade[50];
    unsigned long int populacao;
    float areaemKM, pib;
    int numeroTuristicos;
    float densidadePopulacional, pibPerCapita;

    // Variáveis da carta 2
    char estado2[50], codigodacarta2[50], nomedacidade2[50];
    unsigned long int populacao2;
    float areaemKM2, pib2;
    int numeroTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    int opcao1, opcao2; // para o menu

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

    //**************************************************************************************
    // Menu interativo para escolha do primeiro atributo
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área (KM²)\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Menu dinâmico (remove o atributo já escolhido)
    printf("\nEscolha o SEGUNDO atributo para comparar:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue; // não mostrar o mesmo atributo
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área (KM²)\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Número de Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Validação: impedir que o mesmo atributo seja escolhido duas vezes
    if (opcao1 == opcao2) {
        printf("\nErro: você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    //**************************************************************************************
    // Comparação dos dois atributos
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma_carta1, soma_carta2;

    // Função auxiliar (simulada com switch)
    switch (opcao1) {
        case 1: valor1_carta1 = populacao; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = areaemKM; valor1_carta2 = areaemKM2; break;
        case 3: valor1_carta1 = pib; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = numeroTuristicos; valor1_carta2 = numeroTuristicos2; break;
        case 5: valor1_carta1 = densidadePopulacional; valor1_carta2 = densidadePopulacional2; break;
    }

    switch (opcao2) {
        case 1: valor2_carta1 = populacao; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = areaemKM; valor2_carta2 = areaemKM2; break;
        case 3: valor2_carta1 = pib; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = numeroTuristicos; valor2_carta2 = numeroTuristicos2; break;
        case 5: valor2_carta1 = densidadePopulacional; valor2_carta2 = densidadePopulacional2; break;
    }

    // Inverter lógica da densidade demográfica (menor vence)
    if (opcao1 == 5 && valor1_carta1 > valor1_carta2)
        valor1_carta1 = 1 / valor1_carta1, valor1_carta2 = 1 / valor1_carta2;
    if (opcao2 == 5 && valor2_carta1 > valor2_carta2)
        valor2_carta1 = 1 / valor2_carta1, valor2_carta2 = 1 / valor2_carta2;

    // Soma dos atributos
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    //**************************************************************************************
    // Exibição dos resultados
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Carta 1 - %s (%s)\n", nomedacidade, estado);
    printf("Carta 2 - %s (%s)\n\n", nomedacidade2, estado2);

    printf("Atributo 1 escolhido: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área (KM²)\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Atributo 2 escolhido: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área (KM²)\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }

    printf("\n--- Valores ---\n");
    printf("%s: %.2f e %.2f\n", nomedacidade, valor1_carta1, valor2_carta1);
    printf("%s: %.2f e %.2f\n", nomedacidade2, valor1_carta2, valor2_carta2);

    printf("\n--- Soma total ---\n");
    printf("%s: %.2f\n", nomedacidade, soma_carta1);
    printf("%s: %.2f\n", nomedacidade2, soma_carta2);

    // Resultado final
    if (soma_carta1 > soma_carta2)
        printf("\nVencedor: %s!\n", nomedacidade);
    else if (soma_carta1 < soma_carta2)
        printf("\nVencedor: %s!\n", nomedacidade2);
    else
        printf("\nResultado: Empate!\n");

    printf("\n====================================\n");

    return 0;
}
