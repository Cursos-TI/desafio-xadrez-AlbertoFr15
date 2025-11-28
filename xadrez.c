#include <stdio.h>

int main() {

    int i;

    //  1. TORRE  (usa FOR)  
    printf("Movimento da TORRE (vertical para cima):\n");

    // Torre anda 5 casas para cima
    for (i = 1; i <= 5; i++) {
        printf("Torre move para cima %d casa(s)\n", i);
    }
        //  2. BISPO (usa WHILE)
    printf("\nMovimento do BISPO (diagonal superior direita):\n");

    int passo = 1;
    // Bispo anda 5 casas em diagonal
    while (passo <= 5) {
        printf("Bispo move para diagonal superior direita %d casa(s)\n", passo);
        passo++;
    }
     //  3. RAINHA (usa DO-WHILE)
    printf("\nMovimento da RAINHA (horizontal para a direita):\n");

    int casas = 1;
    // Rainha anda 5 casas para direita
    do {
        printf("Rainha move para direita %d casa(s)\n", casas);
        casas++;
    } while (casas <= 5);

    return 0;
}

