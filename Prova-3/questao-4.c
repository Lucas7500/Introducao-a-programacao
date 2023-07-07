// Escreva um programa em C que leia uma string, leia o caractere a ser substituído e leia o caractere substituto.
// Ao final, o programa deve imprimir a string com o caractere substituto no lugar do caractere a ser substituído.
// Testar com cada um dos exemplos abaixo.

// Exemplos:

// Entrada:
// Escreva um programa em C
// E
// #
// Saída:
// #scr#va um programa #m C

// Entrada:
// Linguagem de Programacao C
// a
// @
// Saída:
// Lingu@gem de Progr@m@c@o C

// Nota: 2.5/2.5

#include <stdio.h>
#include <ctype.h>
#define MAX 50

int main()
{
    char string[MAX];
    char substituido, substituto;

    printf("Digite uma string: ");
    scanf("%[^\n]%*c", string);

    printf("Digite o caractere a ser substituido: ");
    scanf("%c%*c", &substituido);

    printf("Digite o caractere substituto: ");
    scanf("%c", &substituto);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == toupper(substituido) || string[i] == tolower(substituido))
        {
            string[i] = substituto;
        }
    }

    printf("%s\n", string);

    return 0;
}
