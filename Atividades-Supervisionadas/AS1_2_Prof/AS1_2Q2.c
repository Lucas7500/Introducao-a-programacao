// Calcular valor da soma de elementos
// Escreva um programa em C que o usuário entre com um valor inteiro N e imprima o resultado da seguinte
// soma:
// S = 1 / N  + 2 / N - 1 + 3 / N - 2 + ... + N - 1 / 2 + N
// (Por exemplo, se o valor de N for 5 o resultado da soma deve ser 8,7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float s = 0;
    int den;
    int i;

    printf("Valor de N: ");
    scanf("%d", &n);

    den = n;

    for (i = 1; i <= n; i++)
    {
        s += (float)i / den;
        den--;
    }

    printf("S = %.1f", s);
}
