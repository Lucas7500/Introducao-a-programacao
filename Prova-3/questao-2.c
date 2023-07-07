// Escreva um programa em C, em que seja declarado um vetor TODOS de inteiros, de tamanho variável.
// Ao vetor TODOS, deve-se atribuir valores pares e ímpares (de forma ordenada ou desordenada).
// Essa atribuição deve ser feita sem uso de qualquer instrução de leitura de valores do teclado.
// Em seguida, deve-se declarar dois vetores: PARES e IMPARES. Usando um único comando de repetição, devem ser
// copiados do vetor TODOS para o vetor PARES os números pares porventura existentes e, para o vetor IMPARES,
// os números ímpares porventura existentes. Ao final, imprimir o conteúdo dos vetores TODOS, PARES e IMPARES.
// Testar com cada um dos exemplos abaixo.

// Exemplos:

// Para o vetor TODOS = [11, 42, 3, 4, 60, 15, 7, 18] o conteúdo a ser copiado
// e impresso do vetor PARES será: 42, 4, 60, 18, e do vetor IMPARES será: 11, 3, 15, 7.

// Para o vetor TODOS = [1, 2, 30, 4, 60, 16, 7, 18] o conteúdo a ser copiado
// e impresso do vetor PARES será: 2, 4, 30, 4, 60, 16, 18, e do vetor IMPARES será: 1, 7.

// Para o vetor TODOS = [1, 23, 33, 43, 65, 19, 7, 1] nada será impresso do conteúdo do vetor PARES,
// e do vetor IMPARES será copiado e impresso: 1, 23, 33, 43, 65, 19, 7, 1.

// Para o vetor TODOS = [10, 2, 6, 4, 8, 12, 70, 20] o conteúdo a ser copiado e
// impresso do vetor PARES será: 10, 2, 6, 4, 8, 12, 70, 20, e nada será impresso do conteúdo do vetor IMPARES.

// Nota: 2.5/2.5

#include <stdio.h>

int main()
{
    int TODOS[] = {11, 42, 3, 4, 60, 15, 7, 18};
    int size = sizeof(TODOS) / sizeof(TODOS[0]);
    int PARES[size], IMPARES[size];
    int qtdPares = 0, qtdImpares = 0;

    for (int i = 0; i < size; i++)
    {
        if (TODOS[i] % 2)
        {
            IMPARES[qtdImpares] = TODOS[i];
            qtdImpares++;
        }
        else
        {
            PARES[qtdPares] = TODOS[i];
            qtdPares++;
        }
    }

    printf("TODOS[] = ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", TODOS[i]);
    }

    printf("\n");

    printf("PARES[] = ");

    for (int i = 0; i < qtdPares; i++)
    {
        printf("%d ", PARES[i]);
    }

    printf("\n");

    printf("IMPARES[] = ");

    for (int i = 0; i < qtdImpares; i++)
    {
        printf("%d ", IMPARES[i]);
    }

    return 0;
}
