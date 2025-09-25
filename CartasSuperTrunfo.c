#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.




typedef struct {

 
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
  // Área para entrada de dados
    char estado [50]; 
    char codigo [10];
    char cidade [50];
    long long populaçao; 
    double area; 
    double pib; 
    int pontos_turisticos; 
 } CartaSuperTrunfo;

 int main() {

  CartaSuperTrunfo carta_do_usuario;

  printf("--- CRIAR NOVA CARTA SUPER TRUNFO ---\n\n");

  printf("Digite o estado: ");
  scanf("%s", carta_do_usuario.estado);

  printf("Digite a cidade: ");
  scanf("%s", carta_do_usuario.cidade);

  printf("digite a população: ");
  scanf("%lld", &carta_do_usuario.populaçao);

  getchar();

  printf("Digite area (em km2): ");
  scanf("%lf", &carta_do_usuario.area);

  getchar();

  printf("Digite o pib: ");
  scanf("%lf", &carta_do_usuario.pib);

  getchar();

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &carta_do_usuario.pontos_turisticos);

  getchar();
 



  // Área para exibição dos dados da cidade
printf("\n--- CARTA SUPER TRUNFO CRIADA ---\n");

    printf("O estado é: %s\n", carta_do_usuario.estado);
    printf("o codigo da carta é: %s\n", carta_do_usuario.codigo);
    printf("A cidade é: %s\n", carta_do_usuario.cidade);
    printf("A população é: %lld\n", carta_do_usuario.populaçao);
    printf("A area é: %.2f km2\n", carta_do_usuario.area);
    printf("O PIB é: %.2f\n", carta_do_usuario.pib);
    printf("O numero de pontos turisticos é: %d\n", carta_do_usuario.pontos_turisticos);
    






return 0;

} 
