// Palíndromo
// Faça um programa que leia strings enquanto o usuario desejar. Para cada string lida deverá ser impresso a
// palavra “SIM”, caso a string seja um palíndromo ou “NAO”, caso não seja.
// Exemplos:
// Entrada | Saída
// ovo | SIM
// Brasil | NAO
// Arara | SIM
// Socorram-me, subi no onibus em Marrocos | SIM
// Bom dia a todos | NAO
// Anotaram a data da maratona | SIM

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

int main(void)
{
    char text[MAX], invertedText[MAX];
    int posDel, j, i;

    while (1)
    {
        printf("Digite o texto: ");
        scanf("%[^\n]%*c", text);

        for (i = 0; text[i] != '\0'; i++)
        {
            if (ispunct(text[i]))
            {
                posDel = i;

                for (j = posDel; j < strlen(text) - 1; j++)
                {
                    text[j] = text[j + 1];
                }

                text[j] = '\0';
            }

            if (text[i] == ' ')
            {
                posDel = i;

                for (j = posDel; j < strlen(text) - 1; j++)
                {
                    text[j] = text[j + 1];
                }

                text[j] = '\0';
            }
        }

        for (i = 0; i < strlen(text); i++)
        {
            invertedText[i] = text[strlen(text) - i - 1];
        }

        invertedText[i] = '\0';

        if (stricmp(text, invertedText) == 0)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NÃO\n");
        }
    }

    return 0;
}