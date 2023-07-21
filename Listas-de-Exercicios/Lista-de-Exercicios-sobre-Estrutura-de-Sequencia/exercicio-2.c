// Escreva um programa em C em que seja lido um valor decimal, imprima-o, separe a parte decimal da parte inteiras e
// as imprima separadamente.

#include <stdio.h>

int main()
{
    int inteiro;
    float decimal;

    printf("Digite um valor decimal: ");
    scanf("%f", &decimal);

    inteiro = decimal;

    printf("Parte inteira: %i\n", inteiro);
    printf("Parte decimal: %.2f", decimal - inteiro);
    return 0;
}
