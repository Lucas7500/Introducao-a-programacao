#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main()
{
    int prova, as;

    do
    {
        printf("Quantas Provas você fez? ");
        scanf("%d", &prova);
    } while (prova < 0 || prova > 5);

    do
    {
        printf("Quantas atividades você fez? ");
        scanf("%d", &as);
    } while (as < 0 || as > 5);

    float notas[LINHA][COLUNA] = {0};

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (i == 0)
            {
                if (j == prova)
                {
                    break;
                }

                do
                {
                    printf("Prova %d: ", j + 1);
                    scanf("%f", &notas[i][j]);
                } while (notas[i][j] < 0 || notas[i][j] > 10);
            }
            else if (i == 1)
            {
                if (j == as)
                {
                    break;
                }

                do
                {
                    printf("Atividade Supervisionada %d: ", j + 1);
                    scanf("%f", &notas[i][j]);
                } while (notas[i][j] < 0 || notas[i][j] > 10);
            }
            else
            {
                notas[i][j] = 0.8 * notas[0][j] + 0.2 * notas[1][j];
            }
        }

        printf("\n");
    }

    for (int i = 0; i < LINHA; i++)
    {
        if (i == 0)
        {
            printf("Provas:                   ");
        }
        else if (i == 1)
        {
            printf("Atividades Supersionadas: ");
        }
        else
        {
            printf("Nota final:               ");
        }

        for (int j = 0; j < COLUNA; j++)
        {
            printf("%5.2f ", notas[i][j]);
        }

        printf("\n");
    }

    return 0;
}
