#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 10
#define COLUNA 10

int main()
{
    int mat[LINHA][COLUNA];

    srand(time(NULL));

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            mat[i][j] = (rand() % 1000) + 1;
        }
    }

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("%4d ", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}
