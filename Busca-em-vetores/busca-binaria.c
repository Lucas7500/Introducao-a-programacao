#include <stdio.h>

int binarySearch(int[], int, int, int);

int main()
{
    int vet[] = {-10, -1, 5, 9, 17, 45, 54, 67, 100};
    int tamVet = sizeof(vet) / sizeof(vet[0]);
    int element;

    for (int i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\nQual elemento voce quer procurar no vetor? ");
    scanf("%d", &element);

    if (binarySearch(vet, element, 0, tamVet - 1))
    {
        printf("O elemento esta no vetor");
    }
    else
    {
        printf("O elemento nao esta no vetor");
    }

    return 0;
}

int binarySearch(int vet[], int element, int limInf, int limSup)
{
    int termoMedio;

    while (1)
    {
        termoMedio = (limInf + limSup) / 2;

        if (element == vet[termoMedio])
        {
            return 1;
        }
        else if (element < vet[termoMedio])
        {
            limSup = termoMedio - 1;
        }
        else
        {
            limInf = termoMedio + 1;
        }

        if (limInf == limSup)
        {
            return 0;
        }
    }
}
