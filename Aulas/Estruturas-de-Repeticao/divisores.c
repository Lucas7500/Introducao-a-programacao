#include <stdio.h>

int main()
{

    int num, i;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("Divisores: %i\n", i);
        }
    }

    return 0;
}
