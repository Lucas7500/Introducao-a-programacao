// Resolver, usando recursão, o problema descrito na Questão 3.
// A nota desta questão extra poderá ser “diluída” na nota da Prova 4 e/ou na de quaisquer provas anteriores.

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
    static int i = -1;
    i++;

    if (i > tam)
    {
        return 0;
    }

    return (float)nums[i] / tam + calcMediaAritVetor(nums, tam);
}
