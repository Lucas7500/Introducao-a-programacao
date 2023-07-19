// Biblioteca de funções de William Gates
#ifndef BIB_GATESW_H
#define BIB_GATESW_H

/*
Função de comparação, usada pela função qsort (stdlib.h>, que aceita dois argumentos, elem1 e elem2,
sendo cada um deles um ponteiro para um elemento do array. A função
de comparação compara cada valor apontado (*elem1 e *elem2) e retorna
um inteiro baseado no resultado da compração. Por exemplo:
  0,  se *elem1 == *elem2
  1,  se *elem1 > *elem2
 -1, se *elem1 < *elem2
*/

int compara(const void *x, const void *y)
{
    if (*(int *)x > *(int *)y)
        return 1;
    else if (*(int *)x == *(int *)y)
        return 0;
    else if (*(int *)x < *(int *)y)
        return -1;
}

// Efetua busca binária O(log n) em vetor de inteiros
int buscaBin(int vetor[], int elemBuscado, int limInf, int limSup)
{
    int meio;
    while (1)
    {
        numComp++;

        meio = (limInf + limSup) / 2;
        if (elemBuscado == vetor[meio])
            return meio;
        else if (elemBuscado < vetor[meio])
        {
            limSup = meio - 1;
        }
        else if (elemBuscado > vetor[meio])
        {
            limInf = meio + 1;
        }
        if (limInf > limSup)
            return -1;
    }
}

// Ordena vetor de inteiros pelo método Bolha O(n2)
void ordeneBolha(int vetor[], int tamVet)
{
    int i, j, aux;

    for (i = 0; i < tamVet - 1; i++)
    {
        for (j = i + 1; j < tamVet; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

// Retorna o maior de dois valores
float maxVal(float n1, float n2)
{
    // return (n1 > n2) ? n1 : n2;
    if (n1 > n2)
        return n1;
    else
        return n2;
}

// Calcula a média aritmética de dois números
float calcMedia2Nums(float n1, float n2)
{
    return (n1 + n2) / 2;
}

// Retorna o próximo múltiplo de 5
int proxMultDe5(int n)
{
    return n / 5 * 5 + 5;
}
#endif
