// Escreva um programa em C que leia três números inteiros diferentes, identifique e imprima o maior e o menor valor.

// Exemplo 1:
// Entrada:
// 1
// 2
// -3
// Saída:
// -3
// 2

// Exemplo 2:
// Entrada:
// 12
// 10
// 30
// Saída:
// 10
// 30

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int maiorNum, menorNum;

    printf("Digite 3 numeros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    menorNum = num1;
    maiorNum = num1;

    // Forma não otimizada
    // if (num2 < menorNum)
    //     menorNum = num2;
    // if (num3 < menorNum)
    //     menorNum = num3;

    // if (num2 > maiorNum)
    //     maiorNum = num2;
    // if (num3 > maiorNum)
    //     maiorNum = num3;

    // Forma otimizada
    if (num2 < menorNum)
        menorNum = num2;
    else if (num2 > maiorNum)
        maiorNum = num2;

    if (num3 < menorNum)
        menorNum = num3;
    else if (num3 > maiorNum)
        maiorNum = num3;

    printf("Maior numero: %d\nMenor numero: %d", maiorNum, menorNum);
}
