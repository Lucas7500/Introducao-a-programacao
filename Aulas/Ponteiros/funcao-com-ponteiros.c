// Vantagem: Retorna max e min ao mesmo tempo
#include <stdio.h>

void maxAndMin(int vet[], int tam, int *min, int *max);

int main()
{
    int vet[] = {10, 80, 5, -10, 45, -20, 100, 200, 10};
    int tamVet = sizeof(vet) / sizeof(vet[0]);
    int min, max;

    maxAndMin(vet, tamVet, &min, &max);

    printf("O menor e: %d \nO maior e: %d \n", min, max);
}

void maxAndMin(int vet[], int tam, int *min, int *max)
{
    int i;

    *max = vet[0];
    *min = vet[0];

    for (i = 0; i < tam; i++)
    {
        if (vet[i] < *min)
        {
            *min = vet[i];
        }
        if (vet[i] > *max)
        {
            *max = vet[i];
        }
    }
}
