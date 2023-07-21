// Na Usina de Angra dos Reis, os técnicos analisam a perda de massa de um material radioativo.
// Sabendo-se que este material perde 25% de sua massa a cada 30 segundos, criar um programa em C que leia a massa e, usando
// comando de repetição, calcule e, ao final, imprima o tempo (em minutos) necessário para que a massa desse material se torne
// menor que 0.10 grama. Nos exemplos abaixo, a entrada refere-se ao valor da massa; a saída refere-se ao tempo calculado.

// Importante: Na entrada, apenas ler o valor da massa com scanf; na saída, apenas imprimir o valor do tempo.

// Exemplo 1:
// Entrada:
// 1
// Saída:
// 4.50

// Exemplo 2:
// Entrada:
// 2
// Saída:
// 5.5

// Nota: 2.5/2.5

#include <stdio.h>

int main(void)
{
    float massa, tempo = 0;

    scanf("%f", &massa);

    while (massa > 0.10)
    {
        massa = massa - (0.25 * massa);
        tempo += 30;
    }

    printf("%.1f", tempo / 60);

    return 0;
}
