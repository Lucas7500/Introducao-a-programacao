//  Escreva um programa em C em que seja lido um valor decimal e seja impresso esse valor com reajuste de 10%

#include <stdio.h>

int main()
{
    float num;

    printf("Digite um valor decimal: ");
    scanf("%f", &num);

    printf("%.2f\n", num * 1.1);

    return 0;
}