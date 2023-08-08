#include <stdio.h>

int main()
{
    FILE *arq;
    double aux = 2.5;
    
    arq = fopen("teste.bin", "r+b");
    
    if (arq == NULL)
    {
        printf("Erro");
        return 1;
    }
    
    fread(&aux, sizeof(double), 1, arq);
    printf("Valor lido: %.1lf", aux);
    fclose(arq);

    return 0;
}
