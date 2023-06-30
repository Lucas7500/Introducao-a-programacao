// Escreva um programa em C em que seja lido o preço de uma mercadoria e seja impresso seu valor com desconto de 5%.

#include <stdio.h>

int main()
{
    float num;

    printf("Digite um preco: ");
    scanf("%f", &num);

    printf("%.2f\n", num * 0.95);

    return 0;
}