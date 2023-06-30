// Escreva um programa em C que leia um número inteiro e imprima o total de vezes em que ele é divisível por 2 e 3.

// Exemplo 1:
// Entrada: 20
// Saída: 1

// Exemplo 2:
// Entrada: 13
// Saída: 0

// Exemplo 3:
// Entrada: 18
// Saída: 2

// Nota: 2.5/2.5

#include <stdio.h>

int main()
{
    int num, value;
    value = 0;

    scanf("%d", &num);

    if (num % 2 == 0)
    {
        value += 1;
    }

    if (num % 3 == 0)
    {
        value += 1;
    }

    printf("%d", value);

    return 0;
}