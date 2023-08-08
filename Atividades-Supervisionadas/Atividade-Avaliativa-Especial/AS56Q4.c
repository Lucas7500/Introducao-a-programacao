// Cesar Caus Portilho e Lucas Moreira Iglesias

#include <stdio.h>
#include <string.h>

char *rightStr(char *str, int n);

int main()
{
    char str[] = "Ponteiro";
    int n = 5;

    char *result = rightStr(str, n);

    printf("Resultado: %s\n", result);

    return 0;
}

char *rightStr(char *str, int n)
{
    int tamanho = strlen(str);

    if (n >= tamanho)
    {
        return str;
    }
    else
    {
        return str + (tamanho - n);
    }
}