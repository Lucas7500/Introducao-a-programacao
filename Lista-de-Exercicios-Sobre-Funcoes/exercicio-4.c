// 4. Escreva um programa em C que implemente e chame uma função que calcule e mostre uma tabela do
// volume de uma esfera em função do raio R. O raio deverá variar de 0 a 20cm, de 0.5 em 0.5cm. V = 4/3*π*R3.

#include <stdio.h>
#include <math.h>
#define PI 3.1415

double volumeEsfera(double);

int main()
{
    for (double R = 0; R <= 20; R += 0.5)
    {
        printf("Raio: %.1f | Volume: %lf\n", R, volumeEsfera(R));
    }

    return 0;
}

double volumeEsfera(double R)
{
    return (4 * PI * pow(R, 3)) / 3;
}
