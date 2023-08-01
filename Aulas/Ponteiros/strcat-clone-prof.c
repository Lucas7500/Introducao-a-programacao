#include <stdio.h>
#include <stdlib.h>

void Strcat(char *, char *);

int main()
{
    char str1[] = "Viva";
    char str2[] = " Brasil";

    Strcat(str1, str2);

    printf("str1: %s", str1);

    system("pause > nul");
}
void Strcat(char *dest, char *orig)
{
    int posFimDest;
    int i = 0;

    // Descobrir a partir de onde
    // em 'dest' iniciar a transferência de 'orig'
    while (*(dest + i) != '\0')
        i++;
    posFimDest = i;

    i = 0;
    while (*(orig + i) != '\0')
    {
        *(dest + i + posFimDest) = *(orig + i);
        i++;
    }
    *(dest + i + posFimDest) = '\0';
}
