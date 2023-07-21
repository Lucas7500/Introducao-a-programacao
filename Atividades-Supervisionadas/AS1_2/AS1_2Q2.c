// Calcular valor da soma de elementos
// Escreva um programa em C que o usuário entre com um valor inteiro N e imprima o resultado da seguinte
// soma:
// S = 1 / N  + 2 / N - 1 + 3 / N - 2 + ... + N - 1 / 2 + N
// (Por exemplo, se o valor de N for 5 o resultado da soma deve ser 8,7

// Nota: 1.66/1.66

#include <stdio.h>

int main(void)
{
    float N, sum = 0;

    printf("Digite o valor de N: ");
    scanf("%f", &N);

    for (int i = 0; i < N; i++)
    {
        sum += (1 + i) / (N - i);
    }

    printf("O resultado da soma eh: %.2f\n", sum);

    return 0;
}