#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para a função exit()

// Definição da estrutura para representar uma Carta (Cidade)
typedef struct {
    char estado[3];
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main() {
    // Declaração e leitura dos dados da Carta 1
    Carta carta1;
    printf("Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", carta1.estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    // Declaração e leitura dos dados da Carta 2
    Carta carta2;
    printf("Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", carta2.estado);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita para ambas as cartas
    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000.0) / carta1.populacao;

    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000.0) / carta2.populacao;

    int escolha;

    // Menu Interativo
    do {
        printf("Escolha o atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Numero de Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("6 - PIB per Capita\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha) {
            case 1: // Comparar por População
                printf("Comparacao por Populacao:\n");
                printf("Carta 1 - %s (%s): %lu\n", carta1.cidade, carta1.estado, carta1.populacao);
                printf("Carta 2 - %s (%s): %lu\n", carta2.cidade, carta2.estado, carta2.populacao);
                printf("Resultado: Carta ");
                if (carta1.populacao > carta2.populacao) {
                    printf("1 (%s) venceu!\n", carta1.cidade);
                } else if (carta2.populacao > carta1.populacao) {
                    printf("2 (%s) venceu!\n", carta2.cidade);
                } else {
                    printf("Empate!\n");
                }
                printf("\n");
                break;

            case 2: // Comparar por Área
                printf("Comparacao por Area:\n");
                printf("Carta 1 - %s (%s): %.2f km²\n", carta1.cidade, carta1.estado, carta1.area);
                printf("Carta 2 - %s (%s): %.2f km²\n", carta2.cidade, carta2.estado, carta2.area);
                printf("Resultado: Carta ");
                if (carta1.area > carta2.area) {
                    printf("1 (%s) venceu!\n", carta1.cidade);
                } else if (carta2.area > carta1.area) {
                    printf("2 (%s) venceu!\n", carta2.cidade);
                } else {
                    printf("Empate!\n");
                }
                printf("\n");
                break;

            case 3: // Comparar por PIB
                printf("Comparacao por PIB:\n");
                printf("Carta 1 - %s (%s): %.2f bilhoes de reais\n", carta1.cidade, carta1.estado, carta1.pib);
                printf("Carta 2 - %s (%s): %.2f bilhoes de reais\n", carta2.cidade, carta2.estado, carta2.pib);
                printf("Resultado: Carta ");
                if (carta1.pib > carta2.pib) {
                    printf("1 (%s) venceu!\n", carta1.cidade);
                } else if (carta2.pib > carta1.pib) {
                    printf("2 (%s) venceu!\n", carta2.cidade);
                } else {
                    printf("Empate!\n");
                }
                printf("\n");
                break;

            case 4: // Comparar por Número de Pontos Turísticos
                printf("Comparacao por Numero de Pontos Turisticos:\n");
                printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.pontos_turisticos);
                printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.pontos_turisticos);
                printf("Resultado: Carta ");
                if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                    printf("1 (%s) venceu!\n", carta1.cidade);
                } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                    printf("2 (%s) venceu!\n", carta2.cidade);
                } else {
                    printf("Empate!\n");
                }
                printf("\n");
                break;

            case 5: // Comparar por Densidade Demográfica (menor valor vence)
                printf("Comparacao por Densidade Demografica:\n");
                printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.cidade, carta1.estado, carta1.densidade_populacional);
                printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.cidade, carta2.estado, carta2.densidade_populacional);
                printf("Resultado: Carta ");
                if (carta1.densidade_populacional < carta2.densidade_populacional) {
                    printf("1 (%s) venceu!\n", carta1.cidade);
                } else if (carta2.densidade_populacional < carta1.densidade_populacional) {
                    printf("2 (%s) venceu!\n", carta2.cidade);
                } else {
                    printf("Empate!\n");
                }
                printf("\n");
                break;

            case 6: // Comparar por PIB per Capita
                printf("Comparacao por PIB per Capita:\n");
                printf("Carta 1 - %s (%s): %.2f reais\n", carta1.cidade, carta1.estado, carta1.pib_per_capita);
                printf("Carta 2 - %s (%s): %.2f reais\n", carta2.cidade, carta2.estado, carta2.pib_per_capita);
                printf("Resultado: Carta ");
                if (carta1.pib_per_capita > carta2.pib_per_capita) {
                    printf("1 (%s) venceu!\n", carta1.cidade);
                } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
                    printf("2 (%s) venceu!\n", carta2.cidade);
                } else {
                    printf("Empate!\n");
                }
                printf("\n");
                break;

            case 0: // Sair do programa
                printf("Saindo do Super Trunfo...\n");
                break;

            default: // Opção inválida
                printf("Opcao invalida. Tente novamente.\n\n");
        }
    } while (escolha != 0);

    return 0;
}



















