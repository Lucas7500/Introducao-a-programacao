// 2. Escreva um programa em C que armazene 7 números inteiros em um vetor NUM e imprima uma listagem
// numerada contendo o número e uma das mensagens: PAR ou ÍMPAR. Por exemplo:
// RELAÇÃO DOS NÚMEROS
// 1. 114 (PAR)
// 2. 7 (ÍMPAR)

#include <stdio.h>
#define ARRAY_LENGTH 7

int main(void)
{
    int NUM[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("NUM[%d]: ", i);
        scanf("%d", &NUM[i]);
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        NUM[i] % 2 == 0 ? printf("%d (PAR)\n", NUM[i]) : printf("%d (IMPAR)\n", NUM[i]);
    }

    return 0;
}