#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.






 int main() {
  
   
  // Área para entrada de dados
    char estado1 [50]; 
    char codigo1 [10];
    char cidade1 [50];
    long long populaçao1; 
    double area1; 
    double pib1; 
    int pontos_turisticos1; 
    float densidade_populacional1;
    float pib_per_capita1;
    
     char estado2[50];
    char codigo2[10];
    char cidade2[50];
    long long populaçao2;
    double area2;
    double pib2;
    int pontos_turisticos2;
    double densidade_populacional2;
    double pib_per_capita2;


  printf("--- CRIAR PRIMEIRA CARTA SUPER TRUNFO ---\n\n");

  printf("Digite o estado: ");
  scanf("%s", estado1);

  printf("Digite o codigo da carta: ");
  scanf("%s", codigo1);

  printf("Digite a cidade: ");
  scanf("%s", cidade1);

  printf("digite a população: ");
  scanf("%lld", &populaçao1);

  printf("Digite area (em km2): ");
  scanf("%lf", &area1);

  printf("Digite o pib: ");
  scanf("%lf", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  densidade_populacional1 = populaçao1 / area1;
  pib_per_capita1 = pib1 / populaçao1;


  // Área para exibição dos dados da cidade
printf("\n--- PRIMEIRA CARTA SUPER TRUNFO CRIADA ---\n");

    printf("O estado é: %s\n", estado1);
    printf("o codigo da carta é: %s\n", codigo1);
    printf("A cidade é: %s\n", cidade1);
    printf("A população é: %lld\n", populaçao1);
    printf("A area é: %.2f km2\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("O numero de pontos turisticos é: %d\n", pontos_turisticos1);
    printf("A densidade populacional e: %.2f habitantes/km2\n", densidade_populacional1);
    printf("O PIB per capita e: %.2f\n", pib_per_capita1);

    //--- COLETA DE DADOS SEGUNDA CARTA ---
    printf("--- CRIAR SEGUNDA CARTA SUPER TRUNFO ---\n\n");

    printf("Digite o estado: ");
  scanf("%s", estado2);

  printf("Digite o codigo da carta: ");
  scanf("%s", codigo2);

  printf("Digite a cidade: ");
  scanf("%s", cidade2);

  printf("digite a população: ");
  scanf("%lld", &populaçao2);

  printf("Digite area (em km2): ");
  scanf("%lf", &area2);

  printf("Digite o pib: ");
  scanf("%lf", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  densidade_populacional2 = populaçao2 / area2;
  pib_per_capita2 = pib2 / populaçao2;

  printf("\n--- SEGUNDA CARTA SUPER TRUNFO CRIADA ---\n");

    printf("O estado é: %s\n", estado2);
    printf("o codigo da carta é: %s\n", codigo2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %lld\n", populaçao2);
    printf("A area é: %.2f km2\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("O numero de pontos turisticos é: %d\n", pontos_turisticos2);
    printf("A densidade populacional e: %.2f habitantes/km2\n", densidade_populacional2);
    printf("O PIB per capita e: %.2f\n", pib_per_capita2);







    return 0;
 }
    











