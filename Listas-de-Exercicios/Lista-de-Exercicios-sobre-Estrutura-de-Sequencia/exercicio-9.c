//  Escreva um programa em C em que sejam lidas os dados necessários para imprimir-se a área de um trapézio.

#include <stdio.h>

int main()
{
    int B, b, h;

    printf("Digite o valor da base maior: ");
    scanf("%d", &B);

    do
    {
        printf("Digite o valor da base menor: ");
        scanf("%d", &b);
    } while (b > B);

    printf("Digite o valor da altura: ");
    scanf("%d", &h);

    printf("A area do trapezio e: %.2f", (B + b) * h / 2.00);

    return 0;
}