#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
 // Declaração de variáveis para a Carta 1
    char estado_1 [20];
    char codigo_1 [7];
    char cidade_1 [30];
    int populacao_1;
    float area_1;
    float PIB_1;
    int pontos_turisticos_1;

    // Declaração de variáveis para a Carta 2
    char estado_2 [20];
    char codigo_2 [7];
    char cidade_2 [30];
    int populacao_2;
    float area_2;
    float PIB_2;
    int pontos_turisticos_2;

    // ENTRADA DE DADOS PARA A CARTA 1
    printf("Digite os dados da Carta 1:\n");

    printf("Digite o estado:\n");
    scanf("%s", estado_1);
    printf("Digite o codigo da carta (ex: A1):\n");
    scanf("%s", &codigo_1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade_1);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao_1);
    printf("Digite a area (em km):\n");
    scanf("%f", &area_1);
    printf("Digite o PIB (em R$):\n");
    scanf("%f", &PIB_1);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos_1);


    // ENTRADA DE DADOS PARA A CARTA 2
    printf("Digite os dados da Carta 2:\n");
    printf("Digite o estado:\n");
    scanf("%s", &estado_2);
    printf("Digite o codigo da carta (ex: A2):\n");
    scanf("%s", &codigo_2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade_2);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao_2);
    printf("Digite a area (em km):\n");
    scanf("%f", &area_2);
    printf("Digite o PIB (em R$):\n");
    scanf("%f", &PIB_2);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos_2);

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Nome do Estado: %s\n", estado_1);
    printf("O código da carta é: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("Numero da populacao: %d\n", populacao_1);
    printf("Area da cidade: %.2f km\n", area_1);
    printf("PIB da cidade: R$ %.2f\n", PIB_1);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos_1);

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Nome do Estado: %s\n", estado_2);
    printf("O código da carta é: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("Numero da populacao: %d\n", populacao_2);
    printf("Area da cidade: %.2f km\n", area_2);
    printf("PIB da cidade: R$ %.2f\n", PIB_2);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos_2);


        return 0;
} 