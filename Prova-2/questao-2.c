// Chico tem 1.30 m e cresce 7 centímetros por ano, enquanto Juca tem 1.10 m e cresce 11 centímetros por ano.
// Escreva um programa em C que calcule, usando comando de repetição, e imprima quantos anos serão necessários para que Juca
// seja maior que Chico.

// Importante:  Nada deve ser lido do teclado. Na saída, apenas imprimir a quantidade de anos.

// Nota: 2.5/2.5

#include <stdio.h>

int main(void)
{
    float alturaJuca = 1.10, alturaChico = 1.30;
    int anos = 0;

    while (alturaChico > alturaJuca)
    {
        alturaChico += 0.07;
        alturaJuca += 0.11;
        anos++;
    }

    printf("%d", anos);

    return 0;
}
