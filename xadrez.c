#include <stdio.h>

int main() {
    int i;             // variavel para os loops
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int casasBaixo = 2;   // movimento do cavalo para baixo
    int casasEsquerda = 1; // movimento do cavalo para a esquerda

    // Movimento da Torre (anda para a direita)
    printf("Movimento da Torre:\n");
    for(i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (anda na diagonal: cima + direita)
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while(i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha (anda para a esquerda)
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < casasRainha);

    // Movimento do Cavalo (em L: 2 para baixo, 1 para esquerda)
    printf("\nMovimento do Cavalo:\n");

    // loop for para descer 2 casas
    for(i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    // loop while aninhado para 1 casa para a esquerda
    int j = 0;
    while(j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
