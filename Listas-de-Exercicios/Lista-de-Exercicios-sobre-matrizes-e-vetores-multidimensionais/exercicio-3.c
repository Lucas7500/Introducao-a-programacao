// 3. Escreva um programa em C que leia valores para 2 (duas) matrizes 3 × 3 (ou atribua os valores automaticamente às
// matrizes). Mostre o conteúdo das duas matrizes na tela e então calcule e mostre a soma entre elas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int mat1[3][3], mat2[3][3], soma[3][3];

    printf("    Matriz 1:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat1[i][j] = (rand() % 100) + 1;
            printf("%4d", mat1[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    printf("    Matriz 2:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat2[i][j] = (rand() % 100) + 1;
            printf("%4d", mat2[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    printf("    Soma:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i][j] = mat1[i][j] + mat2[i][j];
            printf("%4d", soma[i][j]);
        }

        printf("\n");
    }

    return 0;
}
