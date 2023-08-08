// Cesar Caus Portilho e Lucas Moreira Iglesias

#include <stdio.h>
#include <stdlib.h>

int buscaBinIntervalar(float vet[], int tamVet, float valorProcurado, int limInf, int limSup, int *valorInf, int *valorSup);

int main()
{
    float vet[] = {1, 3, 5, 7, 9, 11};
    int tamVet = sizeof(vet) / sizeof(vet[0]);
    float valorProcurado;
    int valorInf, valorSup;

    printf("\nDigite o valor procurado: ");
    scanf("%f", &valorProcurado);

    int posicao = buscaBinIntervalar(vet, tamVet, valorProcurado, 0, tamVet - 1, &valorInf, &valorSup);

    if (posicao != -1)
    {
        printf("Valor encontrado na posicao: %d\n", posicao);
    }
    else
    {
        printf("Valor nao encontrado.\n");

        if (valorInf == -1)
        {
            char inf[] = "NULL";

            printf("Valor imediatamente inferior: %s\n", inf);
            printf("Valor imediatamente superior: %d\n", valorSup);
        }
        else if (valorSup == -1)
        {
            char sup[] = "NULL";

            printf("Valor imediatamente inferior: %d\n", valorInf);
            printf("Valor imediatamente superior: %s\n", sup);
        }
        else
        {
            printf("Valor imediatamente inferior: %d\n", valorInf);
            printf("Valor imediatamente superior: %d\n", valorSup);
        }
    }

    return 0;
}

int buscaBinIntervalar(float vet[], int tamVet, float valorProcurado, int limInf, int limSup, int *valorInf, int *valorSup)
{
    int meio;
    *valorInf = -1;
    *valorSup = -1;

    while (limInf <= limSup)
    {
        meio = (limInf + limSup) / 2;

        if (vet[meio] == valorProcurado)
        {
            return meio;
        }
        else if (vet[meio] < valorProcurado)
        {
            *valorInf = vet[meio];
            limInf = meio + 1;
        }
        else
        {
            *valorSup = vet[meio];
            limSup = meio - 1;
        }
    }

    return -1;
}