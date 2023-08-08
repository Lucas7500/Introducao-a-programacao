#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq;
    double aux = 2.5;

    arq = fopen("teste.bin", "w+b");

    if (arq == NULL)
    {
        printf("Erro");
        return 1;
    }
    /*
    size_t fwrite(void *pt-mem, size_t size,
                  size_t num-items, FILE *pt-arq);
    */
    fwrite(&aux, sizeof(double), 1, arq);
    fclose(arq);
}
