#include <stdio.h>

void copiar(FILE *input, FILE *output);

int main(void)
{
    FILE *file1 = fopen("arquivo1.txt", "r");
    if (file1 == NULL)
    {
        printf("arquivo nao encontrado\n");
        return 1;
    }

    FILE *file2 = fopen("arquivo2.txt", "w");

    copiar(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void copiar(FILE *input, FILE *output)
{
    char texto[100];

    while (fgets(texto, 100, input) != NULL)
    {
        fputs(texto, output);
    }
}