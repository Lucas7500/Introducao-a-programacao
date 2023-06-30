// Refaça o exemplo visto em aula de inversão de uma string de tal
// forma que não seja utilizado nenhum vetor adicional! Ou seja
// devemos computar a inversa no próprio vetor original.

#include <stdio.h>
#include <string.h>
#define MAX 1000

int main()
{
    char text[MAX], tempChar;
    printf("Digite o texto: ");
    scanf("%[^\n]%*c", text);

    printf("Texto Original: %s\n", text);

    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (i == length / 2)
        {
            break;
        }

        tempChar = text[i];
        text[i] = text[length - i - 1];
        text[length - i - 1] = tempChar;
    }

    printf("Texto Invertido: %s\n", text);

    return 0;
}