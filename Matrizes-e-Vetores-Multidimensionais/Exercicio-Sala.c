// Escreva um programa em C que declare uma matriz 15x15
// a) Preencha, automaticamente, a matriz com valores de 1 a 225
// b) Imprima o conteudo da matriz
// c) Compute a soma dos valores na diagonal secundária
// d) Compute a soma dos valores na diagonal Principal (Extra)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 15
#define COLUNA 15

int main()
{
    int mat[LINHA][COLUNA];

    // a)
    srand(time(NULL));

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {

            mat[i][j] = (rand() % 1000) + 1;
        }
    }

    // b)
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("%5d", mat[i][j]);
        }

        printf("\n");
    }

    // c) e d)
    int sumDiagSec = 0, sumDiagPrinc = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = COLUNA - 1; j >= 0; j--)
        {
            if (i + j == LINHA - 1)
            {
                sumDiagSec += mat[i][j];
            }

            if (i == j)
            {
                sumDiagPrinc += mat[i][j];
            }
        }
    }

    printf("\nA soma dos valores da diagonal principal eh: %d\n", sumDiagPrinc);
    printf("A soma dos valores da diagonal secundaria eh: %d\n", sumDiagSec);

    return 0;
}