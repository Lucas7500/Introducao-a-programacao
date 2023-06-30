// 6. Escreva um programa em C que leia um vetor contendo letras de uma frase inclusive os espaços em branco.
// Retirar os espaços em branco do vetor e depois escrever o vetor resultante.

#include <stdio.h>
#define MAX 50

int main()
{
    char string1[MAX], string2[MAX];
    int k = 0;

    printf("Digite uma String com espacos: ");
    scanf("%[^\n]%*c", string1);

    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] != ' ')
        {
            string2[k] = string1[i];
            k++;
        }
    }

    printf("String sem espacos: %s\n", string2);

    return 0;
}
