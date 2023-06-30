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

// Nota: 3.5/3.5

#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    int pDigito, sDigito, tDigito;
    pDigito = (num % 100) % 10 * 100;
    sDigito = (num % 100) / 10 * 10;
    tDigito = num / 100;

    printf("%d", pDigito + sDigito + tDigito);

    return 0;
}
