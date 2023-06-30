// 7. Escreva um programa em C que implemente e chame uma função que receba uma mensagem, seu tamanho e
// um caractere e retire todas as ocorrências desse caractere na mensagem colocando * em seu lugar. A função
// deve retornar o total de caracteres alterados. Exemplo:
// Digite mensagem: FRASE DE EXEMPLO
// Digite a letra: E
// Total de trocas: 4
// FRAS* D* *X*MPLO

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

int countChangeString(char str[], int tamStr, char c);

int main()
{
    char string[MAX];
    char character;
    int countChange;

    printf("Digite a string: ");
    scanf("%[^\n]%*c", string);

    printf("Digite o caractere a ser substituido: ");
    scanf("%c", &character);

    countChange = countChangeString(string, strlen(string), character);

    printf("Total de trocas: %d\n", countChange);

    printf("%s\n", string);

    return 0;
}

int countChangeString(char str[], int tamStr, char c)
{
    int countChange = 0;

    for (int i = 0; i < tamStr; i++)
    {
        if (str[i] == toupper(c) || str[i] == tolower(c))
        {
            str[i] = '*';
            countChange++;
        }
    }

    return countChange;
}

// int countChangeString(char str[], char c)
// {
//     int countChange = 0;

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == toupper(c) || str[i] == tolower(c))
//         {
//             str[i] = '*';
//             countChange++;
//         }
//     }

//     return countChange;
// }
