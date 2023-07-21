// Escreva um programa em C que leia um número inteiro e imprima o total de vezes em que ele é divisível por 2 e 3.

// Exemplo 1:
// Entrada: 20
// Saída: 1

// Exemplo 2:
// Entrada: 13
// Saída: 0

// Exemplo 3:
// Entrada: 18
// Saída: 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numInteiro;
    int totalVezDiv2e3 = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numInteiro);

    if (numInteiro % 2 == 0)
        totalVezDiv2e3++;
    if (numInteiro % 3 == 0)
        totalVezDiv2e3++;

    printf("Total de vezes: %d", totalVezDiv2e3);
}
