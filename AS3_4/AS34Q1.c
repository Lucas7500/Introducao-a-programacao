// Intersecção de dois vetores
// Escreva um programa em C que defina 2 vetores, A e B de 5 elementos inteiros, cujos valores devem
// ser lidos, e atribua ao vetor I a intersecção dos vetores A e B. Deve-se imprimir o conteúdo dos
// vetores A, B e I. Considere que em cada vetor (A e B) poderá haver valores repetidos.
// (Nota: A ∩ B significa tomar todos os elementos que estão contidos em A e também em B.)
// Exemplo: para o vetor A com conteúdo 13 10 11 9 9 e para o vetor B com conteúdo 8 9 10 11 12 11,
// o vetor I receberá o seguinte conteúdo: 10 11 9

// Nota: 2.5/2.5

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int A[SIZE], B[SIZE], I[SIZE] = {0}, is_intersec, repeat, I_size = 0;

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
        is_intersec = 0;
        repeat = 0;

        for (int j = 0; j < SIZE; j++)
        {
            if (A[i] == B[j])
            {
                is_intersec++;
                break;
            }
        }

        if (is_intersec)
        {
            for (int k = 0; k < I_size; k++)
            {
                if (A[i] == I[k])
                {
                    repeat++;
                }
            }

            if (!repeat)
            {
                I[I_size] = A[i];
                I_size++;
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

    for (int i = 0; i < I_size; i++)
    {
        printf("I[%d]: %d\n", i, I[i]);
    }

    return 0;
}