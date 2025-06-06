#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para os dados das cartas
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    int opcao;  // Variável para armazenar a opção escolhida no menu

    // Instruções iniciais
    printf("*** Seja bem-vindo ao SUPER TRUNFO ***\n");
    printf("Aqui voce ira cadastrar as cartas para jogar.\n");
    printf("Por favor, siga estas instrucoes:\n");
    printf("- Nao use acentos.\n");
    printf("- Use ponto (.) para separar a parte decimal dos numeros.\n");

    // Cadastro da primeira carta  
    printf("\n--- Cadastro da Primeira Carta ---\n");
    printf("Digite o nome estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta  
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite o nome estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos novos atributos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita1 = pib1 / (float)populacao1;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibição dos dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n\n");

    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %lu, Area: %.2f, PIB: %.2f, Pontos Turisticos: %d\n", 
           populacao1, area1, pib1, pontos_turisticos1);
    printf("Densidade Demografica: %.2f, PIB per capita: %.2f\n\n", 
           densidade1, pib_per_capita1);

    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %lu, Area: %.2f, PIB: %.2f, Pontos Turisticos: %d\n", 
           populacao2, area2, pib2, pontos_turisticos2);
    printf("Densidade Demografica: %.2f, PIB per capita: %.2f\n\n", 
           densidade2, pib_per_capita2);

    // Menu interativo para escolha do atributo de comparação
    printf("--- Menu de Comparacao ---\n");
    printf("Vamos decidir qual carta tem o melhor atributo\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Switch para processar a opção escolhida
    switch(opcao) {
        case 1:
            // Comparação por População (maior vence)
            printf("\nComparacao de Populacao:\n");
            printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
            printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
            if(populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if(populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            // Comparação por Área (maior vence)
            printf("\nComparacao de Area:\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f\n", cidade2, area2);
            if(area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if(area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            // Comparação por PIB (maior vence)
            printf("\nComparacao de PIB:\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f\n", cidade2, pib2);
            if(pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if(pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            // Comparação por Pontos Turísticos (maior vence)
            printf("\nComparacao de Pontos Turisticos:\n");
            printf("Carta 1 (%s): %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 (%s): %d\n", cidade2, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if(pontos_turisticos1 < pontos_turisticos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            // Comparação por Densidade Demografica (menor vence)
            printf("\nComparacao de Densidade Demografica:\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f\n", cidade2, densidade2);
            if(densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if(densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }
    
    return 0;
}
