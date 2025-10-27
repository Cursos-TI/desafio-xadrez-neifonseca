#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula a movimentação de peças de xadrez usando estruturas de repetição em C.
// Implementa o movimento da Torre, Bispo e Rainha utilizando for, while e do-while respectivamente.

int main() {
    // Declaração de variáveis para controle de movimentação
    int casas_torre = 5;      // Número de casas que a Torre irá mover
    int casas_bispo = 5;      // Número de casas que o Bispo irá mover
    int casas_rainha = 8;     // Número de casas que a Rainha irá mover
    int contador = 0;         // Variável auxiliar para contagem
    
    // ===== MOVIMENTAÇÃO DA TORRE =====
    // A Torre move-se em linha reta (horizontal ou vertical)
    // Simulando movimento de 5 casas para a direita usando estrutura FOR
    printf("Torre movendo 5 casas para a direita:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DO BISPO =====
    // O Bispo move-se na diagonal
    // Simulando movimento de 5 casas na diagonal (cima e direita) usando estrutura WHILE
    printf("Bispo movendo 5 casas na diagonal (cima e direita):\n");
    contador = 0;
    while (contador < casas_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        contador++;
    }
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DA RAINHA =====
    // A Rainha move-se em todas as direções (horizontal, vertical e diagonal)
    // Simulando movimento de 8 casas para a esquerda usando estrutura DO-WHILE
    printf("Rainha movendo 8 casas para a esquerda:\n");
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < casas_rainha);
    printf("\n");
    
    return 0;
}
