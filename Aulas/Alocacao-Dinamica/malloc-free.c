#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *)malloc(sizeof(int)); // Não lida com a sujeira

    if (p == NULL)
    {
        printf("malloc n funcionou\n");
        return 1;
    }

    *p = 1000;

    printf("%i\n", *p);

    free(p); // Não lida com a sujeira

    printf("%i\n", *p);

    return 0;
}