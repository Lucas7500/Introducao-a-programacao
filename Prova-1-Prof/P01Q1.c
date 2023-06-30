// Escreva um programa em C que leia um único número inteiro com 3 algarismos. Em seguida, efetue cálculos,
// considerando-se a posição de cada algarismo, e obtenha um outro número com os algarismos em ordem inversa.

// Exemplo 1:
// Entrada: 123
// Saída: 321

// Exemplo 2:
// Entrada: 230
// Saída: 32

// Exemplo 3:
// Entrada: 700
// Saída: 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int unid, dez, cent;
    int numInv;

    printf("Digite um numero de 3 algarismos: ");
    scanf("%d", &num);

    unid = num % 10;
    dez = num / 10 % 10;
    cent = num / 100;

    numInv = unid * 100 + dez * 10 + cent;

    printf("Numero invertido: %d", numInv);
}
