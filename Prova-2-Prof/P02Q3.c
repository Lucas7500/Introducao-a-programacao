// Escreva um programa em C que leia um intervalo numérico (limite inferior e limite superior, em que
// limite inferior <= limite superior) e selecione e imprima os números quadrados perfeitos ímpares existentes
// no intervalo informado. (Um número quadrado perfeito é aquele cuja raiz quadrada é um número inteiro).
// Na Entrada, os dois valores referem-se, respectivamente, a limite inferior e limite superior. Pode não haver quadrados
// perfeitos ímpares no intervalo fornecido.

// Importante: Na entrada, apenas ler os valores com scanf; na saída, apenas imprimir os valores separados por espaço.

// Exemplo:
// Entrada:
// 1 10
// Saída:
// 1 9

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int limInf, limSup, parteIntDaRaiz;
    int i;

    printf("Informar limites inferior e superior: ");
    scanf("%d%d", &limInf, &limSup);

    for (i = limInf; i <= limSup; i++)
    {
        if (i % 2 == 1)
        {
            parteIntDaRaiz = sqrt(i);

            if (parteIntDaRaiz * parteIntDaRaiz == i)
                printf("%d ", i);
        }
    }
}
