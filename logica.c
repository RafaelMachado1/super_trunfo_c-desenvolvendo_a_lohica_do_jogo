#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da estrutura para representar uma Carta (Cidade - adaptado para "país" conforme o desafio)
typedef struct {
    char nome_pais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
    float pib_per_capita;
} Carta;

// Função para exibir o menu de atributos, excluindo o atributo já escolhido
void exibir_menu(int escolhido1) {
    printf("Escolha o atributo para comparar:\n");
    printf("%s1 - Populacao\n", (escolhido1 == 1) ? "[ESCOLHIDO] " : "");
    printf("%s2 - Area\n", (escolhido1 == 2) ? "[ESCOLHIDO] " : "");
    printf("%s3 - PIB\n", (escolhido1 == 3) ? "[ESCOLHIDO] " : "");
    printf("%s4 - Numero de Pontos Turisticos\n", (escolhido1 == 4) ? "[ESCOLHIDO] " : "");
    printf("%s5 - Densidade Demografica\n", (escolhido1 == 5) ? "[ESCOLHIDO] " : "");
    printf("%s6 - PIB per Capita\n", (escolhido1 == 6) ? "[ESCOLHIDO] " : "");
    printf("Digite sua escolha: ");
}

// Função para obter o valor do atributo escolhido para uma carta
float obter_valor_atributo(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return (float)carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return (float)carta.pontos_turisticos;
        case 5: return carta.densidade_demografica;
        case 6: return carta.pib_per_capita;
        default: return -1; // Indica um erro
    }
}

// Função para obter o nome do atributo escolhido
const char* obter_nome_atributo(int atributo) {
    switch (atributo) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Numero de Pontos Turisticos";
        case 5: return "Densidade Demografica";
        case 6: return "PIB per Capita";
        default: return "Atributo Desconhecido";
    }
}

int main() {
    // Declaração e inicialização das cartas (agora representando países)
    Carta pais1 = {"Brasil", 214000000, 8516000.0, 1.92, 13, 25.13, 8970.0};
    Carta pais2 = {"Argentina", 45000000, 2780000.0, 0.49, 9, 16.19, 10890.0};

    int atributo1, atributo2;

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    exibir_menu(0); // Nenhum atributo escolhido ainda
    scanf("%d", &atributo1);

    // Validação do primeiro atributo
    if (atributo1 < 1 || atributo1 > 6) {
        printf("Opcao invalida para o primeiro atributo. Saindo.\n");
        return 1;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar:\n");
    exibir_menu(atributo1); // Exclui o primeiro atributo do menu
    scanf("%d", &atributo2);

    // Validação do segundo atributo e se é diferente do primeiro
    if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
        printf("Opcao invalida para o segundo atributo (deve ser diferente do primeiro). Saindo.\n");
        return 1;
    }

    // Obtenção dos valores dos atributos para cada país
    float valor1_atributo1 = obter_valor_atributo(pais1, atributo1);
    float valor2_atributo1 = obter_valor_atributo(pais2, atributo1);
    float valor1_atributo2 = obter_valor_atributo(pais1, atributo2);
    float valor2_atributo2 = obter_valor_atributo(pais2, atributo2);

    // Obtenção dos nomes dos atributos
    const char* nome_atributo1 = obter_nome_atributo(atributo1);
    const char* nome_atributo2 = obter_nome_atributo(atributo2);

    // Lógica de comparação e cálculo da pontuação
    int pontuacao1 = 0;
    int pontuacao2 = 0;

    // Comparação do primeiro atributo
    printf("\nComparacao por %s:\n", nome_atributo1);
    printf("%s: %.2f\n", pais1.nome_pais, valor1_atributo1);
    printf("%s: %.2f\n", pais2.nome_pais, valor2_atributo1);
    if ((atributo1 == 5) ? (valor1_atributo1 < valor2_atributo1) : (valor1_atributo1 > valor2_atributo1)) {
        printf("%s venceu em %s!\n", pais1.nome_pais, nome_atributo1);
        pontuacao1++;
    } else if ((atributo1 == 5) ? (valor2_atributo1 < valor1_atributo1) : (valor2_atributo1 > valor1_atributo1)) {
        printf("%s venceu em %s!\n", pais2.nome_pais, nome_atributo1);
        pontuacao2++;
    } else {
        printf("Empate em %s!\n", nome_atributo1);
    }

    // Comparação do segundo atributo
    printf("\nComparacao por %s:\n", nome_atributo2);
    printf("%s: %.2f\n", pais1.nome_pais, valor1_atributo2);
    printf("%s: %.2f\n", pais2.nome_pais, valor2_atributo2);
    if ((atributo2 == 5) ? (valor1_atributo2 < valor2_atributo2) : (valor1_atributo2 > valor2_atributo2)) {
        printf("%s venceu em %s!\n", pais1.nome_pais, nome_atributo2);
        pontuacao1++;
    } else if ((atributo2 == 5) ? (valor2_atributo2 < valor1_atributo2) : (valor2_atributo2 > valor1_atributo2)) {
        printf("%s venceu em %s!\n", pais2.nome_pais, nome_atributo2);
        pontuacao2++;
    } else {
        printf("Empate em %s!\n", nome_atributo2);
    }

    // Exibição do resultado final
    printf("\n--- Resultado Final ---\n");
    printf("Pontuacao %s: %d\n", pais1.nome_pais, pontuacao1);
    printf("Pontuacao %s: %d\n", pais2.nome_pais, pontuacao2);

    printf("Vencedor: ");
    (pontuacao1 > pontuacao2) ? printf("%s!\n", pais1.nome_pais) :
    (pontuacao2 > pontuacao1) ? printf("%s!\n", pais2.nome_pais) :
    printf("Empate!\n");

    return 0;
}








