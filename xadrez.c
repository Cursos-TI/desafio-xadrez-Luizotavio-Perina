#include <stdio.h>

// Função recursiva para mover a TORRE para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a RAINHA para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o BISPO (com chamadas internas aos loops)
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0) return;
    for (int i = 0; i < horizontal; i++) {
        printf("Cima Direita\n");
    }
    moverBispoRecursivo(vertical - 1, horizontal);
}

int main() {
    // Nível Novato - Movimentação das Peças
    int i;

    // Movimento da TORRE - substituído por recursividade
    printf("Movimento da TORRE:\n");
    moverTorre(5);

    // Movimento do BISPO - recursivo com loop aninhado
    printf("\nMovimento do BISPO:\n");
    moverBispoRecursivo(5, 1);

    // Movimento da RAINHA - substituído por recursividade
    printf("\nMovimento da RAINHA:\n");
    moverRainha(8);

    // Cavalo em L: duas casas para cima e uma para a direita
    printf("\nMovimento do CAVALO:\n");

    // Loop externo (vertical)
    for (int y = 2; y > 0; y--) {
        if (y == 1) {
            continue; // demonstra controle de fluxo
        }
        printf("Cima\n");
    }

    // Loop interno (horizontal)
    int x = 0;
    while (x < 1) {
        printf("Direita\n");
        x++;
    }

    return 0;
}
