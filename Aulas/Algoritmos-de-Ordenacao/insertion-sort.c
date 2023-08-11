#include <stdio.h>

void insertionSort(int[], int);

int main()
{
    int vet[] = {2, 3, 5, 1, 4};
    int tamVet = sizeof(vet) / sizeof(vet[0]);
    int element;

    for (int i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    insertionSort(vet, tamVet);

    for (int i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }
}

void insertionSort(int vet[], int tamVet)
{
    int i, j, aux;

    for (i = 1; i < tamVet; i++)
    {
        aux = vet[i];
        j = i - 1;

        while (j >= 0 && aux < vet[j])
        {
            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = aux;
    }
}