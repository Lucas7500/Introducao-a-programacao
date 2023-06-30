// Calcular o tempo de derretimento de uma pedra de gelo
// Escreva um programa em C para calcular e imprimir em quantas HORAS uma pedra de gelo que pesa 50Kg,
// estará totalmente derretida. Esta pedra, quando exposta aos raios solares, perde 500g a cada 3 minutos.
// Obs. 1: deve-se usar uma estrutura de repetição para resolver esse problema.
// Obs. 2: note que as "horas" é um valor real (não precisa fazer a conversão dos minutos, apenas imprimir a
// quantidade de horas em formato fracionado, por exemplo: 29.500000).

// Nota: 1.66/1.66

#include <stdio.h>

int main(void)
{
    // 3min = 0.05 horas
    // 500g = 0.5kg

    float horas = 0, peso = 50;

    while (peso > 0)
    {
        peso -= 0.5;
        horas += 0.05;
    }

    printf("O tempo de derretimento da pedra de gelo foi: %.2f horas\n", horas);

    return 0;
}