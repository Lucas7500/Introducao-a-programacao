// Versao do codigo com o uso de arrays, economizando muitas linhas e tornando o processo muito mais automatizado

// Calcular a frequência de algarismos numéricos
// Escreva um programa que leia um inteiro positivo n, em seguida leia n números de apenas um algarismo. Seu
// programa deve computar e imprimir a frequência de ocorrência de cada um deles.
// Por exemplo:
// ENTRADA:
// Para n = 7
// Números lidos: 1 2 3 1 4 2 5
// SAÍDA:
// Frequência do número 1: 2
// Frequência do número 2: 2
// Frequência do número 3: 1
// Frequência do número 4: 1
// Frequência do número 5: 1

// Também não havia o caso de num = 0
// Corrigido - Linha 24, Linha 37, Linha 39, Linha 42, Linha 46

#include <stdio.h>

int main(void)
{
    int N, i = 0, freq[10] = {0};

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int nums[N];

    for (i = 0; i < N; i++)
    {
        do
        {
            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &nums[i]);
        } while (nums[i] < 0 || nums[i] > 9);

        freq[nums[i]]++;
    }

    for (i = 0; i < 10; i++)
    {
        if (freq[i])
        {
            printf("Frequencia do numero %d: %d\n", i, freq[i]);
        }
    }

    return 0;
}