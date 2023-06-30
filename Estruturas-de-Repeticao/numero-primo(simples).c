#include <stdio.h>

int main()
{
    int num, countDiv = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            countDiv++;
        }
    }

    if (countDiv == 2)
    {
        printf("O numero eh primo\n");
    }
    else
    {
        printf("O numero nao eh primo\n");
    }

    return 0;
}
