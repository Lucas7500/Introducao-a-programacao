#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Stricmp(char *str1, char *str2);

int main()
{
    char str1[45], str2[45];

    printf("str1: ");
    scanf("%[^\n]%*c", str1);

    printf("str1: ");
    scanf("%[^\n]", str2);

    printf("Output: %d\n", Stricmp(str1, str2));

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
        if (toupper(str1[i]) < toupper(str2[i]))
        {
            return -1;
        }
        else if (toupper(str1[i]) > toupper(str2[i]))
        {
            return 1;
        }

        if (menor[i] = '\0')
        {
            return str1[i] == '\0' ? -1 : 1;
        }
    }

    return 0;
}
