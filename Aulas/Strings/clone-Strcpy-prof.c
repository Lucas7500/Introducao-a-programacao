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

int main()
{
    char st[100] = "Sim, eh possivel.";

    printf("st: \"%s\", tamanho: %d\n", st, strlen(st));

    Strcpy(st, "BOA NOITE!");
    printf("st: \"%s\", tamanho: %d\n", st, strlen(st));

    system("pause > nul");
}
