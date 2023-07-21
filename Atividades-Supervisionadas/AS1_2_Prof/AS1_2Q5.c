// Dois corredores, A e B, apostam uma corrida. O corredor A está 10 metros à frente do corredor B mas o
// corredor B corre duas vezes mais rápido que o A. Escreva um programa em C que imprima em quanto tempo o
// corredor B ultrapassa o corredor A.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distCorredorB = 10, distCorredorA = distCorredorB + 10;
    int velocCorredorA = 1.5;                // 1.5 m/s
    int velocCorredorB = 2 * velocCorredorA; //  2 * 1.5 m/s = 3 m/s
    int tempo = 0;

    while (distCorredorB <= distCorredorA)
    {
        distCorredorA += velocCorredorA;
        distCorredorB += velocCorredorB;
        tempo++;
    }

    printf("Tempo para o corredor B ultrapassar o corredor A: %d segundos.", tempo);
}
