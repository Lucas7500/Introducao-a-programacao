#include <stdio.h>

int main()
{
    int num, ordenado = 1;

    printf("Digite quantos numeros serao lidos: ");
    scanf("%d", &num);

    int nums[num];

    for (int i = 0; i < num; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%i", &nums[i]);

        if (nums[i] < nums[i - 1] && i > 0)
        {
            ordenado = 0;
            break;
        }
    }

    if (ordenado)
    {
        printf("Esta em ordem crescente\n");
    }
    else
    {
        printf("Nao esta em ordem crescente\n");
    }

    return 0;
}
