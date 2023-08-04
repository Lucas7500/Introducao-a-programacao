#include <stdio.h>

int main()
{
    char aux;

    FILE *fr = fopen("teste.txt", "r");
    FILE *fw = fopen("saida.txt", "w");

    while (fscanf(fr, "%c", &aux) != EOF)
    {
        fprintf(fw, "%c", aux);
    }

    fclose(fr);
    fclose(fw);

    return 0;
}
