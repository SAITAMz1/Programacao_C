#include <stdio.h>

int main() {
    // VARIÁVEIS CARTA 1
    int populacao1, pontos_turisticos1;
    char estado1, codigo1[30], nome1[50];
    float area1;
    double pib1;
    float densidade1, perCapita1;

    // VARIÁVEIS CARTA 2
    int populacao2, pontos_turisticos2;
    char estado2, codigo2[30], nome2[50];
    float area2;
    double pib2;
    float densidade2, perCapita2;

    int opcao; // VARIÁVEL MENU

    printf("--- Super Trunfo: Países (Nível Intermediário) ---\n");

    // --- CADASTRO DA CARTA 1 ---
    printf("\n--- Cadastre a 1ª Carta ---\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (Ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastre a 2ª Carta ---\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (Ex: A02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- CÁLCULOS ---
    densidade1 = (float)populacao1 / area1;
    perCapita1 = (float)pib1 / populacao1;

    densidade2 = (float)populacao2 / area2;
    perCapita2 = (float)pib2 / populacao2;

    // --- MENU INTERATIVO ---
    printf("\n*********************************");
    printf("\n* ESCOLHA O ATRIBUTO DE DISPUTA *");
    printf("\n* 1. População                  *");
    printf("\n* 2. Área                       *");
    printf("\n* 3. PIB                        *");
    printf("\n* 4. Pontos Turísticos          *");
    printf("\n* 5. Densidade Demográfica      *");
    printf("\n*********************************\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DO DUELO ---\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH E IF-ELSE ---
    switch (opcao) {
        case 1: // COMPARAÇÃO DE POPULAÇÃO
            printf("Atributo Escolhido: População\n");
            printf("%s (%d) vs %s (%d)\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s VENCEU!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s VENCEU!\n", nome2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 2: // COMPARAÇÃO DE ÁREA
            printf("Atributo Escolhido: Área\n");
            printf("%s (%.2f km²) vs %s (%.2f km²)\n", nome1, area1, nome2, area2);
            if (area1 > area2) {
                printf("Resultado: %s VENCEU!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s VENCEU!\n", nome2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 3: // COMPARAÇÃO DE PIB
            printf("Atributo Escolhido: PIB\n");
            printf("%s (%.2f) vs %s (%.2f)\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s VENCEU!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s VENCEU!\n", nome2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 4: // COMPARAÇÃO DE PONTOS TURÍSTICOS
            printf("Atributo Escolhido: Pontos Turísticos\n");
            printf("%s (%d) vs %s (%d)\n", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s VENCEU!\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s VENCEU!\n", nome2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 5: // COMPARAÇÃO DE DESNSIDADE (MENOR VENCE)
            printf("Atributo Escolhido: Densidade Demográfica\n");
            printf("%s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nome1, densidade1, nome2, densidade2);
            // Regra especial: Inversão do operador <
            if (densidade1 < densidade2) {
                printf("Resultado: %s VENCEU! (Menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s VENCEU! (Menor densidade)\n", nome2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}