// Escreva um programa em C em que seja declarada uma matriz bidimensional 5 x 5, do tipo float e armazenado,
// no próprio código, o conteúdo da matriz. Os valores da última coluna serão alterados pela função calcularMedias.
// O protótipo deve ser especificado antes da função main.

// A função calcularMedias receberá a matriz, a quantidade de linhas, a quantidade de colunas e preencherá
// a última coluna de cada linha com a média aritmética dos valores que se encontram nas primeiras quatro colunas.

// Na função main, deve-se imprimir a matriz antes e depois do cálculo das médias pela função calcularMedias.

// Exemplo 1:
// Matriz s/ cálculo das médias
// 9.6  10.0 7.0 10.0   | 0.0
// 8.0  0.0  7.0  8.0   | 0.0
// 9.0  8.5  7.5 10.0   | 0.0

// Matriz c/ cálculo das médias
// 9.6 10.0 7.0 10.0 | 9.2
// 8.0 0.0  7.0 8.0  | 5.8
// 9.0 8.5  7.5 10.0 | 8.8

// Exemplo 2:
// Matriz s/ cálculo das médias
// 9.6  10.0 7.0 10.0   | 0.0
// 8.0  0.0  7.0 8.0    | 0.0
// 9.0  8.5  7.5 10.0   | 0.0
// 7.1  4.2  8.3 1.6    | 0.0
// 7.5  5.8  5.3 8.9    | 0.0

// Matriz c/ cálculo das médias
// 9.6  10.0 7.0 10.0   | 9.2
// 8.0  0.0  7.0 8.0    | 5.8
// 9.0  8.5  7.5 10.0   | 8.8
// 7.1  4.2  8.3 1.6    | 5.3
// 7.5  5.8  5.3 8.9    | 6.9

// Nota: 2.5/2.5

#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5

void calcularMedias(float[][COLUNAS], int, int);

int main()
{
    float mat[LINHAS][COLUNAS] = {{9.6, 10.0, 7.0, 10.0, 0.0},
                                  {8.0, 0.0, 7.0, 8.0, 0.0},
                                  {9.0, 8.5, 7.5, 10.0, 0.0},
                                  {7.1, 4.2, 8.3, 1.6, 0.0},
                                  {7.5, 5.8, 5.3, 8.9, 0.0}};

    printf("Matriz s/ calculo das medias:\n");

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%4.1f | ", mat[i][j]);
        }

        printf("\n");
    }

    calcularMedias(mat, LINHAS, COLUNAS);

    printf("\nMatriz c/ calculo das medias:\n");

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%4.1f | ", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}

void calcularMedias(float mat[][COLUNAS], int l, int c)
{
    float sum;

    for (int i = 0; i < l; i++)
    {
        sum = 0;

        for (int j = 0; j < c; j++)
        {
            if (j == 4)
            {
                mat[i][j] = sum / 4;
            }
            else
            {
                sum += mat[i][j];
            }
        }
    }
}
