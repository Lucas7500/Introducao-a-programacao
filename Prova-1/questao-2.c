// Escreva um programa em C que leia três números inteiros diferentes, identifique e imprima o maior e o menor valor.

// Exemplo 1:
// Entrada:
// 1
// 2
// -3
// Saída:
// -3
// 2

// Exemplo 2:
// Entrada:
// 12
// 10
// 30
// Saída:
// 10
// 30

// Nota: 3.0/3.0

#include <stdio.h>

int main()
{
    int num1, num2, num3, maior, menor;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        maior = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        maior = num2;
    }
    else
    {
        maior = num3;
    }

    if (num1 < num2 && num1 < num3)
    {
        menor = num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        menor = num2;
    }
    else
    {
        menor = num3;
    }

    printf("%d\n%d", menor, maior);

    return 0;
}
