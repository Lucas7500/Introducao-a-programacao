// 1. Imprimir todos os numeros primos em um intervalo
#include <stdio.h>
#include <math.h>

int main()
{
    int num, limInf, limSup, contDiv;

    printf("Digite o limite inferior: ");
    scanf("%d", &limInf);

    printf("Digite o limite superior: ");
    scanf("%d", &limSup);

    for (int i = limInf; i <= limSup; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                contDiv++;
            }
        }

        if (contDiv == 1 && i != 1)
        {
            printf("%i ", i);
        }

        contDiv = 0;
    }

    return 0;
}
