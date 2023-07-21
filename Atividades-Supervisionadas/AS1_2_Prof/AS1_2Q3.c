// Calcular o tempo de derretimento de uma pedra de gelo
// Escreva um programa em C para calcular e imprimir em quantas HORAS uma pedra de gelo que pesa 50Kg,
// estará totalmente derretida. Esta pedra, quando exposta aos raios solares, perde 500g a cada 3 minutos.
// Obs. 1: deve-se usar uma estrutura de repetição para resolver esse problema.
// Obs. 2: note que as "horas" é um valor real (não precisa fazer a conversão dos minutos, apenas imprimir a
// quantidade de horas em formato fracionado, por exemplo: 29.500000).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas;
    float pesoPedra = 50;  // 50 kg
    float perdaPeso = 0.5; // 500 g
    int ciclos = 0;

    while (pesoPedra > 0)
    {
        pesoPedra -= perdaPeso;
        ciclos += 3;
    }

    horas = ciclos / 60.0;

    printf("Horas: %.2f", horas);
}
