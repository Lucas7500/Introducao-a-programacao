#include <stdio.h>

int main()
{
    int fNum, lNum, sum;

    sum = 0;

    printf("Digite o primeiro numero: ");
    scanf("%i", &fNum);

    printf("Digite o ultimo numero: ");
    scanf("%i", &lNum);

    for (int i = fNum; i <= lNum; i++)
    {
        sum += i;
    }

    printf("A soma dos numeros naturais de %i ate %i eh igual a: %i\n", fNum, lNum, sum);

    return 0;
}
