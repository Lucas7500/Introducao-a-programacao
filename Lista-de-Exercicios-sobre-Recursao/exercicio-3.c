// 3. Para imprimir cada elemento de um vetor de caracteres(string).

#include <stdio.h>

void imprimaString(char[]);

int main()
{
    char string[30];

    printf("Digite uma string: ");
    scanf("%[^\n]%*c", string);

    imprimaString(string);

    return 0;
}

void imprimaString(char str[])
{
    static int i = 0;

    if (str[i] == '\0')
    {
        return;
    }

    printf("%c", str[i]);
    i++;

    imprimaString(str);
}
