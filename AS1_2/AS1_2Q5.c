// Dois corredores, A e B, apostam uma corrida. O corredor A está 10 metros à frente do corredor B mas o
// corredor B corre duas vezes mais rápido que o A. Escreva um programa em C que imprima em quanto tempo o
// corredor B ultrapassa o corredor A.

// Nota: 1.66/1.66

#include <stdio.h>

int main(void)
{
    // posicao de B: 40m do referencial | posicao de A: 40m + 10m = 50m do referencial
    float pB = 40, pA = pB + 10;
    // Velocidade de A: 2.5 m/s | Velocidade de B: 2 * 2.5m/s = 5 m/s
    float vA = 2.5, vB = 2 * vA;
    // tempo em segundo
    int tempo = 0;

    while (pB <= pA)
    {
        pA += vA;
        pB += vB;
        tempo++;
    }

    printf("O corredor B ultrapassa o corredor A em %d segundos\n", tempo);

    return 0;
}