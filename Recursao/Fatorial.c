#include <stdio.h>

long int factorial(int x);

int main()
{

    long int factorialN;
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    factorialN = factorial(n);
    printf("Fatorial de %d: %ld\n", n, factorialN);

    return 0;
}

long int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }

    return x * factorial(x - 1);
}
