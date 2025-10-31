#include <stdio.h>

// ===== FUNÇÕES RECURSIVAS PARA AS PEÇAS =====

/**
 * Função recursiva para movimentar a Torre
 * @param casas_restantes: número de casas restantes para mover
 * @param direcao: string com a direção do movimento
 */
void mover_torre_recursivo(int casas_restantes, const char* direcao) {
    // Caso base: quando não há mais casas para mover
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção atual
    printf("%s\n", direcao);
    
    // Chamada recursiva com uma casa a menos
    mover_torre_recursivo(casas_restantes - 1, direcao);
}

/**
 * Função recursiva para movimentar o Bispo com loops aninhados
 * @param casas_verticais: casas restantes no movimento vertical
 * @param casas_horizontais_por_vertical: casas horizontais por cada vertical
 */
void mover_bispo_recursivo(int casas_verticais, int casas_horizontais_por_vertical) {
    // Caso base: quando não há mais movimento vertical
    if (casas_verticais <= 0) {
        return;
    }
    
    // Loop interno para movimento horizontal em cada casa vertical
    for (int horizontal = 0; horizontal < casas_horizontais_por_vertical; horizontal++) {
        printf("Cima\n");      // Movimento vertical
        printf("Direita\n");   // Movimento horizontal correspondente
    }
    
    // Chamada recursiva para a próxima casa vertical
    mover_bispo_recursivo(casas_verticais - 1, casas_horizontais_por_vertical);
}

/**
 * Função recursiva para movimentar a Rainha
 * @param casas_restantes: número de casas restantes para mover
 * @param direcao: string com a direção do movimento
 */
void mover_rainha_recursivo(int casas_restantes, const char* direcao) {
    // Caso base: quando não há mais casas para mover
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção atual
    printf("%s\n", direcao);
    
    // Chamada recursiva com uma casa a menos
    mover_rainha_recursivo(casas_restantes - 1, direcao);
}

int main() {
    // ===== DECLARAÇÃO DE VARIÁVEIS PARA CONTROLE AVANÇADO =====
    int casas_torre = 5;                    // Número de casas que a Torre irá mover
    int casas_bispo = 5;                    // Número de casas verticais do Bispo
    int casas_rainha = 8;                   // Número de casas que a Rainha irá mover
    int casas_cavalo_vertical = 2;          // Casas verticais do movimento do Cavalo (para cima)
    int casas_cavalo_horizontal = 1;        // Casas horizontais do movimento do Cavalo (para direita)
    int movimentos_complexos_cavalo = 3;    // Número de movimentos complexos do Cavalo
    int contador_principal = 0;             // Contador principal para loops complexos
    int contador_secundario = 0;            // Contador secundário para loops aninhados
    
    // ===== MOVIMENTAÇÃO DA TORRE COM RECURSIVIDADE =====
    // A Torre move-se em linha reta usando função recursiva
    printf("Torre movendo 5 casas para a direita (recursivamente):\n");
    mover_torre_recursivo(casas_torre, "Direita");
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DO BISPO COM RECURSIVIDADE E LOOPS ANINHADOS =====
    // O Bispo move-se na diagonal usando recursividade com loops aninhados
    // Loop externo: movimento vertical | Loop interno: movimento horizontal
    printf("Bispo movendo 5 casas na diagonal (cima e direita) com recursividade:\n");
    mover_bispo_recursivo(casas_bispo, 1);
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DA RAINHA COM RECURSIVIDADE =====
    // A Rainha move-se usando função recursiva
    printf("Rainha movendo 8 casas para a esquerda (recursivamente):\n");
    mover_rainha_recursivo(casas_rainha, "Esquerda");
    printf("\n");
    
    // ===== MOVIMENTAÇÃO DO CAVALO COM LOOPS COMPLEXOS =====
    // O Cavalo move-se em "L" (duas casas para cima e uma para a direita)
    // Utilizando loops aninhados com múltiplas variáveis e condições complexas
    printf("Cavalo movendo em L (2 casas para cima e 1 casa para a direita) com loops complexos:\n");
    
    // Loop externo: controla o número de movimentos completos em L
    for (contador_principal = 0; contador_principal < movimentos_complexos_cavalo; contador_principal++) {
        
        // Verifica se deve executar este movimento (condição complexa)
        if (contador_principal == 0 || contador_principal % 2 == 0) {
            
            // Loop interno para movimento vertical (duas casas para cima)
            contador_secundario = 0;
            while (contador_secundario < casas_cavalo_vertical) {
                printf("Cima\n");
                contador_secundario++;
                
                // Condição de controle: pausa entre movimentos verticais
                if (contador_secundario == 1) {
                    continue; // Continua para próxima iteração sem delay adicional
                }
            }
            
            // Loop interno para movimento horizontal (uma casa para a direita)
            for (contador_secundario = 0; contador_secundario < casas_cavalo_horizontal; contador_secundario++) {
                printf("Direita\n");
                
                // Verifica se completou o movimento em L
                if (contador_secundario >= casas_cavalo_horizontal - 1) {
                    break; // Sai do loop quando completa o movimento horizontal
                }
            }
            
        } else {
            // Para movimentos ímpares, pula (demonstração de continue em loop externo)
            continue;
        }
        
        // Verifica se deve parar os movimentos (demonstração de break complexo)
        if (contador_principal >= 0) { // Sempre verdadeiro, mas demonstra a lógica
            // Adiciona separação visual entre movimentos L (apenas no primeiro)
            if (contador_principal == 0) {
                break; // Executa apenas um movimento L completo
            }
        }
    }
    printf("\n");
    
    return 0;
}
