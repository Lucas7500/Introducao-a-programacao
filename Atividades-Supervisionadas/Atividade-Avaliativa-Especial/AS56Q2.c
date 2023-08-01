// Cesar Caus Portilho e Lucas Moreira Iglesias

// 2. (1,25) (Tema: Ponteiros) Escreva um programa em C que implemente e teste a função 'Stricmp' (clone da
// função stricmp de comparação de strings, definida em string.h). Deve-se empregar somente ponteiros e
// notação de ponteiros. Não usar notação de vetor. As únicas funções nativas da string.h que poderão ser
// utilizadas são: strlen, toupper, tolower.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Stricmp(char *str1, char *str2);

int main()
{
    char t1[25] = "Cesar Caus Portilho";
    char t2[25] = "CESAR CAUS PORTILHO";

    if (Stricmp(t1, t2) == 0)
    {
        printf("Iguais");
    }
    else
    {
        printf("Diferentes");
    }

    return 0;
}

int Stricmp(char *str1, char *str2)
{
    char *maior;
    char *menor;

    if (strlen(str1) > strlen(str2))
    {
        maior = str1;
        menor = str2;
    }
    else
    {
        maior = str2;
        menor = str1;
    }

    for (int i = 0; maior[i] != '\0'; i++)
    {
        if (toupper(str1[i]) != toupper(str2[i]) || i > strlen(menor))
        {
            return -1;
        }
    }

    return 0;
}