#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[3] = {10, 20, 30};
    int *pv;
    int i;

    pv = v; // pv recebe endereço do 1º elemento de v

    printf("v = [%d", *pv);
    for (i = 1; i < 3; i++)
        printf(", %d", *(pv + i));

    printf("]", *pv);

    printf("\n\nApos pv = v\n");

    // Conteudo do endereço apontado por pv
    printf("*pv: %d\n", *pv);       // Será impresso 10
    printf("*pv+1: %d\n", *pv + 1); // Será impresso 11
    // Conteudo do endereço seguinte apontado por pv
    printf("*(pv+1): %d\n", *(pv + 1)); // Será impresso 20

    /* Imprime o conteudo do end. apontado por pv
       e faz ponteiro pv apontar p/ próxima posição
    */
    printf("*pv++: %d\n", *pv++); // Será impresso 10
    printf("\nApos pv++\n");
    printf("*pv: %d\n", *pv); // Será impresso 20

    // Conteudo do endereço apontado por pv acrescido de 1 inteiro
    printf("*(pv+1): %d\n", *pv + 1); // Será impresso 21

    // Conteudo do endereço seguinte apontado por pv
    printf("*(pv+1): %d\n", *(pv + 1)); // Será impresso 30
    printf("*pv: %d\n", *pv);           // Será impresso 20

    printf("\nConteudo do vetor (usando ponteiro com aritmetica de ponteiro):\n");
    // Iniciará a impressão a partir do valor 20 e imprimirá um elemento fora do vetor
    for (i = 0; i < 3; i++)
        printf("*(pv+%d): %d ", i, *(pv + i));

    printf("\n\nConteudo do vetor (usando ponteiro com notacao de vetor):\n");
    // Iniciará a impressão a partir do valor 20 e imprimirá um elemento fora do vetor
    for (i = 0; i < 3; i++)
        printf("pv[%d]: %d ", i, pv[i]);

    system("pause > nul");
}
