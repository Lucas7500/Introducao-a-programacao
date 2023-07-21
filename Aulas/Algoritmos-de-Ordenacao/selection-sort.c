#include <stdio.h>

void selectionSort(int[], int);

int main()
{
    int vet[] = {-1, 5, 17, -10, 9, 100, 45, 54, 67};
    int tamVet = sizeof(vet) / sizeof(vet[0]);
    int element;

    for (int i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    selectionSort(vet, tamVet);

    for (int i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }
}

void selectionSort(int vet[], int tamVet)
{
    int aux, menor;

    for (int i = 0; i < tamVet; i++)
    {
        menor = i;

        for (int j = i + 1; j < tamVet; j++)
        {
            if (vet[j] < vet[menor])
            {
                menor = j;
            }
        }

        aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;
    }
}