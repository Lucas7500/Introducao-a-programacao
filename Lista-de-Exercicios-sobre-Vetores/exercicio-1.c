// 1. Escreva um programa em C que armazene números inteiros em um vetor A[50]. Gerar e imprimir o vetor B
// onde cada elemento é o quadrado do elemento na respectiva posição do vetor A.

#include <stdio.h>
#define MAX_VALUE 5

int main(void)
{
    int A[MAX_VALUE];
    int B[MAX_VALUE];

    for (int i = 0; i < MAX_VALUE; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i];
    }

    printf("\n\n");

    for (int i = 0; i < MAX_VALUE; i++)
    {
        printf("B[%d]: %d\n", i, B[i]);
    }

    return 0;
}
