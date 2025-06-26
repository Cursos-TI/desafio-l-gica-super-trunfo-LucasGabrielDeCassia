#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declaração de variáveis para as duas cartas
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Instruções iniciais e cadastro (usando dados pré-cadastrados)
    printf("*** Seja bem-vindo ao SUPER TRUNFO ***\n");
    printf("Cadastre as cartas para jogar (não use acentos e utilize ponto (.) para decimais).\n");

    // Cadastro da Carta 1
    printf("\n--- Cadastro da Primeira Carta ---\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de atributos derivados
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita1 = pib1 / (float)populacao1;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibição dos dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n\n");
    printf("Carta 1: %s, %s\n", cidade1, estado1);
    printf("   População: %lu\n", populacao1);
    printf("   Área: %.2f km²\n", area1);
    printf("   PIB: %.2f milhões\n", pib1);
    printf("   Pontos turísticos: %d\n", pontos_turisticos1);
    printf("   Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("   PIB per capita: %.2f milhões/hab\n", pib_per_capita1);

    printf("\nCarta 2: %s, %s\n", cidade2, estado2);
    printf("   População: %lu\n", populacao2);
    printf("   Área: %.2f km²\n", area2);
    printf("   PIB: %.2f milhões\n", pib2);
    printf("   Pontos turísticos: %d\n", pontos_turisticos2);
    printf("   Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("   PIB per capita: %.2f milhões/hab\n", pib_per_capita2);

    printf("\n-----------------------------------------------\n\n");

    /* MENU DINÂMICO PARA ESCOLHA DE DOIS ATRIBUTOS */
    int attr1, attr2;
    printf("--- Escolha do Primeiro Atributo ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &attr1);
    if(attr1 < 1 || attr1 > 6) {
        printf("Opção inválida para o primeiro atributo.\n");
        return 1;
    }
    
    printf("\n--- Escolha do Segundo Atributo ---\n");
    if(attr1 != 1) printf("1 - População\n");
    if(attr1 != 2) printf("2 - Área\n");
    if(attr1 != 3) printf("3 - PIB\n");
    if(attr1 != 4) printf("4 - Densidade Populacional\n");
    if(attr1 != 5) printf("5 - PIB per capita\n");
    if(attr1 != 6) printf("6 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &attr2);
    if(attr2 < 1 || attr2 > 6 || attr2 == attr1) {
        printf("Erro: Opção inválida ou atributo repetido para a segunda escolha.\n");
        return 1;
    }
    
    /* COMPARAÇÃO INDIVIDUAL DO PRIMEIRO ATRIBUTO */
    printf("\n==============================================\n");
    switch(attr1) {
        case 1:
            printf("Comparação de População (maior vence)\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Resultado: Carta 1 venceu\n");
            else if(populacao1 < populacao2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 2:
            printf("Comparação de Área (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f\n", cidade2, area2);
            if(area1 > area2)
                printf("Resultado: Carta 1 venceu\n");
            else if(area1 < area2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 3:
            printf("Comparação de PIB (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
            if(pib1 > pib2)
                printf("Resultado: Carta 1 venceu\n");
            else if(pib1 < pib2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 4:
            printf("Comparação de Densidade Populacional (menor vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
            if(densidade1 < densidade2)
                printf("Resultado: Carta 1 venceu\n");
            else if(densidade1 > densidade2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 5:
            printf("Comparação de PIB per capita (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib_per_capita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib_per_capita2);
            if(pib_per_capita1 > pib_per_capita2)
                printf("Resultado: Carta 1 venceu\n");
            else if(pib_per_capita1 < pib_per_capita2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 6:
            printf("Comparação de Pontos Turísticos (maior vence)\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: Carta 1 venceu\n");
            else if(pontos_turisticos1 < pontos_turisticos2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
    }
    
    /* COMPARAÇÃO INDIVIDUAL DO SEGUNDO ATRIBUTO */
    printf("\n==============================================\n");
    switch(attr2) {
        case 1:
            printf("Comparação de População (maior vence)\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Resultado: Carta 1 venceu\n");
            else if(populacao1 < populacao2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 2:
            printf("Comparação de Área (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f\n", cidade2, area2);
            if(area1 > area2)
                printf("Resultado: Carta 1 venceu\n");
            else if(area1 < area2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 3:
            printf("Comparação de PIB (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
            if(pib1 > pib2)
                printf("Resultado: Carta 1 venceu\n");
            else if(pib1 < pib2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 4:
            printf("Comparação de Densidade Populacional (menor vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
            if(densidade1 < densidade2)
                printf("Resultado: Carta 1 venceu\n");
            else if(densidade1 > densidade2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 5:
            printf("Comparação de PIB per capita (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib_per_capita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib_per_capita2);
            if(pib_per_capita1 > pib_per_capita2)
                printf("Resultado: Carta 1 venceu\n");
            else if(pib_per_capita1 < pib_per_capita2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
        case 6:
            printf("Comparação de Pontos Turísticos (maior vence)\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: Carta 1 venceu\n");
            else if(pontos_turisticos1 < pontos_turisticos2)
                printf("Resultado: Carta 2 venceu\n");
            else
                printf("Resultado: Empate\n");
            break;
    }
    
    /* CALCULO DA SOMA DOS ATRIBUTOS SELECIONADOS */
    float score1_attr1, score2_attr1, score1_attr2, score2_attr2;
    // Atribuindo score de acordo com o atributo escolhido para o primeiro atributo
    switch(attr1) {
        case 1: 
            score1_attr1 = (float)populacao1; 
            score2_attr1 = (float)populacao2; 
            break;
        case 2: 
            score1_attr1 = area1; 
            score2_attr1 = area2; 
            break;
        case 3: 
            score1_attr1 = pib1; 
            score2_attr1 = pib2; 
            break;
        case 4: 
            score1_attr1 = -densidade1; 
            score2_attr1 = -densidade2; 
            break;
        case 5: 
            score1_attr1 = pib_per_capita1; 
            score2_attr1 = pib_per_capita2; 
            break;
        case 6: 
            score1_attr1 = (float)pontos_turisticos1; 
            score2_attr1 = (float)pontos_turisticos2; 
            break;
    }
    // Atribuindo score de acordo com o atributo escolhido para o segundo atributo
    switch(attr2) {
        case 1: 
            score1_attr2 = (float)populacao1; 
            score2_attr2 = (float)populacao2; 
            break;
        case 2: 
            score1_attr2 = area1; 
            score2_attr2 = area2; 
            break;
        case 3: 
            score1_attr2 = pib1; 
            score2_attr2 = pib2; 
            break;
        case 4: 
            score1_attr2 = -densidade1; 
            score2_attr2 = -densidade2; 
            break;
        case 5: 
            score1_attr2 = pib_per_capita1; 
            score2_attr2 = pib_per_capita2; 
            break;
        case 6: 
            score1_attr2 = (float)pontos_turisticos1; 
            score2_attr2 = (float)pontos_turisticos2; 
            break;
    }
    
    float somaCarta1 = score1_attr1 + score1_attr2;
    float somaCarta2 = score2_attr1 + score2_attr2;
    
    // Exibição final da soma e do resultado da rodada
    printf("\n==============================================\n");
    printf("Soma dos Atributos Selecionados:\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, somaCarta1);
    printf("Carta 2 - %s: %.2f\n", cidade2, somaCarta2);
    
    if(somaCarta1 > somaCarta2)
         printf("Resultado Final: Carta 1 venceu\n");
    else if(somaCarta1 < somaCarta2)
         printf("Resultado Final: Carta 2 venceu\n");
    else
         printf("Resultado Final: Empate\n");
    
    printf("==============================================\n");
    
    return 0;
}
