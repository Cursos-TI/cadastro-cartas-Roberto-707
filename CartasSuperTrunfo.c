#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    unsigned long populacao1; // Tipo alterado para unsigned long
    double area1;
    double pib1;
    int pontos_turisticos1;
    double densidade_populacional1;
    double pib_per_capita1;
    float super_poder1;

    // Variáveis para a Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    unsigned long populacao2; // Tipo alterado para unsigned long
    double area2;
    double pib2;
    int pontos_turisticos2;
    double densidade_populacional2;
    double pib_per_capita2;
    float super_poder2;

    int resultado;

    // --- CRIAR PRIMEIRA CARTA SUPER TRUNFO ---
    printf("--- CRIAR PRIMEIRA CARTA SUPER TRUNFO ---\n\n");

    printf("Digite o estado: ");
    scanf(" %49[^\n]", estado1);
    printf("Digite o codigo da carta: ");
    scanf(" %9s", codigo1);
    printf("Digite a cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // Especificador de formato alterado para %lu
    printf("Digite area (em km2): ");
    scanf("%lf", &area1);
    printf("Digite o pib: ");
    scanf("%lf", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Cálculos da Carta 1 ---
    if (area1 > 0) {
        densidade_populacional1 = (double)populacao1 / area1;
    } else {
        densidade_populacional1 = 0;
    }

    if (populacao1 > 0) {
        pib_per_capita1 = pib1 / populacao1;
    } else {
        pib_per_capita1 = 0;
    }

    double inverso_densidade1 = 0;
    if (densidade_populacional1 > 0) {
        inverso_densidade1 = 1.0 / densidade_populacional1;
    }
    super_poder1 = (float)populacao1 + (float)area1 + (float)pib1 +
                   (float)pontos_turisticos1 + (float)pib_per_capita1 +
                   (float)inverso_densidade1;

    // --- EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA ---
    printf("\n--- PRIMEIRA CARTA SUPER TRUNFO CRIADA ---\n");
    printf("O estado e: %s\n", estado1);
    printf("O codigo da carta e: %s\n", codigo1);
    printf("A cidade e: %s\n", cidade1);
    printf("A populacao e: %lu\n", populacao1); // Especificador de formato alterado
    printf("A area e: %.2f km2\n", area1);
    printf("O PIB e: %.2f\n", pib1);
    printf("O numero de pontos turisticos e: %d\n", pontos_turisticos1);
    printf("A densidade populacional e: %.2f habitantes/km2\n", densidade_populacional1);
    printf("O PIB per capita e: %.2f\n", pib_per_capita1);
    printf("O Super Poder e: %.2f\n", super_poder1);

    // --- COLETA DE DADOS SEGUNDA CARTA ---
    printf("\n--- CRIAR SEGUNDA CARTA SUPER TRUNFO ---\n\n");
    printf("Digite o estado: ");
    scanf(" %49[^\n]", estado2);
    printf("Digite o codigo da carta: ");
    scanf(" %9s", codigo2);
    printf("Digite a cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // Especificador de formato alterado para %lu
    printf("Digite area (em km2): ");
    scanf("%lf", &area2);
    printf("Digite o pib: ");
    scanf("%lf", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- Cálculos da Carta 2 ---
    if (area2 > 0) {
        densidade_populacional2 = (double)populacao2 / area2;
    } else {
        densidade_populacional2 = 0;
    }

    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / populacao2;
    } else {
        pib_per_capita2 = 0;
    }

    double inverso_densidade2 = 0;
    if (densidade_populacional2 > 0) {
        inverso_densidade2 = 1.0 / densidade_populacional2;
    }
    super_poder2 = (float)populacao2 + (float)area2 + (float)pib2 +
                   (float)pontos_turisticos2 + (float)pib_per_capita2 +
                   (float)inverso_densidade2;

    // --- EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA ---
    printf("\n--- SEGUNDA CARTA SUPER TRUNFO CRIADA ---\n");
    printf("O estado e: %s\n", estado2);
    printf("O codigo da carta e: %s\n", codigo2);
    printf("A cidade e: %s\n", cidade2);
    printf("A populacao e: %lu\n", populacao2); // Especificador de formato alterado
    printf("A area e: %.2f km2\n", area2);
    printf("O PIB e: %.2f\n", pib2);
    printf("O numero de pontos turisticos e: %d\n", pontos_turisticos2);
    printf("A densidade populacional e: %.2f habitantes/km2\n", densidade_populacional2);
    printf("O PIB per capita e: %.2f\n", pib_per_capita2);
    printf("O Super Poder e: %.2f\n", super_poder2);

    // --- RESULTADOS DAS COMPARAÇÕES ---
    printf("\n--- Resultados das Comparacoes ---\n");

    // Comparacao de Populacao (maior vence)
    resultado = (populacao1 > populacao2);
    printf("Populacao: Carta 1 vence? %d\n", resultado);

    // Comparacao de Area (maior vence)
    resultado = (area1 > area2);
    printf("Area: Carta 1 vence? %d\n", resultado);

    // Comparacao de PIB (maior vence)
    resultado = (pib1 > pib2);
    printf("PIB: Carta 1 vence? %d\n", resultado);

    // Comparacao de Pontos Turisticos (maior vence)
    resultado = (pontos_turisticos1 > pontos_turisticos2);
    printf("Pontos Turisticos: Carta 1 vence? %d\n", resultado);

    // Comparacao de Densidade Populacional (menor vence)
    resultado = (densidade_populacional1 < densidade_populacional2);
    printf("Densidade Populacional: Carta 1 vence? %d\n", resultado);

    // Comparacao de PIB per Capita (maior vence)
    resultado = (pib_per_capita1 > pib_per_capita2);
    printf("PIB per Capita: Carta 1 vence? %d\n", resultado);

    // Comparacao de Super Poder (maior vence)
    resultado = (super_poder1 > super_poder2);
    printf("Super Poder: Carta 1 vence? %d\n", resultado);

    return 0;
}

















