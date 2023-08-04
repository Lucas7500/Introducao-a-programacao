#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = calloc(5, sizeof(int)); // Quantos elementos, espaço dos elementos

    *(p + 1) = 10;

    printf("%i\n", p[1]); // calloc inicializa a variável como 0

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Endereco de p[%i] = %p | Valor de p[%i] = %i\n", i, &p[i], i, *(p + i)); // &p[i] ou (p + i)
    }

    return 0;
}