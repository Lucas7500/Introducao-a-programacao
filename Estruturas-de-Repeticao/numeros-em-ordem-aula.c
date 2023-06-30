#include <stdio.h>

int main()
{
    int num, numAnt, qtNum, ord;
    ord = 1;

    printf("Digite quantos numeros serao lidos: ");
    scanf("%d", &qtNum);

    printf("Digite um numero: ");
    scanf("%d", &numAnt);

    for (int i = 0; i < qtNum - 1; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < numAnt)
        {
            ord = 0;
        }
        else
        {
            numAnt = num;
        }
    }

    if (ord == 1)
    {
        printf("Esta em ordem crescente\n");
    }
    else
    {
        printf("Nao esta em ordem crescente\n");
    }

    return 0;
}
