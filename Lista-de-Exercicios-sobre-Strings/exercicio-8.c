// 8. Escreva um programa em C que recebe uma string S e inteiros não negativos I e J e imprima o segmento S[I..J].

#include <stdio.h>
#define MAX 50

int main()
{
    char string[MAX];
    int I, J;

    printf("Digite o valor da string S: ");
    scanf("%[^\n]%*c", string);

    printf("Digite o valor de I: ");
    scanf("%d", &I);

    printf("Digite o valor de J: ");
    scanf("%d", &J);

    printf("Valor do segmento S[I..J]: ");
    for (int i = I; i <= J; i++)
    {
        printf("%c", string[i]);
    }

    printf("\n");

    return 0;
}