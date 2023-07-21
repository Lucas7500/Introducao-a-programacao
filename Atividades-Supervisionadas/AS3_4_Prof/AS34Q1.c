#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[] = {13, 10, 11, 9, 9};
    int vetB[] = {8, 9, 10, 11, 12, 11};
    int vetI[5];

    int tamVetA = sizeof(vetA) / sizeof(vetA[0]);
    int tamVetB = sizeof(vetB) / sizeof(vetB[0]);
    int tamVetI = 5;

    int a, b, i, posI = 0;
    int estaEmB, estaEmI;

    // Para cada elemento de A, verificar se está em B
    for (a = 0; a < tamVetA; a++)
    {
        estaEmB = 0;

        for (b = 0; b < tamVetB; b++)
        {
            if (vetB[b] == vetA[a])
            {
                estaEmB = 1;
                break;
            } // Fim if
        }     // Fim for b

        // Verificar se elemento contido em B já está em I
        if (estaEmB)
        {
            estaEmI = 0;

            for (i = 0; i < tamVetI; i++)
            {
                if (vetI[i] == vetA[a])
                {
                    estaEmI = 1;
                }
            } // Fim for i

            if (!estaEmI)
            {
                vetI[posI] = vetA[a];
                posI++;
            } // Fim if
        }     // Fim if
    }         // Fim for a

    // Imprimir conteudo dos vetores A, B, I
    printf("Conteudo do vetor A:\n");
    for (i = 0; i < tamVetA; i++)
    {
        printf("%d ", vetA[i]);
    }

    printf("\n\nConteudo do vetor B:\n");
    for (i = 0; i < tamVetB; i++)
    {
        printf("%d ", vetB[i]);
    }

    printf("\n\nConteudo do vetor I:\n");
    for (i = 0; i < posI; i++)
    {
        printf("%d ", vetI[i]);
    }
}
