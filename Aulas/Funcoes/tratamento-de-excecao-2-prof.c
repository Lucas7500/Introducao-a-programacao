#include <stdio.h>
#include <stdlib.h>

float divide(float, float);

int main()
{
    float X, Y;

    printf("Divisao com \"tratamento de excecao\" - v1:\n");
    printf("Digite dois numeros reais: ");
    scanf("%f%f", &X, &Y);

    // 3. Chamada ou invocacao da funcao
    printf("%f / %f = %f", X, Y, divide(X, Y));
    system("pause > nul");
}
float divide(float X, float Y)
{
    // "Tramento de excecao"
    if (Y == 0)
    {
        printf("Tentativa de divisao por zero!\n");
        do
        {
            printf("Informe um valor diferente de zero para Y: ");
            scanf("%f", &Y);
        } while (Y == 0);
    }
    return X / Y;
}
