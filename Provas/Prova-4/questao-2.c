// Escreva um programa em C em que seja declarada e preenchida, automaticamente, uma matriz 30 x 30 com números inteiros
// de 1 a 900. Em seguida, deve-se calcular e imprimir a soma dos números que estejam em regiões com fundo cinza,
// conforme exemplificado na matriz 4 x 4 mostrada adiante.

// Importante: Para uma matriz 3 x 3, o resultado será 25; para uma matriz 4 x 4, o resultado será 68;
// para uma matriz 30 x 30, o resultado será 202725.

// Imagem: https://prnt.sc/Zp7YFz5KVlde

#include <stdio.h>
#define LINHAS 30
#define COLUNAS 30

int main()
{
    int mat[LINHAS][COLUNAS];
    int num = 1, sum = 0, count = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            mat[i][j] = num;
            num++;

            if (i % 2 == 0)
            {
                count++;

                if (count % 2 == 1)
                {
                    sum += mat[i][j];
                }
            }
            else
            {
                count++;

                if (count % 2 == 0)
                {
                    sum += mat[i][j];
                }
            }
        }

        count = 0;
    }

    printf("%d\n", sum);

    return 0;
}
