#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file;
    file = fopen("string.txt", "r");

    if (file == NULL)
    {
        printf("Arquivo nao encontrado\n");
        return 1;
    }

    char frase[100];

    while (fgets(frase, 100, file) != NULL)
    {
        printf("%s", frase);
    }

    fclose(file);

    return 0;
}