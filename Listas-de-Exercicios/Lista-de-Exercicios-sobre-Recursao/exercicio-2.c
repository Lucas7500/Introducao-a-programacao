// 2. Para calcular e imprimir o valor de fatorial de N.

#include <stdio.h>

long int factorial(int);

int main()
{

    long int factorialN;
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    factorialN = factorial(N);

    printf("Fatorial de %d: %ld\n", N, factorialN);

    return 0;
}

long int factorial(int N)
{
    if (N == 1)
    {
        return 1;
    }

    return N * factorial(N - 1);
}
