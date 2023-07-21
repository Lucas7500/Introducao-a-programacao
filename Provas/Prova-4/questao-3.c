// Escreva um programa em C em que seja implementada uma função que recebe um vetor de inteiros, o tamanho do vetor
// e retorne a média aritmética dos elementos contidos no vetor.

// O protótipo da função é o seguinte:
// float calcMediaAritVetor(int [], int);

// Na função main, deve-se ler valores e armazená-los no vetor, chamar a função calcMediaAritVetor e,
// ainda na função main, imprimir o resultado retornado.

// Exemplo 1:
// Entrada:
// {1, 2, 3, 4, 5, 6}
// Saída:
// 3.500000

// Exemplo 2:
// Entrada:
// {1, 2, 3, 40}
// Saída:
// 11.500000

// Exemplo 3:
// Entrada:
// {1, 2, -3, 5}
// Saída:
// 1.250000

// Exemplo 4:
// Entrada:
// {1, 22, -31, 5}
// Saída:
// -0.750000

#include <stdio.h>
#define MAX 50

float calcMediaAritVetor(int[], int);

int main()
{
    int nums[MAX], tam = 0;

    while (1)
    {
        printf("nums[%d] (Digite 0 para sair): ", tam);
        scanf("%d", &nums[tam]);

        if (nums[tam] == 0)
        {
            break;
        }

        tam++;
    }

    printf("\n");
    printf("%f\n", calcMediaAritVetor(nums, tam));

    return 0;
}

float calcMediaAritVetor(int nums[], int tam)
{
    float sum = 0;

    for (int i = 0; i < tam; i++)
    {
        sum += nums[i];
    }

    return sum / tam;
}
