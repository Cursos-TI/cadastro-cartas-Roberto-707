#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
int escolha;


//VARIAVEIS CARTA 1
  
  char estado[50];
  char codigo[10];
  char cidade[50];
  unsigned long int populaçao;
  float area_em_km2;
  float pib;
  int pontos_turisticos;
  float densidade_populacional;
  float pib_per_capita;
  float super_poder;
  char primeiroAtributo;
  int resultado;

  printf("PRIMEIRA CARTA SUPER TRUNFO \n");

  printf("Digite o estado: ");
  scanf("%s", &estado);

  printf("Digite o codigo: ");
  scanf("%s", &codigo);

  printf("Digite a cidade: ");
  scanf("%s", &cidade);

  printf("Digite a populaçao: ");
  scanf("%lu", &populaçao);

  printf("Digite a area em km2: ");
  scanf("%f", &area_em_km2);

  printf("Digite o pib: ");
  scanf("%f", &pib);

  printf("Digite a pontos turisticos: ");
  scanf("%d", &pontos_turisticos);

  densidade_populacional = (populaçao / area_em_km2);
  pib_per_capita = (pib / populaçao);

   super_poder = (populaçao + area_em_km2 + pib + pontos_turisticos + pib_per_capita + densidade_populacional);

  

  //--- IMPRESSAO CARTA 1 ---
  printf("\n DADOS DA PRIMEIRA CARTA:\n\n");

  printf("O estado é: %s\n", estado);
  printf("O codigo é: %s\n", codigo);
  printf("A cidade é: %s\n", cidade);
  printf("A populaçao é: %lu\n", populaçao);
  printf("A area em km2 é: %f\n", area_em_km2);
  printf("O pib é: %f\n", pib);
  printf("Os pontos turisticos são: %d\n", pontos_turisticos);
  printf("A densidade populacional é: %.2f\n", densidade_populacional);
  printf("O Pib per capita é: %.2f\n", pib_per_capita);
  printf("O super poder é: %f\n", super_poder);


  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  unsigned long int populaçao2;
  float area_em_km22;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;
  float super_poder2;
  int carta2;
  int resultado2;
  char segundoAtributo;

// IMPRESSÃO CARTA 2
  printf("\n SEGUNDA CARTA SUPER TRUNFO \n");

  printf("Digite o estado: ");
  scanf("%s", &estado2);

  printf("Digite o codigo: ");
  scanf("%s", &codigo2);

  printf("Digite a cidade: ");
  scanf("%s", &cidade2);

  printf("Digite a populaçao: ");
  scanf("%lu", &populaçao2);

  printf("Digite a area em km2: ");
  scanf("%f", &area_em_km22);

  printf("Digite o pib: ");
  scanf("%f", &pib2);

  printf("Digite a pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  densidade_populacional2 = (populaçao2 / area_em_km2);
  pib_per_capita2 = (pib2 / populaçao2);

  super_poder2 = (populaçao2 + area_em_km22 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2);

  //--- IMPRESSAO CARTA 2 ---
  printf("\n DADOS DA SEGUNDA CARTA:\n\n");

  printf("O estado é: %s\n", estado2);
  printf("O codigo é: %s\n", codigo2);
  printf("A cidade é: %s\n", cidade2);
  printf("A populaçao é: %lu\n", populaçao2);
  printf("A area em km2 é: %f\n", area_em_km22);
  printf("O pib é: %f\n", pib2);
  printf("Os pontos turisticos são: %d\n", pontos_turisticos2);
  printf("A densidade populacional é: %.2f\n", densidade_populacional2);
  printf("O Pib per capita é: %.2f\n", pib_per_capita2);
  printf("O super poder é: %f\n", super_poder2);


// MENU DE ATRIBUTOS
printf("\n\n--- MENU DE ATRIBUTOS ---\n");
  printf("Escolha o atributo para a batalha:\n");
  printf("1. Populacao\n");
  printf("2. Area em km2\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional (Menor valor vence - logica invertida)\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder (Soma de todos)\n");
  
// COMPARAÇAO DOS ATRIBUTOS

 printf("Escolha a comparação: ");
 scanf(" %c", &primeiroAtributo);

 switch (primeiroAtributo)
 {
 case 1:
 printf("Voce escolheu população!\n");
  resultado = populaçao > populaçao2 ? 1 : 0;
 break;
 case 2:
 printf("Voce escolheu area em km2!\n");
 resultado = area_em_km2 > area_em_km22 ? 1 : 0;
 break;
 case 3:
 printf("Voce escolheu area em pib!\n");
 resultado = pib > pib2 ? 1 : 0;
 break;
 case 4:
 printf("Voce escolheu pontos turisticos! \n");
resultado = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
 break;
 case 5:
 printf("Voce escolheu densidade populacional!\n");
 resultado = densidade_populacional < densidade_populacional2 ? 1 : 0;
 break;
 case 6:
 printf("Voce escolheu pib per capita\n");
 resultado = pib_per_capita > pib_per_capita2 ? 1 : 0;
 break;
 case 7:
 printf("Voce escolheu super poder!\n");
 resultado = super_poder > super_poder2 ? 1 : 0;
 default:
 printf("Opção invalida\n");
  break;
 }

 printf("\n\n--- MENU DE ATRIBUTOS ---\n");
  printf("Escolha o segundo atributo:\n");
  printf("1. Populacao\n");
  printf("2. Area em km2\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional (Menor valor vence - logica invertida)\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder (Soma de todos)\n");
  


 printf("Escolha a comparação: ");
 scanf(" %c", &segundoAtributo);

if (primeiroAtributo == segundoAtributo)
{
  printf("Voce escolheu o mesmo atributo!\n");
} else {
}
  switch (segundoAtributo)
  {
 case 1:
 printf("Voce escolheu população!\n");
  resultado2 = populaçao > populaçao2 ? 1 : 0;
 break;
 case 2:
 printf("Voce escolheu area em km2!\n");
 resultado2 = area_em_km2 > area_em_km22 ? 1 : 0;
 break;
 case 3:
 printf("Voce escolheu area em pib!\n");
 resultado2 = pib > pib2 ? 1 : 0;
 break;
 case 4:
 printf("Voce escolheu pontos turisticos! \n");
resultado2 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
 break;
 case 5:
 printf("Voce escolheu densidade populacional!\n");
 resultado2 = densidade_populacional < densidade_populacional2 ? 1 : 0;
 break;
 case 6:
 printf("Voce escolheu pib per capita\n");
 resultado2 = pib_per_capita > pib_per_capita2 ? 1 : 0;
 break;
 case 7:
 printf("Voce escolheu super poder!\n");
 resultado2 = super_poder > super_poder2 ? 1 : 0;
 default:
 printf("Opção invalida\n");
  break;
  }

// RESULTADO DOS ATRIBUTOS

if (resultado > resultado2)
{
  printf("carta 1 venceu\n");
} else if (resultado < resultado2){
  printf("carta 2 venceu\n");
} else {
  printf("O jogo empatou\n");
}

  










  return 0;
}
















