#include <stdio.h>

int main()
{
    float notas[3] = {9.0, 10.0, 4.0};
    float novaNota;
    int pos;

    for (int i = 0; i < 3; i++)
    {
        printf("notas[%d]: %.1f\n", i, notas[i]);
    }

    printf("\nPosicao da nota a ser alterada: ");
    scanf("%d", &pos);
    printf("Qual nota sera colocada no lugar? ");
    scanf("%f", &novaNota);
    notas[pos] = novaNota;

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("notas[%d]: %.1f\n", i, notas[i]);
    }

    return 0;
}
