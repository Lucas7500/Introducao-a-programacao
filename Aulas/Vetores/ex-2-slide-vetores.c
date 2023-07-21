// Escreva um programa que le 10 numeros inteiros e os salva em um
// vetor. Em seguida o programa deve ler um outro numero inteiro C. O
// programa deve entao encontrar dois numeros de posicoes distintas do
// vetor cuja multiplicacao seja C e imprimi-los. Caso nao existam tais
// numeros, o programa deve informar isto.
// Exemplo: Se vetor = (2, 4, 5, −10, 7) e C = 35 entao o programa
// deve imprimir “5 e 7”. Se C = −1 entao o programa deve imprimir
// “Nao existem tais numeros”.

#include <stdio.h>

int main(void)
{
    int nums[10], C;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nDigite o valor de C: ");
    scanf("%d", &C);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (nums[i] * nums[j] == C)
            {
                printf("Numero: %d | Posicao: %d\n", nums[i], i);
                printf("Numero: %d | Posicao: %d\n", nums[j], j);
            }
        }
    }

    return 0;
}