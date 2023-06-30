/*
    Exemplica como passar argumentos para
    a funcao main a partir da linha
    de comando ("Prompt de Comando").

*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, soma = 0;

    if (argc < 3)
    {
        printf("Sintaxe: Soma <num1> ... <numN>\n");
        exit(0);
    }

    for (i = 1; i < argc; i++)
    {
        soma += atoi(argv[i]);
    }
    printf("%d", soma);
}
