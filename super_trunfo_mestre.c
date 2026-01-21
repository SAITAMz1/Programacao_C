#include <stdio.h>

int main()
{
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    char estado1, estado2;
    char codigo1[30], codigo2[30]; 
    char nome1[50], nome2[50];
    float area1, area2;
    double pib1, pib2;
    float densidade1, densidade2;
    float perCapita1, perCapita2;
    float superPoder1, superPoder2;
    
    printf("--- Vamos Jogar Super Trunfo --- \n");
    
    // --- CADASTRO DA CARTA 1 ---
    
    printf("\n Cadastre a 1ª Carta. \n");
    printf("Escolha um estado de 'A' a 'H': ");
    scanf(" %c", &estado1); 
    printf("Escolha um código (Ex: A01): ");
    scanf("%s", codigo1); 
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao1);
    printf("Informe a área em KM2: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%lf", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    
    // --- CADASTRO DA CARTA 2 ---
    
    printf("\n Cadastre a 2ª Carta. \n");
    printf("Escolha um estado de 'A' a 'H': ");
    scanf(" %c", &estado2); 
    printf("Escolha um código (Ex: A01): ");
    scanf("%s", codigo2); 
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("Informe a área em KM2: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%lf", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    
    // --- CÁLCULOS DENSIDADE E PIB per CAPITA ---
    
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    perCapita1 = (float)pib1 / populacao1;
    perCapita2 = (float)pib2 / populacao2;
    
        //CALCULANDO O SUPER PODER

    superPoder1 = (float)populacao1 + area1 + (float)pib1 + (float)pontos_turisticos1 + perCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (float)pib2 + (float)pontos_turisticos2 + perCapita2 + (1.0f / densidade2);
   
    // --- EXIBIÇÃO DOS DADOS ---
    
    printf("\n --- EXIBIÇÃO DAS CARTAS --- \n");
    
    // EXIBIÇÃO CARTA 1
    
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    
    if (pib1 >= 1000000000) {
        printf("PIB: %.2f Bilhões de reais\n", pib1 / 1000000000);
    } else if (pib1 >= 1000000) {
        printf("PIB: %.2f Milhões de reais\n", pib1 / 1000000);
    } else {
        printf("PIB: %.2f reais\n", pib1);
    }
    
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", perCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // EXIBIÇÃO CARTA 2
    
    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    
    if (pib2 >= 1000000000) {
        printf("PIB: %.2f Bilhões de reais\n", pib2 / 1000000000);
    } else if (pib2 >= 1000000) {
        printf("PIB: %.2f Milhões de reais\n", pib2 / 1000000);
    } else {
        printf("PIB: %.2f reais\n", pib2);
    }
    
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", perCapita2);
    printf("Super Poder 2: %.2f\n", superPoder2);
    
    //COMPARAÇÃO DAS CARTAS
    
    printf("\n--- COMPARAÇÃO DAS CARTAS ---\n");
    printf("\n*** O MAIOR VENCE ***\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("PIB per Capita: %d\n", perCapita1 > perCapita2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);
    
    return 0;
}