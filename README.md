# Super Trunfo de Países (Nível Mestre - Comparações Avançadas)

Este é o desafio final do Super Trunfo! O programa permite que o jogador escolha dois atributos diferentes para comparar duas cartas de países, implementando menus dinâmicos e uma lógica de comparação sofisticada.

## Como Compilar e Executar

1.  **Pré-requisitos:** Certifique-se de ter um compilador C (como o GCC) instalado em seu sistema.

2.  **Compilação:**
    Abra um terminal ou prompt de comando, navegue até o diretório onde você salvou o arquivo do código-fonte (`super_trunfo.c`) e execute o seguinte comando para compilar:

    ```bash
    gcc super_trunfo.c -o super_trunfo
    ```

3.  **Execução:**
    Após a compilação bem-sucedida, execute o programa com o seguinte comando:

    ```bash
    ./super_trunfo
    ```

## Como Jogar

1.  Ao executar o programa, duas cartas de países (Brasil e Argentina) serão carregadas com seus respectivos atributos.

2.  O programa exibirá um menu para que você escolha o **primeiro** atributo para comparar:
    ```
    Escolha o atributo para comparar:
    1 - Populacao
    2 - Area
    3 - PIB
    4 - Numero de Pontos Turisticos
    5 - Densidade Demografica
    6 - PIB per Capita
    Digite sua escolha:
    ```

3.  Digite o número correspondente ao primeiro atributo desejado e pressione Enter.

4.  Em seguida, um novo menu será exibido para que você escolha o **segundo** atributo para comparar. O primeiro atributo escolhido estará marcado como "[ESCOLHIDO]" e não deve ser selecionado novamente.

5.  Digite o número correspondente ao segundo atributo (diferente do primeiro) e pressione Enter.

6.  O programa então realizará as seguintes etapas:
    * Comparará os dois países individualmente para cada um dos atributos escolhidos. A regra geral é que o maior valor vence, exceto para a Densidade Demográfica, onde o menor valor vence.
    * Exibirá o resultado de cada comparação de atributo, indicando o vencedor em cada um.
    * Calculará uma "pontuação" para cada país, contando quantas vezes cada um venceu nos atributos individuais.
    * Finalmente, declarará o vencedor geral com base na maior pontuação. Em caso de pontuação igual, será declarado um empate.

## Atributos Disponíveis para Comparação

1.  **População:** Número total de habitantes do país.
2.  **Área:** Extensão territorial do país em quilômetros quadrados.
3.  **PIB:** Produto Interno Bruto do país.
4.  **Número de Pontos Turísticos:** Quantidade de locais de interesse turístico no país.
5.  **Densidade Demográfica:** Número de habitantes por quilômetro quadrado (População / Área). **Menor valor vence.**
6.  **PIB per Capita:** PIB total dividido pela população do país.

## Observações

* Este nível final do Super Trunfo permite a escolha de dois atributos para uma comparação mais complexa.
* O menu dinâmico indica o primeiro atributo escolhido para auxiliar na seleção do segundo.
* O resultado é determinado pela "soma" de vitórias nos atributos individuais.
* O tratamento de entradas inválidas nos menus é básico e pode ser aprimorado.

Parabéns por chegar ao nível mestre do Super Trunfo! Divirta-se com as comparações avançadas!