#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand, rand

#define MAX_LIN 5
#define MAX_COL 10

void preencherMatriz(int[][MAX_COL], int, int);
void mostrarMatriz(int[][MAX_COL], int, int);

int main()
{
    int matInt[MAX_LIN][MAX_COL];

    preencherMatriz(matInt, MAX_LIN, MAX_COL);
    mostrarMatriz(matInt, MAX_LIN, MAX_COL);

    system("pause > nul");
    return 0;
}

void preencherMatriz(int mat[][MAX_COL], int maxLin, int maxCol)
{
    int l, c;

    srand(time(NULL));

    for (l = 0; l < maxLin; l++)
    {
        for (c = 0; c < maxCol; c++)
        {
            mat[l][c] = rand() % 200;
        }
    }
}

void mostrarMatriz(int mat[][MAX_COL], int maxLin, int maxCol)
{
    int l, c;

    printf("Conteudo da matriz:\n");
    for (l = 0; l < maxLin; l++)
    {
        for (c = 0; c < maxCol; c++)
        {
            printf("%4d", mat[l][c]);
        }
        printf("\n");
    }
}
