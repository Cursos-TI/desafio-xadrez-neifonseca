#include <stdio.h>

int main() {
    // Declaração de variáveis para controle de movimentação
    int casas_torre = 5;      // Número de casas que a Torre irá mover
    int casas_bispo = 5;      // Número de casas que o Bispo irá mover
    int casas_rainha = 8;     // Número de casas que a Rainha irá mover
    int casas_cavalo_vertical = 2;   // Número de casas verticais no movimento do Cavalo
    int casas_cavalo_horizontal = 1; // Número de casas horizontais no movimento do Cavalo
    int contador = 0;         // Variável auxiliar para contagem
    
    // ===== MOVIMENTAÇÃO DA TORRE =====
    // A Torre move-se em linha reta (horizontal ou vertical)
    printf("Torre movendo 5 casas para a direita:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DO BISPO =====
    // O Bispo move-se na diagonal
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
    printf("Rainha movendo 8 casas para a esquerda:\n");
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < casas_rainha);
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DO CAVALO =====
    // O Cavalo move-se em formato "L" (duas casas para baixo e uma para a esquerda)
    printf("Cavalo movendo em L (2 casas para baixo e 1 casa para a esquerda):\n");
    
    // Loop externo (for) para controlar o movimento principal
    for (int etapa = 0; etapa < 2; etapa++) {
        // Primeira etapa: movimentação vertical (2 casas para baixo)
        if (etapa == 0) {
            contador = 0;
            // Loop interno (while) para as casas verticais
            while (contador < casas_cavalo_vertical) {
                printf("Baixo\n");
                contador++;
            }
        }
        // Segunda etapa: movimentação horizontal (1 casa para a esquerda)
        else if (etapa == 1) {
            contador = 0;
            // Loop interno (while) para as casas horizontais
            while (contador < casas_cavalo_horizontal) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }
    printf("\n");
    
    return 0;
}
