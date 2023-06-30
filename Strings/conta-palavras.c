#include <stdio.h>

int main()
{
    char s[80];
    int i = 0, n = 0;
    fgets(s, 80, stdin);
    while (s[i] != '\n' && s[i] != '\0') // Enquanto nao terminou o texto
    {
        while (s[i] == ' ')               // Pula possiveis espacos
            i++;                          // Achou o comeco de uma palavra ou o fim do texto
        if (s[i] != '\n' && s[i] != '\0') // Se achou uma palavra
        {
            n++;                                                // incrementa numero de palavras
            while (s[i] != ' ' && s[i] != '\n' && s[i] != '\0') // passa pela palavra
                i++;
        }
    }
    printf("Total de palavras: %d\n", n);
}
