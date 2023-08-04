#include <stdio.h>

int main(void)
{
    int vetor[3] = {1, 2, 3};
    int *ptr = &vetor[1];
    int *ptr2 = vetor;

    printf("%i %i\n", *ptr, *ptr2);

    ++ptr2;

    printf("%i", *ptr2);
}