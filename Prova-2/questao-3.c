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

// Nota: 2.0/2.5
// Motivo: Linha 29 - Coloquei i < limSup ao invés de i <= limSup, removendo assim o limite superior.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int limInf, limSup, raizInt;
    float raiz;

    scanf("%d %d", &limInf, &limSup);

    for (int i = limInf; i <= limSup; i++)
    {
        if (i % 2 == 1)
        {
            raiz = sqrt(i);
            raizInt = raiz;

            if (raiz == raizInt)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
