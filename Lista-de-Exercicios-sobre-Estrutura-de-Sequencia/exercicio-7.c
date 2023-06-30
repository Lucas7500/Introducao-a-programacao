//  Escreva um programa em C em que sejam lidas a base e altura de um retângulo e seja impressa a seguinte saída:
// a) Perímetro; b) Área; c) Diagonal

#include <stdio.h>
#include <math.h>

int main()
{
    int b, h;

    printf("Digite o valor da base do retangulo: ");
    scanf("%d", &b);

    printf("Digite o valor da altura do retangulo: ");
    scanf("%d", &h);

    // a)
    printf("Perimetro: %d\n", (b + h) * 2);
    // b)
    printf("Area: %d\n", b * h);
    // c)
    printf("Diagonal: %.2f", sqrt(pow(b, 2.00) + pow(h, 2.00)));
}