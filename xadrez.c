#include <stdio.h>

// Tamanho do tabuleiro
#define TABULEIRO 8

// Constantes de movimentação
const int MAX_DIAGONAL = 7;  // Bispo
const int MAX_HORIZONTAL = 7; // Torre
const int MAX_LATERAL = 7;   // Rainha

// ---------------- Nível Novato ----------------

// Função de movimentação do Bispo (diagonal) usando FOR
void movimentarBispo() {
    printf("Movimentação do Bispo (FOR - Diagonal):\n");
    for (int i = 1; i <= MAX_DIAGONAL; i++) {
        printf("Diagonal (%d, %d)\n", i, i);
    }
    printf("\n");
}

// Função de movimentação da Torre (direita) usando WHILE
void movimentarTorre() {
    printf("Movimentação da Torre (WHILE - Direita):\n");
    int i = 1;
    while (i <= MAX_HORIZONTAL) {
        printf("Direita (0, %d)\n", i);
        i++;
    }
    printf("\n");
}

// Função de movimentação da Rainha (esquerda) usando DO-WHILE
void movimentarRainha() {
    printf("Movimentação da Rainha (DO-WHILE - Esquerda):\n");
    int i = 1;
    do {
        printf("Esquerda (0, -%d)\n", i);
        i++;
    } while (i <= MAX_LATERAL);
    printf("\n");
}

// ---------------- Nível Aventureiro ----------------

// Movimentação do Cavalo (em L) com loops
void movimentarCavalo() {
    printf("Movimentação do Cavalo (Loops Aninhados - L):\n");

    // Todos os possíveis movimentos do cavalo em L
    int movimentos[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    for (int i = 0; i < 8; i++) {
        int dx = movimentos[i][0];
        int dy = movimentos[i][1];
        printf("L (%d, %d)\n", dx, dy);
    }
    printf("\n");
}

// ---------------- Nível Mestre ----------------

// Movimentação recursiva do Bispo
void movimentarBispoRecursivo(int passo) {
    if (passo > MAX_DIAGONAL) return;

    printf("Recursivo Diagonal (%d, %d)\n", passo, passo);
    movimentarBispoRecursivo(passo + 1);
}

// Movimentação avançada do Cavalo com continue/break e variáveis múltiplas
void movimentarCavaloAvancado() {
    printf("Movimentação Avançada do Cavalo (com continue e break):\n");

    for (int x = 0; x < TABULEIRO; x++) {
        for (int y = 0; y < TABULEIRO; y++) {
            if ((x + y) % 2 == 0) {
                continue; // Pula casas pares (só por exemplo)
            }

            if (x + y > 10) {
                break; // Limita soma de coordenadas
            }

            printf("Posição possível (%d, %d)\n", x, y);
        }
    }

    printf("\n");
}

// ---------------- Função principal ----------------

int main() {
    movimentarBispo();
    movimentarTorre();
    movimentarRainha();
    movimentarCavalo();

    printf("Movimentação Recursiva do Bispo:\n");
    movimentarBispoRecursivo(1);
    printf("\n");

    movimentarCavaloAvancado();

    return 0;
}
