// Escreva um programa em C que leia o código do produto, quantidade do produto, valor unitário do produto e
// calcule e imprima o valor total do produto enquanto código do produto > 0. Ao final, deve ser impresso o valor total da compra.

// Importante: Quando o código do produto for igual a 0, nada mais deve ser lido ou calculado então,
// o programa deve sair do laço e exibir o valor total da compra.

// Exemplo do programa em execução:
// Codigo do Produto: 101
// Quantidade do Produto: 2
// Valor Unitario do Produto: 10.00
// Valor Total do Produto: 20.00

// Codigo do Produto: 300
// Quantidade do Produto: 4
// Valor Unitario do Produto: 2.50
// Valor Total do Produto: 10.00

// Codigo do Produto: 0
// Valor total da compra: 30.00

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codProd, quantProd;
    float valorUnitProd, valorTotalProd = 0, valorTotalCompra = 0;

    while (1)
    {
        printf("Codigo do produto: ");
        scanf("%d", &codProd);

        if (codProd == 0)
            break;

        printf("Quantidade do Produto: ");
        scanf("%d", &quantProd);

        printf("Valor Unitario do Produto: ");
        scanf("%f", &valorUnitProd);

        valorTotalProd = valorUnitProd * quantProd;
        printf("Valor Total do Produto: %.2f\n\n", valorTotalProd);

        valorTotalCompra += valorTotalProd;
    }

    printf("Valor total da compra: %.2f\n", valorTotalCompra);
}
