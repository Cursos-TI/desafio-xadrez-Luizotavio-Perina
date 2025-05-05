#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    //  Desafio novato
    int i;

    // Movimento da TORRE (usando for)
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO (usando while)
    printf("\nMovimento do BISPO:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da RAINHA (usando do-while)
    printf("\nMovimento da RAINHA:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    // Desafio aventureiro

    printf("\nMovimento do CAVALO:\n");

    int passo;

    // Loop externo: duas casas para Baixo
    for (passo = 1; passo <= 2; passo++) {
        printf("Baixo\n");
    }

    // Loop interno (usando while)
    passo = 1;
    while (passo <= 1) {
        printf("Esquerda\n");
        passo++;
    }

    return 0;
}
