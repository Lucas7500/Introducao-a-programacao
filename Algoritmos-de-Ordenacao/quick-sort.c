#include <stdio.h>  // printf
#include <stdlib.h> // qsort
#include <time.h>

/*
// Protótipo da função qsort
void qsort(void *base, int nElem, int width, int (*fcmp)());
 - base: aponta para o primeiro elemento da estrutura (array) a ser sorteada
 - nElem: é o número de elementos do array
 - width: é o tamanho de cada elemento em bytes
 - *fcmp: é a função de comparação, que aceita dois argumentos, elem1 e elem2,
          sendo cada um deles um ponteiro para um elemento do array. A função
          de comparação compara cada valor apontado (*elem1 e *elem2) e retorna
          um inteiro baseado no resultado da comparação. Por exemplo:
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

int main(void)
{
    int tamanho = 1000;
    int *vetor = (int *)malloc(sizeof(int) * tamanho);
    int aux;

    srand(time(NULL));

    printf("Construindo vetor de tamanho %d\n", tamanho);
    for (aux = 0; aux < tamanho; aux++)
        vetor[aux] = rand();

    printf("\nVetor antes da ordenacao...\n\n");
    for (aux = 0; aux < tamanho; aux++)
        printf("%d ", vetor[aux]);
    printf("\n");

    qsort(vetor, (size_t)tamanho, sizeof(int), compara);

    printf("\nVetor depois da ordenacao...\n");
    for (aux = 0; aux < tamanho; aux++)
        printf("%d ", vetor[aux]);
    printf("\n");

    return EXIT_SUCCESS;
}
