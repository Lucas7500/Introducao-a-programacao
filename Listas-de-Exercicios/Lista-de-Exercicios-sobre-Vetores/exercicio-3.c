// 3. Escreva um programa em C para ler um conjunto de 10 números reais e informar:
// a) Quantos números são menores do que a média.
// b) Quantos números são maiores do que a média.
// c) Quantos números são iguais à média.

#include <stdio.h>
#define ARRAY_LENGTH 10

int main(void)
{
    float sum = 0, avg = 0, nums[ARRAY_LENGTH];
    int bAvg = 0, aAvg = 0, iAvg = 0;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("nums[%d]: ", i);
        scanf("%f", &nums[i]);

        sum += nums[i];
    }

    avg = sum / ARRAY_LENGTH;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (nums[i] > avg)
        {
            aAvg++;
        }
        else if (nums[i] < avg)
        {
            bAvg++;
        }
        else
        {
            iAvg++;
        }
    }

    printf("%d numeros estao acima da media\n", aAvg);
    printf("%d numeros estao abaixo da media\n", bAvg);
    printf("%d numeros estao na media\n", iAvg);

    return 0;
}