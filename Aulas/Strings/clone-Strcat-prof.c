#include <stdio.h>
#include <stdlib.h>

void Strcpy(char s1[], char s2[])
{
    int i;
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
}

void Strcat(char s1[], char s2[])
{
    int i, c;
    // Verificar final da s1
    for (i = 0; s1[i] != '\0'; i++)
        // Copiar conteúdo de s2 p/ s1 a partir do final de s1
        for (c = 0; s2[c] != '\0'; c++)
        {
            s1[i + c] = s2[c];
        }
    s1[i + c] = '\0';
}

int main()
{
    char s[100] = "Oi";
    char s2[100] = "tos";

    printf("Antes de Strcat(s, s2):\n");
    printf("s: \"%s\", tamanho: %d\n", s, strlen(s));
    printf("s2: \"%s\", tamanho: %d\n", s2, strlen(s2));

    Strcat(s, s2);
    printf("\n\nDepois de Strcat(s, s2):\n");
    printf("s: \"%s\", tamanho: %d\n", s, strlen(s));
    printf("s2: \"%s\", tamanho: %d\n", s2, strlen(s2));
}
