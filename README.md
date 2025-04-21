# Super Trunfo de Cidades (Nível Aventureiro - Interativo)

Este projeto implementa um jogo interativo de Super Trunfo no terminal, onde duas "cartas" representando cidades são comparadas com base em um atributo escolhido pelo jogador através de um menu. Este nível aventureiro adiciona interatividade e lógica de comparação mais complexa ao jogo.

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

1.  Ao executar o programa, você será solicitado a inserir as informações para a "Carta 1" (primeira cidade), incluindo:
    * Estado (sigla com 2 caracteres, ex: SP)
    * Código da Carta (código com 3 caracteres, ex: A01)
    * Nome da Cidade
    * População
    * Área (em km²)
    * PIB (em bilhões de reais)
    * Número de Pontos Turísticos

2.  Em seguida, você fará o mesmo para a "Carta 2" (segunda cidade).

3.  Após inserir os dados de ambas as cartas, um menu interativo será exibido, permitindo que você escolha qual atributo usar para a comparação:
    ```
    Escolha o atributo para comparar:
    1 - Populacao
    2 - Area
    3 - PIB
    4 - Numero de Pontos Turisticos
    5 - Densidade Demografica
    6 - PIB per Capita
    0 - Sair
    Digite sua escolha:
    ```

4.  Digite o número correspondente ao atributo que você deseja usar para comparar as duas cidades e pressione Enter.

5.  O programa exibirá os valores do atributo escolhido para cada cidade e declarará qual "Carta" venceu a rodada, seguindo as seguintes regras:
    * **Regra Geral:** Vence a carta com o maior valor no atributo escolhido.
    * **Regra Especial (Densidade Demográfica):** Vence a carta com o **menor** valor de densidade demográfica.
    * **Empate:** Se os valores do atributo forem iguais para ambas as cartas, será exibida a mensagem "Empate!".

6.  O menu será exibido novamente após cada comparação, permitindo que você compare as mesmas cartas usando um atributo diferente ou escolha a opção **0 - Sair** para encerrar o programa.

## Atributos Disponíveis para Comparação

1.  **População:** Número total de habitantes da cidade.
2.  **Área:** Extensão territorial da cidade em quilômetros quadrados.
3.  **PIB:** Produto Interno Bruto da cidade em bilhões de reais.
4.  **Número de Pontos Turísticos:** Quantidade de locais de interesse turístico na cidade.
5.  **Densidade Demográfica:** Número de habitantes por quilômetro quadrado (calculada como População / Área). **Menor valor vence.**
6.  **PIB per Capita:** PIB total em reais dividido pela população da cidade.

## Observações

* Este nível do Super Trunfo implementa um menu interativo usando a estrutura `switch` para permitir a escolha do atributo de comparação.
* A lógica de comparação utiliza estruturas de decisão `if-else` para determinar o vencedor, considerando a regra especial para a Densidade Demográfica.
* O programa continua permitindo comparações até que o usuário escolha a opção de sair.
* O tratamento de entradas inválidas no menu é básico (exibe uma mensagem de erro e solicita uma nova entrada). Melhorias podem ser implementadas em níveis futuros.

Divirta-se jogando o Super Trunfo de Cidades!

