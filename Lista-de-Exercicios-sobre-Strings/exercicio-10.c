// 10. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de
// substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo
// dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído
// por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Escreva um programa em C que faça uso desse
// Código de César (3 posições), entre com uma string e retorne a string codificada. Exemplo:
// String: a ligeira raposa marrom saltou sobre o cachorro cansado
// Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR

#include <stdio.h>
#define MAX 50

int main()
{
    char string[MAX];
    int key = 3;

    printf("String: ");
    scanf("%[^\n]%*c", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] = (string[i] + key - 65) % 26 + 65;
            // (X = 88) = 88 + 3 - 65 = 26 % 26 = 0 + 65 = (65 = A)
        }
        else if (string[i] >= 97 && string[i] <= 122)
        {
            string[i] = (string[i] + key - 97) % 26 + 97;
        }
    }

    printf("Nova string: %s\n", string);

    return 0;
}