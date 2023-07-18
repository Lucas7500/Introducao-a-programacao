#include <stdio.h>

void bubbleSort(int[], int);

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

    bubbleSort(vet, tamVet);

    for (int i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }
}

void bubbleSort(int vet[], int tamVet)
{
    int aux;

    for (int i = 0; i < tamVet; i++)
    {
        for (int j = i + 1; j < tamVet; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}