// Escreva um programa em C que defina 2 vetores A e B de 10 elementos inteiros.
// Atribua valores aos vetores A e B diretamente no código (sem uso de qualquer instrução de leitura de valores do teclado).
// Em seguida, compute a união dos vetores A e B, conforme Teoria dos Conjuntos, e inclua o resultado no vetor U.
// Imprimir o conteúdo dos vetores A, B e U. (Obs.: A união B significa tomar todos os elementos de A e de B, tal
// que os repetidos figurem uma única vez.).
// Testar com cada um dos exemplos abaixo.

// Exemplo 1:
// Vetor A = {1, 2, 4, 2, 5}
// Vetor B = {2, 3, 4, 1}
// Vetor U = {1, 2, 4, 5, 3}

// Exemplo 2:
// Vetor A = {1, 2, 3, 2}
// Vetor B = {4, 5, 6, 5}
// Vetor U = {1, 2, 3, 4, 5, 6}

// Exemplo 3:
// Vetor A = {1, 2, 2}
// Vetor B = {30, 1, 30, 1}
// Vetor U = {1, 2, 30}

// Nota: 2.5/2.5

#include <stdio.h>

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int sizeU = sizeA + sizeB;

    int U[sizeU], tamU = 0;

    int repeat = 0;

    for (int i = 0; i < sizeA; i++)
    {
        repeat = 0;

        for (int k = 0; k < tamU; k++)
        {
            if (A[i] == U[k])
            {
                repeat = 1;
                break;
            }
        }

        if (!repeat)
        {
            U[tamU] = A[i];
            tamU++;
        }
    }

    for (int i = 0; i < sizeB; i++)
    {
        repeat = 0;

        for (int k = 0; k < tamU; k++)
        {
            if (B[i] == U[k])
            {
                repeat = 1;
                break;
            }
        }

        if (!repeat)
        {
            U[tamU] = B[i];
            tamU++;
        }
    }

    printf("Vetor A = ");

    for (int i = 0; i < sizeA; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    printf("Vetor B = ");

    for (int i = 0; i < sizeB; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n");

    printf("Vetor U = ");

    for (int i = 0; i < tamU; i++)
    {
        printf("%d ", U[i]);
    }

    return 0;
}
