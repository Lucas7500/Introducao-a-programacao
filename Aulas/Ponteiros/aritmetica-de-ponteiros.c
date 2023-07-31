#include <stdio.h>

int main()
{
    int v[3] = {10, 20, 30};
    int *pv;
    pv = v;

    printf("%d\n", *pv);
    printf("%d\n", *pv + 1);
    printf("%d\n", *(pv + 1));
    printf("%d\n", pv[1]);

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(pv + i));
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", pv[i]);
    }

    printf("%d", *pv++); // Imprime o valor atual de pv e incrementa pro prox valor

    return 0;
}
