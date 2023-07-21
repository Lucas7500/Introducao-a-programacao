#include <stdio.h>  // printf, scanf
#include <stdlib.h> // srand, rand, system
#define MAX 100

int main()
{
    int i, n;
    int vetBits[MAX];
    int resto, quantBits = 0;
    printf("Numero inteiro (base 10): ");
    scanf("%d", &n);

    i = 0;
    while (n > 0)
    {
        resto = n % 2;
        vetBits[i] = resto;
        quantBits++;
        i++;
        n = n / 2;
    }

    printf("\nNumero binario (base 2):\n");
    for (i = quantBits - 1; i >= 0; i--)
    {
        printf("%d", vetBits[i]);
    }
}
