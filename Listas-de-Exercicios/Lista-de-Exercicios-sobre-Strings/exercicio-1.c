// 1. Escreva um programa em C que calcula o comprimento de uma string (não use a função strlen).

#include <stdio.h>

#define MAX 50

int main()
{
    char string[MAX];
    int length = 0;

    printf("Digite uma string: ");
    scanf("%[^\n]%*c", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("O comprimento da string eh: %d %ld\n", length);

    return 0;
}
