#include <stdio.h>  // printf, scanf
#include <stdlib.h> // srand, rand, system
#include <time.h>   // time
#define MAX 1000

int main()
{
    int n;
    int vetNum[MAX];

    printf("Quantidade de numeros pseudoaleatorios: ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        // do
        //{
        vetNum[i] = (rand() % 100) + 1; // Apenas numeros entre 0 e 100
        //} while (vetNum[i] % 2 == 0); // Caso queira apenas numeros pares ou ímpares
    }

    printf("Numeros gerados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vetNum[i]);
    }

    return 0;
}
