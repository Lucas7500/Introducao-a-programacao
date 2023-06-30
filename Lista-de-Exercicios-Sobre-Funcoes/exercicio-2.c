// 2. Escreva um programa em C que implemente e chame uma função que receba dois números inteiros positivos
// como argumento e retorne a soma dos N números inteiros existentes entre eles.

#include <stdio.h>

int somaNInteiros(int, int);

int main()
{
    int num1, num2;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    printf("A soma dos N inteiros entre %d e %d eh: %d\n", num1, num2, somaNInteiros(num1, num2));

    return 0;
}

int somaNInteiros(int a, int b)
{
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        sum += i;
    }

    return sum;
}
