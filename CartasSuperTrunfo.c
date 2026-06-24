#include <stdio.h>

int main() {

    // Variáveis da carta
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada de dados
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados
    printf("\n=== CARTA CADASTRADA ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
