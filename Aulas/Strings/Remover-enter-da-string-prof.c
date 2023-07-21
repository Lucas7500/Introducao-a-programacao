#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[100];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("\"texto\" com \\n: %s", texto);

    // Remove da string o \n inserido por fgets
    texto[strcspn(texto, "\n")] = '\0';

    printf("\"texto\" sem \\n: %s", texto);
}
