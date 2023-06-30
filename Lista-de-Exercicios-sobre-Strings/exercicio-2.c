// 2. Escreva um programa em C que compara duas strings (não use a função strcmp ou stricmp).

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

int main()
{
    char string1[MAX], string2[MAX];
    int diff = 0, length = 0;
    int higher, l1, l2;

    printf("Digite a String 1: ");
    scanf("%[^\n]%*c", string1);

    printf("Digite a String 2: ");
    scanf("%[^\n]%*c", string2);

    l1 = strlen(string1);
    l2 = strlen(string2);
    higher = l1;

    if (l2 > l1)
    {
        higher = l2;
    }

    for (int i = 0; i < higher; i++)
    {
        if (string1[i] != ' ')
        {
            string1[i] = toupper(string1[i]);
        }

        if (string2[i] != ' ')
        {
            string2[i] = toupper(string2[i]);
        }

        if (string1[i] != string2[i])
        {
            diff = 1;
            break;
        }
    }

    if (!diff)
    {
        printf("As Strings sao iguais\n");
    }
    else
    {
        printf("As Strings sao diferentes\n");
    }

    return 0;
}
