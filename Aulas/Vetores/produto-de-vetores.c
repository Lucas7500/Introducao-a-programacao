#include <stdio.h>

int main()
{
    double vetor1[5], vetor2[5], resultado;

    for (int i = 0; i < 5; i++)
    {
        printf("Entre com o valor da posição %d para vetor 1: ", i);
        scanf("%lf", &vetor1[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Entre com o valor da posição %d para vetor 2: ", i);
        scanf("%lf", &vetor2[i]);
    }

    // calculando o produto interno
    resultado = 0.0;

    for (int i = 0; i < 5; i++)
    {
        resultado += vetor1[i] * vetor2[i];
    }

    printf("\nO produto interno eh: %lf\n", resultado);

    return 0;
}
