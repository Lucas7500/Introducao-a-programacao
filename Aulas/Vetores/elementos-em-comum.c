#include <stdio.h>

int main()
{
    int vetor1[5], vetor2[5];
    int i, j, umEmComum;

    for (i = 0; i < 5; i++)
    {
        printf("Entre com o valor da posicao %d para vetor 1: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Entre com o valor da posicao %d para vetor 2: ", i);
        scanf("%d", &vetor2[i]);
    }

    umEmComum = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                umEmComum = 1;
                printf("\nPosicao %d do vetor 1 igual a posicao %d do vetor 2.\n", i, j);
            }
        }
    }

    if (!umEmComum)
    {
        printf("Nenhum elemento em comum\n");
    }

    return 0;
}
