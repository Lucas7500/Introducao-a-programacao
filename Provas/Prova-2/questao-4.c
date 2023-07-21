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

// Nota: 2.5/2.5

#include <stdio.h>

int main(void)
{
    int codigo = 1, qtde;
    float valorUnit, valorTotal = 0, valorCompra = 0;

    while (codigo > 0)
    {
        printf("Codigo do produto: ");
        scanf("%d", &codigo);

        if (codigo == 0)
        {
            printf("Valor total da compra: %.2f\n", valorCompra);
            break;
        }

        printf("Quantidade do produto: ");
        scanf("%d", &qtde);

        printf("Valor Unitario do produto: ");
        scanf("%f", &valorUnit);

        valorTotal = valorUnit * qtde;
        printf("Valor total do produto: %.2f\n\n", valorTotal);

        valorCompra += valorTotal;
    }

    return 0;
}
