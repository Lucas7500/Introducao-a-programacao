// Escreva um programa em C em que seja lido um número inteiro com três algarismo e imprima os algarismos da
// unidade, dezena e centena separadamente.

#include <stdio.h>

int main()
{
    int number, cent, dez, un;

    printf("Digite um numero: ");
    scanf("%i", &number);

    cent = number / 100 * 100;
    dez = (number % 100) / 10 * 10;
    un = (number % 100) % 10;

    printf("Centena: %i\nDezena: %i\nUnidade: %i\n", cent, dez, un);

    return 0;
}