#include <stdio.h>
#include <stdlib.h>

#define MAX_LIN 15
#define MAX_COL 15

int main()
{
    int mat[MAX_LIN][MAX_COL];
    int l, c, valor = 1, soma = 0;

    for (l = 0; l < MAX_LIN; l++)
    {
        for (c = 0; c < MAX_COL; c++)
        {
            mat[l][c] = valor++;
        } // Fim for l
    }     // Fim for c

    // Imprimir conteúdo da matriz
    for (l = 0; l < MAX_LIN; l++)
    {
        for (c = 0; c < MAX_COL; c++)
        {
            printf("%4d", mat[l][c]);
            if (l == c)
                soma += mat[l][c];
        } // Fim for l
        printf("\n");
    } // Fim for c

    printf("Soma dos valores sobre diag. princ.: ");
    printf("%d", soma);
}
