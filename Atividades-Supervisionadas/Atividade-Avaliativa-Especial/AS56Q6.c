// 6. (1,25) (Tema: Arquivos, Definição de Tipos (struct) Alocação Dinâmica) Escreva um programa em C que leia um
// arquivo contendo o nome e o preço de diversos produtos (separados por linha), e calcule o total da compra. Deve-se
// criar uma estrutura (struct) Produtos, composta de nome e valor. Em seguida, deve-se criar um ponteiro para essa
// estrutura. Esse ponteiro será criado por Alocação Dinâmica e seu tamanho também incrementado por Alocação
// Dinâmica. Após a leitura do arquivo, deve-se imprimir a lista contendo nome e preço de cada produto e, ao final, o
// total da compra.

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
    int i = 0, n = 1, k = 0;
    char produto[50][100];
    char precoTemp[10];
    int len = 0;

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
            for (int j = strlen(produto[k]); j >= 0; j--)
            {
                if (i >= n)
                {
                    pdt = (produtos *)realloc(pdt, (n + 1) * sizeof(produtos));
                    n++;
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
