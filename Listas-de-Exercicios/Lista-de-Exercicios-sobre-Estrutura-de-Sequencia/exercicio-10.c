// Escreva um programa em C em que sejam fornecidos a razão de uma PA e o valor do 1º termo e seja calculado e
// impresso o valor do 10º termo da série.

#include <stdio.h>

int main()
{
    int pTermo, razao;

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &pTermo);

    printf("O 10 termo da PA e: %d\n", pTermo + (10 - 1) * razao);
}