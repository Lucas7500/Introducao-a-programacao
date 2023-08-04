#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("string.txt", "a");

    if (file == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
        return 1;
    }

    fprintf(file, "\nPrimeira linha\n");

    char frase[] = "\nSegunda linha\n";
    fputs(frase, file);

    char c = 'c';
    fputc(c, file);

    fclose(file);

    return 0;
}