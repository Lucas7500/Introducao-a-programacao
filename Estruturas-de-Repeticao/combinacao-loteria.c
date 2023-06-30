// 5. todas as combinacoes possiveis da mega-sena
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6;
    unsigned long int linha = 0;

    for (n1 = 1; n1 <= 60; n1++)
    {
        for (n2 = n1 + 1; n2 <= 60; n2++)
        {
            for (n3 = n2 + 1; n3 <= 60; n3++)
            {
                for (n4 = n3 + 1; n4 <= 60; n4++)
                {
                    for (n5 = n4 + 1; n4 <= 60; n4++)
                    {
                        for (n6 = n5 + 1; n4 <= 60; n4++)
                        {
                            linha++;
                            printf("%08lu %d %d %d %d %d %d\n", linha, n1, n2, n3, n4, n5, n6);
                        }
                    }
                }
            }
        }
    }

    return 0;
}