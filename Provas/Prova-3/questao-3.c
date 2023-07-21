// Escreva um programa em C que leia um texto (sem acentuação gráfica, til, cê cedilha, trema), conte
// e imprima a quantidade de cada vogal (maiúscula ou minúscula) que aparece no texto lido. Testar com o exemplo abaixo
// e com diversas entradas.

// Exemplo:

// Entrada:
// O livro era de Machado de Assis.

// Saída:
// Vogal aA: 4
// Vogal eE: 3
// Vogal iI: 2
// Vogal oO: 3
// Vogal uU: 0

// Nota: 2.5/2.5

#include <stdio.h>
#define MAX 50

int main()
{
    int freqA = 0, freqE = 0, freqI = 0, freqO = 0, freqU = 0;
    char text[MAX];

    printf("Digite um texto: ");
    scanf("%[^\n]%*c", text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == 'A' || text[i] == 'a')
        {
            freqA++;
        }
        else if (text[i] == 'E' || text[i] == 'e')
        {
            freqE++;
        }
        else if (text[i] == 'I' || text[i] == 'i')
        {
            freqI++;
        }
        else if (text[i] == 'O' || text[i] == 'o')
        {
            freqO++;
        }
        else if (text[i] == 'U' || text[i] == 'u')
        {
            freqU++;
        }
    }

    printf("\n");
    printf("Vogal aA: %d\n", freqA);
    printf("Vogal eE: %d\n", freqE);
    printf("Vogal iI: %d\n", freqI);
    printf("Vogal oO: %d\n", freqO);
    printf("Vogal uU: %d\n", freqU);

    return 0;
}
