// Escreva um programa em C em que sejam lidos quatro números inteiros e imprima a média ponderada deles,
// sabendo-se que os pesos são, respectivamente: 1, 2, 3 e 4.

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Escreva 4 numeros inteiros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    float resultado = (num1 * 1 + num2 * 2 + num3 * 3 + num4 * 4) / 10.0;

    printf("A media ponderada e: %.2f", resultado);

    return 0;
}
