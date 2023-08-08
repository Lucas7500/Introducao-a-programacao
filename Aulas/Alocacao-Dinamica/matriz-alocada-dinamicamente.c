#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void)
{
    float **Matriz;
    int nLinhas, nColunas, i, j;

    printf("Matriz alocada dinamicamente\n\n");

    printf("Quantas linhas? ");
    scanf("%d", &nLinhas);

    printf("Quantas colunas? ");
    scanf("%d", &nColunas);

    /* Aloca a matriz */
    Matriz = (float **)malloc(nLinhas * sizeof(float *));

    for (i = 0; i < nLinhas; i++) // Aloca??o de colunas para cada linha da matriz
        Matriz[i] = (float *)malloc(nColunas * sizeof(float));

    /* Define os elementos da matriz */
    for (i = 0; i < nLinhas; i++)
        for (j = 0; j < nColunas; j++)
            /*Matriz[i][j] = i * j;*/
            Matriz[i][j] = nColunas * i + j + 1;

    /* Imprime a matriz */
    for (i = 0; i < nLinhas; i++)
    {
        for (j = 0; j < nColunas; j++)
            printf("%.1f\t", Matriz[i][j]);
        printf("\n");
    }

    /* Desaloca a matriz */
    for (i = 0; i < nLinhas; i++)
        free(Matriz[i]);
    free(Matriz);
}
