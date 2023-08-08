// Cesar Caus Portilho e Lucas Moreira Iglesias

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char nome[100];
    float preco;
} produtos;

int main()
{
    char aux;
    char produto[50][100];
    char precoTemp[10];
    int i = 0, n = 1, k = 0, len = 0;

    // Cópia dos produtos do arquivo para o vetor de Strings produto
    FILE *fr = fopen("produtos.txt", "r");
    if (fr == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    else
    {
        while (fscanf(fr, "%c", &aux) != EOF)
        {
            if (aux == '\n')
            {
                produto[i][k] = '\0';
                i++;
                k = 0;
                continue;
            }

            produto[i][k] = aux;
            k++;
        }
    }

    len = i + 1;
    k = 0;
    i = 0;

    //
    produtos *pdt;
    pdt = (produtos *)malloc(n * sizeof(produtos));
    if (pdt == NULL)
    {
        printf("Nao ha memoria suficiente!");
    }
    else
    {
        for (int k = 0; k < len; k++)
        {
            // Ler cada produto de trás pra frente e o primeiro espaço que aparecer definirá a divisão entre o nome e o preço
            for (int j = strlen(produto[k]); j >= 0; j--)
            {
                // Alocação dinâmica
                if (i >= n)
                {
                    pdt = (produtos *)realloc(pdt, (n + 1) * sizeof(produtos));
                    if (pdt == NULL)
                    {
                        printf("Nao ha memoria suficiente!");
                        break;
                    }
                    else
                    {
                        n++;
                    }
                }

                if (produto[k][j] == ' ')
                {
                    for (int p = j + 1, idx = 0;; p++, idx++)
                    {
                        precoTemp[idx] = produto[k][p];

                        if (produto[k][p] == '\0')
                        {
                            break;
                        }
                    }

                    pdt[i].preco = atof(precoTemp);
                    produto[k][j] = '\0';
                    strcpy(pdt[i].nome, produto[k]);
                    i++;
                    break;
                }
            }
        }
    }

    float total = 0;

    for (int j = 0; j < len; j++)
    {
        printf("%s %.2f\n", pdt[j].nome, pdt[j].preco);
        total += pdt[j].preco;
    }

    printf("TOTAL DA COMPRA: %.2f\n", total);

    return 0;
}
