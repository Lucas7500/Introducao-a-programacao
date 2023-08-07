// Cesar Caus Portilho e Lucas Moreira Iglesias

#include <stdio.h>

int main()
{
    int linhas, colunas, qtdNull, i = 0, k = 0;
    int posNull[50];
    int tempL, tempC;
    char aux;
    int temp;

    FILE *fr;
    fr = fopen("espec_matriz.txt", "r");

    if (fr == NULL)
    {
        printf("Erro ao abrir o arquivo");
    }
    else
    {
        while (fscanf(fr, "%c", &aux) != EOF)
        {
            if (aux >= 48 && aux <= 57)
            {
                temp = aux - 48;
                i++;
            }

            switch (i)
            {
            case 1:
                linhas = temp;
                break;
            case 2:
                colunas = temp;
                break;
            case 3:
                qtdNull = temp;
                break;
            default:
                posNull[i - 4] = temp;
                break;
            }
        }
    }

    int mat[linhas][colunas];

    while (k < (qtdNull * 2))
    {
        tempL = posNull[k];
        tempC = posNull[k + 1];
        mat[tempL][tempC] = -1;
        k += 2;
    }

    FILE *fw;
    fw = fopen("matriz_saida.txt", "w");

    if (fr == NULL)
    {
        printf("Erro ao abrir o arquivo");
    }
    else
    {
        for (i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (mat[i][j] == -1)
                {
                    fprintf(fw, "0 ");
                }
                else
                {
                    fprintf(fw, "1 ");
                }
            }

            fprintf(fw, "\n");
        }
    }

    return 0;
}