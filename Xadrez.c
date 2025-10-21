#include <stdio.h>
// TORRE (RECURSIVIDADE)

void moverTorreRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;

    }
    printf("Direita\n");
    
    moverTorreRecursivo(passosRestantes - 1);
}

// RAINHA (RECURSIVIDADE)

void moverRainhaRecursivo(int passoRestantes) {
    if (passoRestantes <= 0) {
        return;

    }
    printf("Esquerda\n");
    moverRainhaRecursivo(passoRestantes - 1);
}

// BISPO (RECURSIVIDADE E LOOPS)

void moverBispoRecursivo(int VerticalRestante, int HorizontalRestante) {
    if (VerticalRestante <= 0 || HorizontalRestante <= 0) {
        return;
    }
int v = 0;
while (v < 1)
{
    printf("Cima\n");
    for (int h = 0; h < 1; h++)
    {
    printf("Direita\n");
}
v++;
}
moverBispoRecursivo(VerticalRestante - 1, HorizontalRestante - 1);
}

// CAVALO (LOOPS ANINHADOS COMPLEXOS C/ BREAK E CONTINUE)
void moverCavaloComplexo (int movimentosVerticais, int movimentosHorizontais) {
printf("\nMOVIMENTO DO CAVALO (2 CIMA, 1 DIREITA) C/ FLOW CONTROL\n");

    for (int i = 1; i<= movimentosVerticais + movimentosHorizontais; i++) {

    if (i <= movimentosVerticais) {
        printf("Cima\n");
        continue;
    }    
    if (i == movimentosVerticais + 1){
        for (int j = 1; j <= movimentosHorizontais; j++) {
            printf("Direita\n");
            break;
        }
     }
    }
}
 
int main() {
    // --- EXERCICIO 1: RECURSIVIDADE (TORRE E RAINHA) ---
    printf("--- MOVIMENTOS RECURSIVOS ---\n");

    printf("\nMOVIMENTO DA TORRE (RECURSIVIDADE - 5 DIREITA)\n");
    moverTorreRecursivo(5);

    printf("\nMOVIMENTO DA RAINHA(RECURSIVIDADE - 8 ESQUERDA)\n");
    moverRainhaRecursivo(8);

    //--- EXERCICIO 2: RECURSIVIDADE + LOOPS ANINHADOS (BISPO) ---
    printf("\n -- MOVIMENTO RECURSIVO COM LOOPS ANINHADOS (BISPO) ---\n");
    moverBispoRecursivo (5, 5);

    //--- EXERCICIO 3: LOOPS COMPLEXOS C/ FLOW CONTROL (CAVALO) ---
    moverCavaloComplexo(2, 1);

    return 0;



}