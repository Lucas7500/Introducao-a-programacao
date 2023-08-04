#include <stdio.h>

int somarVetor(int vetor[], const int n);

int main(void)
{
    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    printf("A soma dos membros do vetor = %i\n", somarVetor(vetor, 10));
}

int somarVetor(int vetor[], const int n)
{
    int soma = 0;
    int *ptr;
    int *const finalVetor = vetor + n;

    for (ptr = vetor; ptr < finalVetor; ptr++)
    {
        soma += *ptr;
    }

    return soma;
}

/*
int somarVetor(int vetor[], const int n)
{
    int soma = 0;

    for (int i = 0; i < n; i++)
    {
        soma += vetor[i];
    }

    return soma;
}
*/
