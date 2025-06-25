#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para as duas cartas
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Instruções iniciais
    printf("*** Seja bem-vindo ao SUPER TRUNFO ***\n");
    printf("Aqui você irá cadastrar as cartas para jogar.\n");
    printf("Por favor, siga estas instruções:\n");
    printf("- Não use acentos.\n");
    printf("- Use ponto (.) para separar a parte decimal dos números.\n");

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

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f milhões/hab\n", pib_per_capita1);

    printf("\n-----------------------------------------------\n\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f milhões/hab\n", pib_per_capita2);

    printf("\n-----------------------------------------------\n\n");

    // Menu de comparação – execução única (sem laços)
    int opcao;
    printf("--- Menu de Comparação ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População            (maior vence)\n");
    printf("2 - Área                 (maior vence)\n");
    printf("3 - PIB                  (maior vence)\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per capita       (maior vence)\n");
    printf("6 - Pontos Turísticos    (maior vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            // Comparação de População (maior vence)
            printf("\nComparação de População (maior vence)\n");
            printf("Carta 1 - %s: %lu\n", estado1, populacao1);
            printf("Carta 2 - %s: %lu\n", estado2, populacao2);
            if(populacao1 > populacao2)
                printf("Resultado: Carta 1 venceu\n\n");
            else if(populacao1 < populacao2)
                printf("Resultado: Carta 2 venceu\n\n");
            else
                printf("Resultado: Empate\n\n");
            break;
        case 2:
            // Comparação de Área (maior vence)
            printf("\nComparação de Área (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", estado1, area1);
            printf("Carta 2 - %s: %.2f\n", estado2, area2);
            if(area1 > area2)
                printf("Resultado: Carta 1 venceu\n\n");
            else if(area1 < area2)
                printf("Resultado: Carta 2 venceu\n\n");
            else
                printf("Resultado: Empate\n\n");
            break;
        case 3:
            // Comparação de PIB (maior vence)
            printf("\nComparação de PIB (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", estado1, pib1);
            printf("Carta 2 - %s: %.2f\n", estado2, pib2);
            if(pib1 > pib2)
                printf("Resultado: Carta 1 venceu\n\n");
            else if(pib1 < pib2)
                printf("Resultado: Carta 2 venceu\n\n");
            else
                printf("Resultado: Empate\n\n");
            break;
        case 4:
            // Comparação de Densidade Populacional (menor vence)
            printf("\nComparação de Densidade Populacional (menor vence)\n");
            printf("Carta 1 - %s: %.2f\n", estado1, densidade1);
            printf("Carta 2 - %s: %.2f\n", estado2, densidade2);
            if(densidade1 < densidade2)
                printf("Resultado: Carta 1 venceu\n\n");
            else if(densidade1 > densidade2)
                printf("Resultado: Carta 2 venceu\n\n");
            else
                printf("Resultado: Empate\n\n");
            break;
        case 5:
            // Comparação de PIB per capita (maior vence)
            printf("\nComparação de PIB per capita (maior vence)\n");
            printf("Carta 1 - %s: %.2f\n", estado1, pib_per_capita1);
            printf("Carta 2 - %s: %.2f\n", estado2, pib_per_capita2);
            if(pib_per_capita1 > pib_per_capita2)
                printf("Resultado: Carta 1 venceu\n\n");
            else if(pib_per_capita1 < pib_per_capita2)
                printf("Resultado: Carta 2 venceu\n\n");
            else
                printf("Resultado: Empate\n\n");
            break;
        case 6:
            // Comparação de Pontos Turísticos (maior vence)
            printf("\nComparação de Pontos Turísticos (maior vence)\n");
            printf("Carta 1 - %s: %d\n", estado1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", estado2, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: Carta 1 venceu\n\n");
            else if(pontos_turisticos1 < pontos_turisticos2)
                printf("Resultado: Carta 2 venceu\n\n");
            else
                printf("Resultado: Empate\n\n");
            break;
        default:
            printf("\nOpção inválida! Não foi possível realizar a comparação.\n");
    }

    return 0;
}
