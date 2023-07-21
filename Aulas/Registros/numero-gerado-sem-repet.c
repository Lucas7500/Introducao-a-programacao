#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

int main()
{
    int vet[MAX], i = 0, j, repeat, numGerado;

    srand(time(NULL));

    int limInf = 0, limSup = 20;

    while (i < MAX)
    {
        numGerado = (rand() % limSup) + 1;
        j = 0;
        repeat = 0;

        while (j < MAX)
        {
            if (vet[j] == numGerado)
            {
                repeat = 1;
                break;
            }

            j++;
        }

        if (!repeat)
        {
            vet[i] = numGerado;
            i++;
        }
    }

    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
