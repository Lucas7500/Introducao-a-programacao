// Escreva um programa em C em que sejam lidos quatro números inteiros e imprima a média ponderada deles,
// sabendo-se que os pesos são, respectivamente: 1, 2, 3 e 4.

#include <stdio.h>

int main()
{
    int nums[4];
    int sum = 0;
    float result;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &nums[i]);

        nums[i] *= (i + 1);

        sum += nums[i];
    }

    result = sum / 10.0;

    printf("%.2f\n", result);
}
