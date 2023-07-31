#include <stdio.h>

void Strcat(char *dest, char *orig);

int main()
{
    char str1[] = "Te ";
    char str2[] = "amo de coracao";

    Strcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}

void Strcat(char *dest, char *orig)
{
    int i = 0;

    while (dest[i] != '\0') // dest[i] = *(dest + i)
    {
        i++;
    }

    for (int j = 0; orig[j] != '\0'; j++)
    {
        dest[i] = orig[j]; // orig[j] = *(orig + j)
        i++;
    }

    dest[i] = '\0';
}
