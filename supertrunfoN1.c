#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    
    // Instrucoes iniciais 
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
    
    // Calculo dos novos atributos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita1 = pib1 / (float)populacao1;
    pib_per_capita2 = pib2 / (float)populacao2;
    
    printf("\n--- Cartas Cadastradas ---\n\n");
    
    // Exibicao da Carta 1
    printf("Carta 1 // Codigo: %.1s1\n\n", estado1);
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f kilometros quadrados\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes por kilometros quadrados\n", densidade1);
    printf("PIB per capita: %.2f milhoes por habitante\n", pib_per_capita1);
    
    printf("-----------------------------------------------\n\n");
    
    // Exibicao da Carta 2
    printf("Carta 2 // Codigo: %.1s2\n\n", estado2);
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f kilometros quadrados\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes por kilometros quadrados\n", densidade2);
    printf("PIB per capita: %.2f milhoes por habitante\n", pib_per_capita2);
     
    printf("-----------------------------------------------\n\n");
    // Comparacao de atributos usando os comparadores 
    printf("--- Comparacao de Atributos ---\n");
    printf("Vamos calcular qual carta tem os atributos mais forte\n");
    printf("Vamos usar como base a populacao e a area para determinar o vencedor \n");

if (populacao1 > populacao2) {

    printf("Carta 1 - %s: %lu\n", estado1, populacao1);
    printf("Carta 2 - %s: %lu\n", estado2, populacao2);
    printf("Resultado: Carta 1(%s) Venceu\n", estado1);

    if (area1 > area2) {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Carta 1(%s) Venceu\n", estado1);
    } else if (area1 < area2) {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Carta 2(%s) Venceu\n", estado2);
    } else {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Empate\n");
    }

} else if (populacao1 < populacao2) {

    printf("Carta 1 - %s: %lu\n", estado1, populacao1);
    printf("Carta 2 - %s: %lu\n", estado2, populacao2);
    printf("Resultado: Carta 2(%s) Venceu\n", estado2);

    if (area1 > area2) {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Carta 1(%s) Venceu\n", estado1);
    } else if (area1 < area2) {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Carta 2(%s) Venceu\n", estado2);
    } else {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Empate\n");
    }

} else {

    printf("Carta 1 - %s: %lu\n", estado1, populacao1);
    printf("Carta 2 - %s: %lu\n", estado2, populacao2);
    printf("Resultado: Empate\n");

    if (area1 > area2) {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Carta 1(%s) Venceu\n", estado1);
    } else if (area1 < area2) {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Carta 2(%s) Venceu\n", estado2);
    } else {
        printf("Carta 1 - %s: %.2f\n", estado1, area1);
        printf("Carta 2 - %s: %.2f\n", estado2, area2);
        printf("Resultado: Empate\n");
    }
}



    return 0;
}
