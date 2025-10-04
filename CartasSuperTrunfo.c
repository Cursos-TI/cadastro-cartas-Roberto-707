#include <stdio.h>

int main() {
  
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
  int carta;

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

  printf("\n COMPARAÇAO DOS ATRIBUTOS DAS CARTAS \n");

  printf("A populaçao da carta 1 é maior que da carta 2: %d\n", (populaçao > populaçao2));
  printf("A area em km2 da carta 1 é maior que da carta 2: %d\n", (area_em_km2 > area_em_km22));
  printf("O pib da carta 1 é maior que da carta 2: %d\n", (pib > pib2));
  printf("Os pontos turisticos da carta 1 são maiores que da carta 2: %d\n", (pontos_turisticos > pontos_turisticos2));
  printf("A densidade populacional da carta 1 é maior que da carta 2: %d\n", (densidade_populacional < densidade_populacional2));
  printf("O pib per capita da carta 1 é maior que da carta 2: %d\n", (pib_per_capita > pib_per_capita2));
  printf("O super poder da carta 1 é maior que da carta 2: %d\n", (super_poder > super_poder2));


  printf("\n RESULTADO DA COMPARAÇÃO DAS CARTAS \n");

if( populaçao > populaçao2){
  printf("carta 1 venceu\n");
}else{
  printf("carta 2 venceu\n");}

  if( area_em_km2 > area_em_km22){
  printf("carta 1 venceu\n");
}else{
  printf("carta 2 venceu\n");}

  if( pib > pib2){
  printf("carta 1 venceu\n");
}else{
  printf("carta 2 venceu\n");}

  if( densidade_populacional < densidade_populacional2){
  printf("carta 1 venceu\n");
}else{
  printf("carta 2 venceu\n");}

  if( pib_per_capita > pib_per_capita2){
  printf("carta 1 venceu\n");
}else{
  printf("carta 2 venceu\n");}

  if( super_poder > super_poder2){
  printf("carta 1 venceu\n");
}else{
  printf("carta 2 venceu\n");}


  










  return 0;
}
















