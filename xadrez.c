#include <stdio.h>

// Funções recursivas para movimentação das peças
void moverBispo(int mov) {
    if (mov == 0) return;
    printf("Cima, Direita\n");
    moverBispo(mov - 1);
}

void moverTorre(int mov) {
    if (mov == 0) return;
    printf("Direita\n");
    moverTorre(mov - 1);
}

void moverRainha(int mov) {
    if (mov == 0) return;
    printf("Esquerda\n");
    moverRainha(mov - 1);
}

// Função para movimentação do Cavalo com loops aninhados
void moverCavalo(int mov1, int mov2) {
    for (int i = 0; i < mov1; i++) {
        for (int j = 0; j < mov2; j++) {
            if (i == 1 && j == 0) continue; // Exemplo de controle de fluxo
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    const int CAVALO_MOV1 = 2;
    const int CAVALO_MOV2 = 1;
    moverCavalo(CAVALO_MOV1, CAVALO_MOV2);

    return 0;
}
