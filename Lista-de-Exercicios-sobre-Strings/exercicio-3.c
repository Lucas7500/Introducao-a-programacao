// 3. Escreva um programa em C que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.

#include <stdio.h>
#define MAX 50

int main()
{
    char string[MAX];

    printf("Digite uma string: ");
    scanf("%[^\n]%*c", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        string[i] += 1;
    }

    printf("%s\n", string);

    return 0;
}
