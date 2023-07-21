// Escreva um programa em C em que seja lido o raio de um círculo impressa a seguinte saída:
// a) Perímetro; b) Área.

#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    int r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%d", &r);

    // a)
    printf("Perimetro: %.2f\n", 2 * PI * r);
    // b)
    printf("Area: %.2f\n", PI * pow(r, 2));

    return 0;
}