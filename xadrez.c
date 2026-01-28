#include <stdio.h>

//PROGRAMA: SIMULAÇÃO DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ
//OBJETIVO: DEMONSTRAR O USO DE LOOPS (WHILE, DO-WHILE E FOR)

int main() {
    // DEFININDO AS CPNSTANTES PARA O NÚMERO DE CASAS
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- MOVIMENTO DA TORRE ---
    
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- MOVIMENTO DO BISPO ---
    
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- MOVIMENTO DA RAINHA ---
    
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOVIMENTO_RAINHA);

    return 0;
}
































