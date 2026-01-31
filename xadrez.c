#include <stdio.h>


void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n");
        moverTorre(n - 1); // CHAMADA RECURSIVA
    }
}

void moverBispoRecursivo(int n) {
    if (n > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(n - 1);
    }
}

void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainha(n - 1);
    }
}

int main() {
    // DEFINIÇÃO DAS CONSTANTES DE MOVIMENTO
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    // --- MOVIMENTO DA TORRE (RECURSIVO) ---
    printf("Movimento da Torre:\n");
    moverTorre(CASAS_TORRE);
    printf("\n");

    // --- MOVIMENTO DO BISPO (RECURSIVO + ANINHADO) ---
    printf("Movimento do Bispo:\n");
    
    for (int i = 0; i < CASAS_BISPO; i++) {
        for (int j = 0; j < 1; j++) { 
            
            printf("Cima, ");
        }
        printf("Direita\n");
    }
    printf("\n");

    // --- MOVIMENTO DA RAINHA (RECURSIVO) ---
    printf("Movimento da Rainha:\n");
    moverRainha(CASAS_RAINHA);
    printf("\n");

    // --- MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ---
    
    printf("Movimento do Cavalo:\n");

    for (int i = 0, j = 0; i < 3; i++) {
        
        if (i < 2) {
            printf("Cima\n");
            continue; 
        }
        
        while (j < 1) {
            printf("Direita\n");
            j++;
        }
    }

    return 0;
}