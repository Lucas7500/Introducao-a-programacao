#include <stdio.h>  // printf, scanf
#include <stdlib.h> // system
#include <ctype.h>  // toupper
#include <malloc.h> // malloc, realloc
typedef struct
{
    int cod;
    char nome[40];
    char unidMedida[10];
    float preco;
} tipoProduto;

tipoProduto vetProdutos[] = {
    {10, "LAPIS PRETO NR. 1 FABER CASTEL", "unid.", 2.70},
    {100, "RESMA DE PAPEL A4", "unid.", 30.0},
    {127, "AGUA MINERAL", "litro", 3.50}};

int main()
{
    tipoProduto *pProdutos;
    int n = 1, i = 0;

    // void *malloc(size_t size);
    pProdutos = (tipoProduto *)malloc(n * sizeof(tipoProduto));

    if (pProdutos == NULL)
        printf("Nao ha memoria suficiente!");
    else
    {
        do
        {
            printf("Codigo do %do. produto (cod <= 0 para sair): ", i + 1);

            scanf("%d%*c", &(pProdutos[i].cod));
            if (pProdutos[i].cod <= 0)
                break;
            printf("Nome do produto: ");
            scanf("%[^\n]%*c", pProdutos[i].nome);
            printf("Unidade de medida do produto: ");
            scanf("%[^\n]%*c", pProdutos[i].unidMedida);
            printf("Preco do produto: ");
            scanf("%f%*c", &pProdutos[i].preco);

            i++;

            pProdutos = (tipoProduto *)realloc(pProdutos, (n + 1) * sizeof(tipoProduto));
            if (pProdutos == NULL)
            {
                printf("Nao ha memoria suficiente!");
                break;
            }
            else
            {
                n++;
            }
        } while (1);
    }
    n--;

    printf("\nProdutos cadastrados:\n");
    printf("%-6s%-41s%-11s%-5s\n", "COD.", "NOME", "UNIDADE", "PRECO");
    for (i = 0; i < n; i++)
    {
        printf("%-5d ", pProdutos[i].cod);
        printf("%-41s", pProdutos[i].nome);
        printf("%-11s", pProdutos[i].unidMedida);
        printf("%-5.2f\n", pProdutos[i].preco);
    }
    /*
    // Somente para ajustar a formata��o
    n = 3;
      printf("\nProdutos cadastrados:\n");
    printf("%-6s%-41s%-11s%-5s\n", "COD.", "NOME", "UNIDADE", "PRECO" );
      for (i=0; i<n; i++) {
      printf("%-5d ", vetProdutos[i].cod);
      printf("%-41s", vetProdutos[i].nome);
      printf("%-11s", vetProdutos[i].unidMedida);
      printf("%-5.2f\n", vetProdutos[i].preco);
    }
    */

    free(pProdutos);

    return 0;
}
