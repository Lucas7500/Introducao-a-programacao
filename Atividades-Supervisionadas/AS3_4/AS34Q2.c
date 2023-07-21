// Diferença entre dois vetores
// Escreva um programa em C que defina 2 vetores A e B de 5 elementos inteiros, cujos valores devem
// ser lidos, e calcule e atribua ao vetor D a diferença dos vetores A e B. Deve-se imprimir o conteúdo
// dos vetores A, B e D.
// (Nota: A - B significa tomar todos os elementos de A que não estão contidos em B.)
// Por exemplo, para o vetor A com conteúdo 9 11 13 14 13 9 e para o vetor B com conteúdo 8 9 10 11
// 10 12, o vetor D receberá o seguinte conteúdo: 13 14

// Nota: 2.5/2.5

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int A[SIZE], B[SIZE], D[SIZE] = {0}, not_unique, D_size = 0, repeat = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("Valor de B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        not_unique = 0;
        repeat = 0;

        for (int j = 0; j < SIZE; j++)
        {
            if (A[i] == B[j])
            {
                not_unique++;
                break;
            }
        }

        if (!not_unique)
        {
            for (int k = 0; k < D_size; k++)
            {
                if (A[i] == D[k])
                {
                    repeat++;
                    break;
                }
            }

            if (!repeat)
            {
                D[D_size] = A[i];
                D_size++;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("A[%d]: %d\n", i, A[i]);
    }

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("B[%d]: %d\n", i, B[i]);
    }

    printf("\n");

    for (int i = 0; i < D_size; i++)
    {
        printf("D[%d]: %d\n", i, D[i]);
    }

    return 0;
}