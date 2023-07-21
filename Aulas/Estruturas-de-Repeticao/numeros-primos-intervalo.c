#include <stdio.h>

int main()
{
    int limInf, limSup, contDiv;

    printf("Digite o limite inferior: ");
    scanf("%d", &limInf);

    printf("Digite o limite superior: ");
    scanf("%d", &limSup);

    for (int i = limInf; i <= limSup; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                contDiv++;
            }
        }

        if (contDiv == 2)
        {
            printf("%i ", i);
        }

        contDiv = 0;
    }

    return 0;
}
