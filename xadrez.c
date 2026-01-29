#include <stdio.h>


//PROGRAMA: SIMULAÇÃO DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ
//OBJETIVO: Demonstrar o uso de loops (for, while, do-while) e loops aninhados.


int main() {
    // DEFINIÇÃO DAS CONSTANTES (INTEIROS)
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;
    
    // CONSTANTES PARA O CAVALO
    const int CAVALO_VERTICAL = 2;
    const int CAVALO_HORIZONTAL = 1;

    // --- MOVIMENTO DA TORRE (LOOP FOR) ---
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- MOVIMENTO DO BISPO (LOOP WHILE) ---
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- MOVIMENTO DA RAINHA (LOOP DO-WHILE) ---
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOVIMENTO_RAINHA);
    printf("\n");

    // --- MOVIMENTO DO CAVALO (LOOPS ANINHADOS) ---
    
    printf("Movimento do Cavalo:\n");

    // LOOP EXTERNO 'FOR' CONTROLA A EXECUÇÃO DA MANOBRA EM L
    for (int i = 0; i < 1; i++) {
        int passosBaixo = 1;
        
        // LOOP INTERNO 'WHILE' EXECUTA AS 2 CASAS PARA BAIXO
        while (passosBaixo <= CAVALO_VERTICAL) {
            printf("Baixo\n");
            passosBaixo++;
        }
        
        // FINALIZAÇÃO MOVIMENTO 'L'
        printf("Esquerda\n");
    }

    return 0;
}




























