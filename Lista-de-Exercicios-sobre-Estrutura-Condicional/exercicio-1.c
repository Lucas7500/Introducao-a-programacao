// Escreva um programa em C que leia um número e imprima se ele é positivo, negativo ou nulo

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("O numero eh positivo\n");
    }
    else if (num < 0)
    {
        printf("O numero eh negativo\n");
    }
    else
    {
        printf("O numero eh nulo\n");
    }

    return 0;
}