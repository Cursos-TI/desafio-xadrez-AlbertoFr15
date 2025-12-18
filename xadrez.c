#include <stdio.h>

/* ===================== TORRE (RECURSIVA) ===================== */
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Torre: Direita\n");
    moverTorre(casas - 1);
}

/* ===================== BISPO (RECURSIVA + LOOPS ANINHADOS) ===================== */
void moverBispo(int casas) {
    if (casas == 0)
        return;

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Bispo: Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* ===================== RAINHA (RECURSIVA) ===================== */
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Rainha: Esquerda\n");
    moverRainha(casas - 1);
}

/* ===================== CAVALO (LOOPS ANINHADOS COMPLEXOS) ===================== */
void moverCavalo() {
    int vertical, horizontal;

    printf("Cavalo:\n");

    /* Duas casas para cima */
    for (vertical = 1; vertical <= 2; vertical++) {
        printf("Cima\n");

        if (vertical == 1)
            continue;
    }

    /* Uma casa para a direita */
    for (horizontal = 1; horizontal <= 1; horizontal++) {
        printf("Direita\n");
        break;
    }
}

/* ===================== FUNÇÃO PRINCIPAL ===================== */
int main() {

    printf("=== Movimento da Torre ===\n");
    moverTorre(5);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(5);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(8);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    return 0;
}


