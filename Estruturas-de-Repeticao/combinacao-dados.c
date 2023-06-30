// 4. Todas as combinacoes possiveis de 4 dados de 6 faces

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, linha = 0;

    for (d1 = 1; d1 <= 6; d1++)
    {
        for (d2 = 1; d2 <= 6; d2++)
        {
            for (d3 = 1; d3 <= 6; d3++)
            {
                for (d4 = 1; d4 <= 6; d4++)
                {
                    linha++;
                    printf("%04d d1: %d d2: %d d3: %d d4: %d\n", linha, d1, d2, d3, d4);
                }
            }
        }
    }

    return 0;
}