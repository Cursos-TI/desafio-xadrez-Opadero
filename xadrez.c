#include <stdio.h>

// Função recursiva da Torre (anda pra direita)
void moverTorre(int casas) {
    // condição de parada
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    // chamada recursiva diminuindo
    moverTorre(casas - 1);
}

// Função recursiva do Bispo (anda cima + direita)
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima Direita\n");

    moverBispo(casas - 1);
}

// Função recursiva da Rainha (anda pra esquerda)
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // MOVIMENTO DA TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // MOVIMENTO DO BISPO (loops aninhados também)
    printf("\nMovimento do Bispo:\n");

    // loops aninhados simulando diagonal
    int i, j;
    for(i = 0; i < casasBispo; i++) {
        for(j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    // chamando também a função recursiva do Bispo
    moverBispo(casasBispo);

    // MOVIMENTO DA RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // MOVIMENTO DO CAVALO (duas para cima e uma pra direita)
    printf("\nMovimento do Cavalo:\n");

    // loops aninhados complexos
    int cima = 2;
    int direita = 1;

    for(i = 0; i < cima; i++) {

        // se for maior que 3 ignora
        if(i > 3) {
            continue;
        }

        printf("Cima\n");

        for(j = 0; j < direita + 1; j++) {

            // quando j == 1, anda pra direita e para o loop interno
            if(j == 1 && i == cima - 1) {
                printf("Direita\n");
                break;
            }
        }
    }

    return 0;
}
