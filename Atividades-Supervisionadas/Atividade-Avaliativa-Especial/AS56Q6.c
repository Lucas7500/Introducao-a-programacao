// 6. (1,25) (Tema: Arquivos, Definição de Tipos (struct) Alocação Dinâmica) Escreva um programa em C que leia um
// arquivo contendo o nome e o preço de diversos produtos (separados por linha), e calcule o total da compra. Deve-se
// criar uma estrutura (struct) Produtos, composta de nome e valor. Em seguida, deve-se criar um ponteiro para essa
// estrutura. Esse ponteiro será criado por Alocação Dinâmica e seu tamanho também incrementado por Alocação
// Dinâmica. Após a leitura do arquivo, deve-se imprimir a lista contendo nome e preço de cada produto e, ao final, o
// total da compra.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    float preco;
} produtos;

int main()
{
    FILE *fr = fopen("produtos.txt", "r");
    if (fr == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    produtos *pdt;
    pdt = (produtos *)malloc(sizeof(produtos));
    if (pdt == NULL)
    {
        printf("Erro");
        return 1;
    }

    while (1)
    {
    }

    return 0;
}
