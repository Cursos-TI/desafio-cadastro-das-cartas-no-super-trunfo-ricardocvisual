#include <stdio.h>
#include <string.h>

// Estrutura - dados da carta
struct Carta {
    char codigo[4]; // Ex: A01, B02
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;

    // --- Cadastro primeira carta ---
    printf("--- Cadastro da primeira carta ---\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area (em km^2): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhoes de dolares): ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // --- Cadastro segunda carta ---
    printf("\n--- Cadastro da segunda carta ---\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area (em km^2): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhoes de dolares): ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // --- Exibição dos dados cadastrados ---
    printf("\n--- Dados da primeira carta ---\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %d milhoes\n", carta1.populacao);
    printf("Area: %.2f km^2\n", carta1.area);
    printf("PIB: %.2f bilhoes de dolares\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %d milhoes\n", carta2.populacao);
    printf("Area: %.2f km^2\n", carta2.area);
    printf("PIB: %.2f bilhoes de dolares\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}

