// Cesar Caus Portilho e Lucas Moreira Iglesias
#include <stdio.h>

int main()
{
    char aux;
    int espacos = 0, tabulacoes = 0, linhas = 0;
    int temp, i = 0;

    FILE *file;
    file = fopen("graphics.xxx", "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
    }
    else
    {
        while (fscanf(file, "%c", &aux) != EOF)
        {
            switch (aux)
            {
            case ' ':
                espacos++;
                break;
            case '\t':
                tabulacoes++;
                break;
            case '\n':
                linhas++;
                break;
            }
        }
    }

    fclose(file);

    FILE *fw;
    fw = fopen("graphics.est", "w");
    if (fw == NULL)
    {
        printf("Erro ao abrir arquivo");
    }
    else
    {
        fprintf(fw, "%d %d %d", espacos, tabulacoes, linhas);
    }

    fclose(fw);

    espacos = 0, tabulacoes = 0, linhas = 0;

    fw = fopen("graphics.est", "r");
    if (fw == NULL)
    {
        printf("Erro ao abrir arquivo");
    }
    else
    {
        fscanf(fw, "%d %d %d", &espacos, &tabulacoes, &linhas);
    }

    printf("O arquivo graphics.xxx tem %d espaços, %d tabulações e %d linhas\n", espacos, tabulacoes, linhas);

    return 0;
}