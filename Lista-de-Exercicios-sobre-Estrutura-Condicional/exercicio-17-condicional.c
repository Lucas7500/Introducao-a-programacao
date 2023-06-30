// Escreva um programa em C que leia três números inteiros diferentes, identifique e imprima o maior e o menor valor

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Digite 3 inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Maior numero: %d\n", num1);

        if (num2 > num3)
        {
            printf("Menor numero: %d\n", num3);
        }
        else
        {
            printf("Menor numero: %d\n", num2);
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Maior numero: %d\n", num2);

        if (num1 > num3)
        {
            printf("Menor numero: %d\n", num3);
        }
        else
        {
            printf("Menor numero: %d\n", num1);
        }
    }
    else
    {
        printf("Maior numero: %d\n", num3);

        if (num1 > num2)
        {
            printf("Menor numero: %d\n", num2);
        }
        else
        {
            printf("Menor numero: %d\n", num1);
        }
    }

    return 0;
}