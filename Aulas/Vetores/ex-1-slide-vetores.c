// Escreva um programa que le 10 numeros ponto flutuante e os salva
// em um vetor. Em seguida o programa deve calcular a media dos
// valores armazenados no vetor e imprimir este valor.

#include <stdio.h>

int main()
{
    float nums[10], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &nums[i]);

        sum += nums[i];
    }

    printf("A media dos valores sera: %.2f", sum / 10.0);

    return 0;
}
