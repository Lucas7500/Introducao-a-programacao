// Escreva um programa em C em que sejam lidos dois valores, atribuídos às variáveis A e B, imprima-as, troque entre si
// os valores e imprima-as novamente.

#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("%i %i\n", a, b);

    return 0;
}
