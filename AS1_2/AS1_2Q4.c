// Versao do codigo sem o uso de array

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

// Nota: 1.50/1.66
// Motivo: Faltou o caso do num = 0
// Corrigido - Linha 26, Linha 41, Linha 82

#include <stdio.h>

int main(void)
{
    int N, i = 0, num;
    int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        do
        {
            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &num);
        } while (num < 0 || num > 10);

        switch (num)
        {
        case 0:
            freq0++;
            break;
        case 1:
            freq1++;
            break;

        case 2:
            freq2++;
            break;

        case 3:
            freq3++;
            break;

        case 4:
            freq4++;
            break;

        case 5:
            freq5++;
            break;

        case 6:
            freq6++;
            break;

        case 7:
            freq7++;
            break;

        case 8:
            freq8++;
            break;

        case 9:
            freq9++;
            break;
        }
    }

    if (freq0)
    {
        printf("Frequencia do numero 0: %d\n", freq0);
    }
    if (freq1)
    {
        printf("Frequencia do numero 1: %d\n", freq1);
    }
    if (freq2)
    {
        printf("Frequencia do numero 2: %d\n", freq2);
    }
    if (freq3)
    {
        printf("Frequencia do numero 3: %d\n", freq3);
    }
    if (freq4)
    {
        printf("Frequencia do numero 4: %d\n", freq4);
    }
    if (freq5)
    {
        printf("Frequencia do numero 5: %d\n", freq5);
    }
    if (freq6)
    {
        printf("Frequencia do numero 6: %d\n", freq6);
    }
    if (freq7)
    {
        printf("Frequencia do numero 7: %d\n", freq7);
    }
    if (freq8)
    {
        printf("Frequencia do numero 8: %d\n", freq8);
    }
    if (freq9)
    {
        printf("Frequencia do numero 9: %d\n", freq9);
    }

    return 0;
}