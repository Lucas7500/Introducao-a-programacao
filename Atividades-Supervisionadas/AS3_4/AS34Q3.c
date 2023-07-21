// Limpar string
// Faça um programa que atualize um texto removendo uma lista de caracteres indesejados. Tanto o texto.
// Exemplos:
// Entrada 1:
// Fulando de Tal da Silva
// aeiou
// Saída 1:
// Flnd d Tl d Slv

// Nota: 1.75/2.5
// Motivo: Distinção de letras maiúculas e minúsculas
// Obs: Não especificado no exercício
// Corrigido - Linha 35

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

int main()
{
    char text[MAX], unwanted[MAX];
    int posDel, k;

    printf("Digite o texto: ");
    scanf("%[^\n]", text);

    printf("Digite os caracteres indesejados: ");
    scanf("%*c%[^\n]", unwanted);

    for (int i = 0; unwanted[i] != '\0'; i++)
    {
        for (int j = 0; text[j] != '\0'; j++)
        {
            if (toupper(unwanted[i]) == text[j] || tolower(unwanted[i]) == text[j])
            {
                posDel = j;

                for (k = posDel; k < strlen(text) - 1; k++)
                {
                    text[k] = text[k + 1];
                }

                text[k] = '\0';
            }
        }
    }

    printf("%s\n", text);

    return 0;
}
