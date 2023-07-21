#include <stdio.h>
#include <stdlib.h>

float divide(float, float);

int main()
{
    float X, Y, div;
    printf("Divisao com \"tratamento de excecao\" - v2:\n");
    printf("Numerador: ");
    scanf("%f", &X);

    // Rotulo try:
    try : printf("Denominador: ")
        ;
    scanf("%f", &Y);

    // 3. Chamada ou invocacao da funcao
    div = divide(X, Y);

    // Rotulo catch
    catch : if (div == 0) goto try;

// Rotulo finally
finally:
    printf("%f / %f = %f", X, Y, divide(X, Y));

    system("pause > nul");
}

float divide(float X, float Y)
{
    if (Y == 0)
    {
        printf("Tentativa de divisao por zero!\n");
        return;
    }
    return X / Y;
}

/*
float divide(float X, float Y)
{
    if (Y == 0) {
        printf("Tentativa de divisao por zero!\n");
        do {
            printf("Informe um valor diferente de zero para Y: ");
            scanf("%f", &Y);
        } while (Y == 0);
    }
    return X/Y;
}
*/
