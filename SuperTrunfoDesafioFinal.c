#include <stdio.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char nome1[50];
    unsigned long int pop1;
    float area1, pib1, densidade1;
    int pontos1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char nome2[50];
    unsigned long int pop2;
    float area2, pib2, densidade2;
    int pontos2;

    // --- VARIÁVEIS DE CONTROLE E RESULTADO ---
    int escolha1, escolha2;
    float valor1_atrib1, valor1_atrib2, valor2_atrib1, valor2_atrib2;
    float soma1, soma2;

    printf("=== SUPER TRUNFO: DESAFIO MESTRE ===\n");

    // --- CADASTRO DA CARTA 1 ---
    printf("\n--- Cadastro Carta 1 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);
    densidade1 = (float)pop1 / area1;

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);
    densidade2 = (float)pop2 / area2;

    // --- MENU 1: PRIMEIRO ATRIBUTO ---
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

    // --- MENU 2: SEGUNDO ATRIBUTO ---
    printf("\nEscolha o SEGUNDO atributo (Diferente do primeiro):\n");
    if (escolha1 != 1) printf("1. População\n");
    if (escolha1 != 2) printf("2. Área\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos Turísticos\n");
    if (escolha1 != 5) printf("5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &escolha2);

    // --- ATRIBUIÇÃO DOS VALORES ---
    // ATRIBUTO 1
    switch (escolha1) {
        case 1: valor1_atrib1 = (float)pop1; valor2_atrib1 = (float)pop2; break;
        case 2: valor1_atrib1 = area1; valor2_atrib1 = area2; break;
        case 3: valor1_atrib1 = pib1; valor2_atrib1 = pib2; break;
        case 4: valor1_atrib1 = (float)pontos1; valor2_atrib1 = (float)pontos2; break;
        case 5: valor1_atrib1 = densidade1; valor2_atrib1 = densidade2; break;
    }

    // ATRIBUTO 2
    switch (escolha2) {
        case 1: valor1_atrib2 = (float)pop1; valor2_atrib2 = (float)pop2; break;
        case 2: valor1_atrib2 = area1; valor2_atrib2 = area2; break;
        case 3: valor1_atrib2 = pib1; valor2_atrib2 = pib2; break;
        case 4: valor1_atrib2 = (float)pontos1; valor2_atrib2 = (float)pontos2; break;
        case 5: valor1_atrib2 = densidade1; valor2_atrib2 = densidade2; break;
    }

    // --- CÁLCULO DAS SOMAS ---
    soma1 = valor1_atrib1 + valor1_atrib2;
    soma2 = valor2_atrib1 + valor2_atrib2;

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\n==================================\n");
    printf("DUELO: %s vs %s\n", nome1, nome2);
    printf("----------------------------------\n");
    printf("Soma %s: %.2f\n", nome1, soma1);
    printf("Soma %s: %.2f\n", nome2, soma2);

    // --- VENCEDOR ---
    printf("\nRESULTADO FINAL: ");
    (soma1 > soma2) ? printf("%s VENCEU!\n", nome1) :
    (soma2 > soma1) ? printf("%s VENCEU!\n", nome2) : printf("EMPATE!\n");
    printf("==================================\n");

    return 0;
}