#include <stdio.h>

int main() {
    int i;             // variavel do for
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

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

    return 0;
}
