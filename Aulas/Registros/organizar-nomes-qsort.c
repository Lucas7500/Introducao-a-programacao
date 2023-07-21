#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int compara_string(const void *a, const void *b);

int main()
{
    char nomes[][MAX] = {"INF", "abacate", "xicara", "Brasil", "computador",
                         "linguagem C", "UFG", "mesa", "cachorro",
                         "tabuleiro", "agua", "Joaquina"};
    int tamVet = sizeof(nomes) / sizeof(nomes[0]);

    for (int i = 0; i < tamVet; i++)
    {
        for (int j = 0; nomes[i][j] != '\0'; j++)
        {
            printf("%c", nomes[i][j]);
        }

        printf("\n");
    }

    qsort(nomes[0], tamVet, sizeof(nomes[0]), compara_string);

    printf("\n");

    for (int i = 0; i < tamVet; i++)
    {
        for (int j = 0; nomes[i][j] != '\0'; j++)
        {
            printf("%c", nomes[i][j]);
        }

        printf("\n");
    }

    return 0;
}

int compara_string(const void *a, const void *b)
{
    return stricmp((char *)a, (char *)b); //  Usar stricmp
}
