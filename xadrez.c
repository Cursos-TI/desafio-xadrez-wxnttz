#include <stdio.h>

// -------------------- Constantes --------------------
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// -------------------- Nível Novato --------------------

// Movimentação do Bispo com FOR (Diagonal superior direita)
void movimentarBispoLoop() {
    printf("Movimento do Bispo (FOR - Diagonal Superior Direita):\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\nDireita\n\n");
    }
}

// Movimentação da Torre com WHILE (Direita)
void movimentarTorreLoop() {
    printf("Movimento da Torre (WHILE - Direita):\n");
    int i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");
}

// Movimentação da Rainha com DO-WHILE (Esquerda)
void movimentarRainhaLoop() {
    printf("Movimento da Rainha (DO-WHILE - Esquerda):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);
    printf("\n");
}

// -------------------- Nível Aventureiro --------------------

// Cavalo em L usando loops aninhados (FOR + WHILE)
void movimentarCavaloAninhado() {
    printf("Movimento do Cavalo (Loops Aninhados - Baixo e Esquerda em L):\n");

    for (int i = 0; i < 2; i++) { // 2 para simular movimento para baixo
        int j = 0;
        while (j < 1) {           // 1 para movimento para esquerda
            printf("Baixo\nBaixo\nEsquerda\n\n");  // Forma de L
            j++;
        }
    }
}

// -------------------- Nível Mestre --------------------

// Função recursiva para movimentar o Bispo
void bispoRecursivo(int passo) {
    if (passo >= MOV_BISPO) return;
    printf("Cima\nDireita\n\n");
    bispoRecursivo(passo + 1);
}

// Função recursiva para movimentar a Torre
void torreRecursiva(int passo) {
    if (passo >= MOV_TORRE) return;
    printf("Direita\n");
    torreRecursiva(passo + 1);
}

// Função recursiva para movimentar a Rainha
void rainhaRecursiva(int passo) {
    if (passo >= MOV_RAINHA) return;
    printf("Esquerda\n");
    rainhaRecursiva(passo + 1);
}

// Cavalo com múltiplas condições, continue e break
void cavaloAvancado() {
    printf("Movimento do Cavalo (Avançado com continue e break):\n");

    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            if ((x + y) % 2 == 0) {
                continue; // Pula casas com soma par
            }

            if (x + y > 10) {
                break; // Para se a soma for maior que 10
            }

            // Simula L para cima e direita
            if ((x == 2 && y == 1) || (x == 1 && y == 2)) {
                printf("Cima\nCima\nDireita\n\n");
            }
        }
    }
}

// -------------------- Função Principal --------------------

int main() {
    // Nível Novato
    movimentarBispoLoop();
    movimentarTorreLoop();
    movimentarRainhaLoop();

    // Nível Aventureiro
    movimentarCavaloAninhado();

    // Nível Mestre
    printf("Bispo com Recursividade:\n");
    bispoRecursivo(0);

    printf("\nTorre com Recursividade:\n");
    torreRecursiva(0);

    printf("\nRainha com Recursividade:\n");
    rainhaRecursiva(0);

    printf("\nMovimentação Avançada do Cavalo:\n");
    cavaloAvancado();

    return 0;
}
