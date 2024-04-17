
## Interpolação Polinomial – Forma de Lagrange

Este projeto consiste em desenvolver um programa em linguagem C capaz de descobrir um valor não tabelado de uma função desconhecida através de um conjunto de medidas de x e f(x). Para calcular o valor desejado, será utilizado o método da interpolação polinomial na forma de Lagrange. O programa seguirá as seguintes diretrizes:

1. **Dados Iniciais:**
   - Grau: Grau do polinômio que deseja obter.
   - pontos: grau indicado + 1.
   - valorCalcular ou X: valor a ser calculado.
   - Utilização de ponteiros para receber os valores x e f(x) (Matriz: possui os valores de x e f(x)).
   - Li: variável para armazenar resultados temporários.
   - i e j: índices para percorrer a matriz.

2. **Receber os valores em ponteiros conforme o grau indicado:**
   - Por exemplo, se Grau = 2, devem ser recebidos 3 conjuntos de valores x e f(x).

3. **Algoritmo de Lagrange:**
   - Implementar o algoritmo que calcula o valor da função desconhecida utilizando o método de interpolação polinomial na forma de Lagrange.

Este projeto foi proposto como um desafio na faculdade de engenharia de computação.

## Estrutura do Programa:

O programa será estruturado em funções, com as variáveis sempre sendo locais e passadas como parâmetros quando necessário. Ponteiros e chamadas por referência serão utilizados para manipulação dos dados.

## Execução do Programa:

Para executar o programa, basta compilar o código fonte em C utilizando um compilador compatível e executar o arquivo gerado. Certifique-se de fornecer os valores necessários de acordo com as especificações do programa.