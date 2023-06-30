#include <stdio.h>

int main()
{
    int lim, num, sum;

    sum = 0;

    printf("Quantos numeros serao lidos? ");
    scanf("%i", &lim);

    for (int i = 0; i < lim; i++)
    {
        printf("Numero %i: ", i + 1);
        scanf("%i", &num);
        sum += num;
    }

    printf("A soma dos numeros digitados eh: %i\n", sum);

    return 0;
}