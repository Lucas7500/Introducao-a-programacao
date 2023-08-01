#include <stdio.h>  // printf, scanf
#include <stdlib.h> // system
#include <ctype.h>  // toupper
#include <malloc.h> // malloc, realloc

int main()
{
    int *pInt;
    int elemento, n = 1, i = 0;
    char Resposta;

    // void *malloc(size_t size);
    pInt = (int *)malloc(n * sizeof(int));

    if (pInt == NULL)
        printf("Nao ha memoria suficiente!");
    else
    {
        do
        {
            printf("%io. elemento do vetor (< 0: sair): ", i + 1);
            scanf("%d", &elemento);
            if (elemento < 0)
                break;

            // pInt[i] = elemento;  // Notação de vetor
            *(pInt + i) = elemento;
            i++;

            pInt = (int *)realloc(pInt, (n + 1) * sizeof(int));
            if (pInt == NULL)
            {
                printf("Nao ha memoria suficiente!");
                break;
            }
            else
            {
                n++;
            }
        } while (1);
    }

    n--;

    printf("\nn: %i\n\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%i ", *(pInt + i));
    }

    free(pInt);

    return 0;
}
