#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Declaração das variáveis para a Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Solicita e lê os dados da Carta 1
    printf("Carta 1:\n");

    printf("Estado (ex: SP): ");
    scanf("%2s", estado1); // Limita a leitura a 2 caracteres

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1); // Limita a leitura a 3 caracteres

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até encontrar uma nova linha

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // Solicita e lê os dados da Carta 2
    printf("Carta 2:\n");

    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2); // Limita a leitura a 2 caracteres

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2); // Limita a leitura a 3 caracteres

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Lê até encontrar uma nova linha

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // Calcula a Densidade Populacional e o PIB per Capita para a Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    // Calcula a Densidade Populacional e o PIB per Capita para a Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    // Escolha do atributo para comparação (HARDCODED - Alterar para entrada do usuário em níveis mais avançados)
    int atributo_comparacao = 1; // 1: Populacao, 2: Area, 3: PIB, 4: Densidade Populacional, 5: PIB per Capita

    printf("Comparacao de cartas (Atributo: ");

    if (atributo_comparacao == 1) {
        printf("Populacao):\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

        printf("Resultado: Carta ");
        if (populacao1 > populacao2) {
            printf("1 (%s) venceu!\n", cidade1);
        } else {
            printf("2 (%s) venceu!\n", cidade2);
        }
    } else if (atributo_comparacao == 2) {
        printf("Area):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);

        printf("Resultado: Carta ");
        if (area1 > area2) {
            printf("1 (%s) venceu!\n", cidade1);
        } else {
            printf("2 (%s) venceu!\n", cidade2);
        }
    } else if (atributo_comparacao == 3) {
        printf("PIB):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);

        printf("Resultado: Carta ");
        if (pib1 > pib2) {
            printf("1 (%s) venceu!\n", cidade1);
        } else {
            printf("2 (%s) venceu!\n", cidade2);
        }
    } else if (atributo_comparacao == 4) {
        printf("Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade_populacional2);

        printf("Resultado: Carta ");
        if (densidade_populacional1 < densidade_populacional2) {
            printf("1 (%s) venceu!\n", cidade1);
        } else {
            printf("2 (%s) venceu!\n", cidade2);
        }
    } else if (atributo_comparacao == 5) {
        printf("PIB per Capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib_per_capita2);

        printf("Resultado: Carta ");
        if (pib_per_capita1 > pib_per_capita2) {
            printf("1 (%s) venceu!\n", cidade1);
        } else {
            printf("2 (%s) venceu!\n", cidade2);
        }
    } else {
        printf("Atributo invalido.\n");
    }

    return 0;
}sprint






































































































