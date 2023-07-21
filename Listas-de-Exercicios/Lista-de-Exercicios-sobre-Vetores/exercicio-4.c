// 4. Escreva um programa em C que armazene números inteiros de 1 a 10 e permita a exclusão lógica de um
// número informado pelo usuário. Ao final, o algoritmo deve imprimir o vetor com os nove números restantes.

#include <stdio.h>

int main()
{
    int qte_ele = 10, nums[qte_ele], num;

    for (int i = 0; i < qte_ele; i++)
    {
        nums[i] = (i + 1);
    }

    for (int i = 0; i < qte_ele; i++)
    {
        printf("nums[%d]: %d\n", i, nums[i]);
    }

    printf("\nQual numero voce deseja excluir? ");
    scanf("%d", &num);
    printf("\n");

    qte_ele--;

    for (int i = 0; i < qte_ele; i++)
    {
        if (i >= (num - 1))
        {
            nums[i] = nums[i + 1];
        }
        printf("nums[%d]: %d\n", i, nums[i]);
    }

    return 0;
}
