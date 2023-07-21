#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numComp;
#include "E:\Programacao\Introducao-a-programacao\Bibliotecas\prof-bib.h"
#define MAX 100

// Programa principal
int main()
{
    int vet[MAX]; // = {2, 17, -1, 14, 90, 3, 20};
    int tamVet = MAX;
    int i, aux;
    int valorProcurado, resposta;

    srand(time(NULL));
    printf("Construindo vetor de tamanho %d\n", tamVet);
    for (aux = 0; aux < tamVet; aux++)
        // vet[aux] = rand() % 501;
        vet[aux] = (rand() % 500) + 1;

    printf("Elementos do vetor antes da ordenacao\n");
    for (i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }

    // Chamada da função de ordenação do vetor
    // ordeneBolha(vet, tamVet);
    qsort(vet, tamVet, sizeof(int), compara);

    printf("\n\nElementos do vetor apos ordenacao\n");
    for (i = 0; i < tamVet; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\nValor procurado: ");
    scanf("%d", &valorProcurado);

    numComp = 0;
    resposta = buscaBin(vet, valorProcurado, 0, tamVet - 1);

    if (resposta != -1)
    {
        printf("Elemento encontrado na posicao %d.", resposta);
    }
    else
    {
        printf("Elemento nao encontrado.");
    }
    printf(" (Apos %d comparacoes.)", numComp);
}
