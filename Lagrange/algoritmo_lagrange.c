#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void alocarValorDeX(float **valoresX, int pontos)
{
    *valoresX = (float *)realloc(*valoresX, pontos * sizeof(float));
}

void alocarValorDeFX(float **valoresFX, int pontos)
{
    *valoresFX = (float *)realloc(*valoresFX, pontos * sizeof(float));
}

void receberValores(float *valoresX, float *valoresFX, int pontos)
{
    int cont = 0;
    for (cont = 0; cont < pontos; cont++)
    {
        printf("\n Digite o valor da posicao %i para X: ", cont);
        scanf("%f", valoresX + cont);

        printf("\nDigite os valores da posicao %i para F(x): ", cont);
        scanf("%f", valoresFX + cont);
    }
}

float calculoDeLagrange(float calcularX, float *valoresX, float *valoresFX, int pontos)
{
    float Px = 0, Li;
    int i, j;

    for (i = 0; i < pontos; i++)
    {
        Li = 1;
        for (j = 0; j < pontos; j++)
        {
            if (j != i)
            {
                Li = Li * (calcularX - *(valoresX + j)) / (*(valoresX + i) - *(valoresX + j));
            }
        }
        Px = Px + Li * (*(valoresFX + i));
    }
    return Px;
}

int main()
{
    int pontos, n, grau, cont, i, j;
    float calcularX, resultado;
    char resp;

    // Inicializa��o de ponteiros
    float *valoresX = NULL;
    float *valoresFX = NULL;

    printf("Digite o grau da funcao que deseja obter: ");
    scanf("%i", &grau);

    // Obtendo o n�mero de pontos a partir do grau indicado
    pontos = grau + 1;

    // Aloca��o do tamanho solicitado
    alocarValorDeX(&valoresX, pontos);
    alocarValorDeFX(&valoresFX, pontos);

    receberValores(valoresX, valoresFX, pontos);

    do
    {
        printf("\nDigite o valor de F(x) que deseja calcular: ");
        scanf("%f", &calcularX);

        resultado = calculoDeLagrange(calcularX, valoresX, valoresFX, pontos);
        fflush(stdin);
        printf("\nO calculo da interpolacao de lagrange de f(%.4f) eh: %.4f", calcularX, resultado);

        printf("\nDeseja calcular outro valor (s/n)? ");
        scanf("%c", &resp);
    } while (resp == 's' || resp == 'S');

    // Liberando a mem�ria
    free(valoresX);
    free(valoresFX);

    system("pause");
}
