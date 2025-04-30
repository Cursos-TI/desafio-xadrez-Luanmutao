#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

void movimentarBispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Diagonal Superior Direita: %d casa(s)\n", i);
    }
}

void movimentarTorre() {
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= TORRE_MOV; i++) {
        printf("Direita: %d casa(s)\n", i);
    }
}

void movimentarRainha() {
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= RAINHA_MOV; i++) {
        printf("Esquerda: %d casa(s)\n", i);
    }
}

int main() {
    printf("Simulação de Movimentação das Peças de Xadrez\n\n");
    
    // Movimentação do Bispo
    movimentarBispo();
    printf("\n");
    
    // Movimentação da Torre
    movimentarTorre();
    printf("\n");
    
    // Movimentação da Rainha
    movimentarRainha();
    printf("\n");

    return 0;
}
