// 4. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas.
// Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.

// 5. Escreva um programa em C que leia uma cadeia de caracteres e converta todos os caracteres para maiúscula.
// Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.

#include <stdio.h>
#define MAX 50

int main()
{
    char string[MAX];

    printf("Digite uma String: ");
    scanf("%[^\n]%*c", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] += 32;
        }
        else if (string[i] >= 97 && string[i] <= 122)
        {
            string[i] -= 32;
        }
    }

    printf("%s\n", string);

    return 0;
}
