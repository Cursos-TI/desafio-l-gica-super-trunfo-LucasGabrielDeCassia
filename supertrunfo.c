#include <stdio.h>

int main() {
    // Variáveis para os dados das cartas
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Variáveis para escolha dos atributos
    char opcao1, opcao2;
    // Variáveis para armazenar os valores dos atributos escolhidos para cada carta
    float valor1_attr1 = 0, valor2_attr1 = 0, valor1_attr2 = 0, valor2_attr2 = 0;
    char *nomeAttr1, *nomeAttr2;
    int resultado1, resultado2;
    float soma1, soma2;
    int vencedorFinal; 

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

    /* --- CARTA 1 --- */
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %lu\n",        populacao1);
    printf("Area: %.2f\n",            area1);
    printf("PIB: %.2f\n",             pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Demografica: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n\n",       pib_per_capita1);

    /* --- CARTA 2 --- */
    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %lu\n",        populacao2);
    printf("Area: %.2f\n",            area2);
    printf("PIB: %.2f\n",             pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Demografica: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n\n",       pib_per_capita2);


    // MENU DE COMPARACAO: Escolha de 2 atributos diferentes
    // Opções disponíveis:
    // P - Populacao - A - Area - B - PIB - T Pontos Turisticos - (maior vence)
    // D - Densidade Demografica (menor vence)
    printf("--- Menu de Comparacao ---\n");
    printf("Escolha o PRIMEIRO atributo para comparacao:\n");
    printf("P - Populacao\n");
    printf("A - Area\n");
    printf("B - PIB\n");
    printf("T - Pontos Turisticos\n");
    printf("D - Densidade Demografica\n");
    printf("Opcao: ");
    scanf(" %c", &opcao1);

    printf("\nEscolha o SEGUNDO atributo para comparacao (diferente do primeiro):\n");
    if(opcao1 != 'P' && opcao1 != 'p') printf("P - Populacao\n");
    if(opcao1 != 'A' && opcao1 != 'a') printf("A - Area\n");
    if(opcao1 != 'B' && opcao1 != 'b') printf("B - PIB\n");
    if(opcao1 != 'T' && opcao1 != 't') printf("T - Pontos Turisticos\n");
    if(opcao1 != 'D' && opcao1 != 'd') printf("D - Densidade Demografica\n");
    printf("Opcao: ");
    scanf(" %c", &opcao2);

    // Mapeamento do PRIMEIRO atributo escolhido
    switch(opcao1) {
        case 'P': case 'p':
            nomeAttr1 = "Populacao";
            valor1_attr1 = (float)populacao1;
            valor2_attr1 = (float)populacao2;
            break;
        case 'A': case 'a':
            nomeAttr1 = "Area";
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;
        case 'B': case 'b':
            nomeAttr1 = "PIB";
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 'T': case 't':
            nomeAttr1 = "Pontos Turisticos";
            valor1_attr1 = (float)pontos_turisticos1;
            valor2_attr1 = (float)pontos_turisticos2;
            break;
        case 'D': case 'd':
            nomeAttr1 = "Densidade Demografica";
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;
        default:
            break;
    }

    // Mapeamento do SEGUNDO atributo escolhido
    switch(opcao2) {
        case 'P': case 'p':
            nomeAttr2 = "Populacao";
            valor1_attr2 = (float)populacao1;
            valor2_attr2 = (float)populacao2;
            break;
        case 'A': case 'a':
            nomeAttr2 = "Area";
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;
        case 'B': case 'b':
            nomeAttr2 = "PIB";
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;
        case 'T': case 't':
            nomeAttr2 = "Pontos Turisticos";
            valor1_attr2 = (float)pontos_turisticos1;
            valor2_attr2 = (float)pontos_turisticos2;
            break;
        case 'D': case 'd':
            nomeAttr2 = "Densidade Demografica";
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;
        default:
            break;
    }

    // Comparação utilizando operador ternário:
    // Para Densidade Demografica (D) vence a carta com menor valor; para os demais, maior vence.
    resultado1 = ((opcao1=='D' || opcao1=='d') ? 
                  (valor1_attr1 < valor2_attr1 ? 1 : (valor1_attr1 > valor2_attr1 ? 2 : 0)) :
                  (valor1_attr1 > valor2_attr1 ? 1 : (valor1_attr1 < valor2_attr1 ? 2 : 0)));

    resultado2 = ((opcao2=='D' || opcao2=='d') ? 
                  (valor1_attr2 < valor2_attr2 ? 1 : (valor1_attr2 > valor2_attr2 ? 2 : 0)) :
                  (valor1_attr2 > valor2_attr2 ? 1 : (valor1_attr2 < valor2_attr2 ? 2 : 0)));

    // Soma dos atributos escolhidos para cada carta
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;
    vencedorFinal = (soma1 > soma2) ? 1 : (soma1 < soma2 ? 2 : 0);

    // Exibição dos resultados detalhados
    printf("\n--- Resultados da Comparacao ---\n\n");
    
    // Resultado da comparação do primeiro atributo
    printf("Comparacao do atributo: %s\n", nomeAttr1);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor1_attr1);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor2_attr1);
    printf("Resultado: %s vence no atributo %s\n\n", 
           (resultado1 == 1) ? cidade1 : (resultado1 == 2) ? cidade2 : "Empate", nomeAttr1);
    
    // Resultado da comparação do segundo atributo
    printf("Comparacao do atributo: %s\n", nomeAttr2);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor1_attr2);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor2_attr2);
    printf("Resultado: %s vence no atributo %s\n\n", 
           (resultado2 == 1) ? cidade1 : (resultado2 == 2) ? cidade2 : "Empate", nomeAttr2);
    
    // Exibição da soma dos valores e resultado final
    printf("Soma dos valores dos atributos escolhidos:\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", cidade2, soma2);
    printf("Resultado Final: %s vence a rodada!\n", 
           (vencedorFinal == 1) ? cidade1 : (vencedorFinal == 2) ? cidade2 : "Empate");
    
    return 0;
}
