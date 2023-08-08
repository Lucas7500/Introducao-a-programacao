#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq;
    double aux[3];
    int i;

    arq = fopen("testeVet.bin", "r+b");

    if (arq == NULL)
    {
        printf("Erro");
        return 1;
    }
    /*
    size_t fread(void *pt-mem, size_t size,
                  size_t num-items, FILE *pt-arq);
    */
    fread(aux, sizeof(double), 3, arq);
    for (i = 0; i < 3; i++)
    {
        printf("Numero lido: %.2lf\n", aux[i]);
    }

    fclose(arq);
}
