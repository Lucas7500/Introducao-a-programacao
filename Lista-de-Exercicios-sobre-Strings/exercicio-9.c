// 9. Escreva um programa em C que leia duas palavras e diga qual deles vem primeiro na ordem
// alfabética. Dica: 'a' é menor do que 'b'.

#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
    char word1[MAX], word2[MAX];
    int first;
    int l1, l2, higher;

    printf("Digite a palavra 1: ");
    scanf("%[^\n]%*c", word1);

    printf("Digite a palavra 2: ");
    scanf("%[^\n]%*c", word2);

    l1 = strlen(word1);
    l2 = strlen(word2);

    higher = l1;

    if (l2 > l1)
    {
        higher = l2;
    }

    for (int i = 0; i < higher; i++)
    {
        if (word1[i] == '\0')
        {
            first = 1;
            break;
        }
        else if (word2[i] == '\0')
        {
            first = 2;
            break;
        }
        else if (word1[i] < word2[i])
        {
            first = 1;
            break;
        }
        else if (word2[i] < word1[i])
        {
            first = 2;
            break;
        }
    }

    if (first == 1)
    {
        printf("A palavra %s vem primeiro.\n", word1);
    }
    else if (first == 2)
    {
        printf("A palavra %s vem primeiro.\n", word2);
    }
    else
    {
        printf("As palavras são iguais.\n");
    }

    return 0;
}
