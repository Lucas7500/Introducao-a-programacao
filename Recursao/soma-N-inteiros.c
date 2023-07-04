#include <stdio.h>

int somaN(int, int);

int main()
{
    int inf, sup;

    printf("Digite o limite inferior: ");
    scanf("%d", &inf);

    printf("Digite o limite superior: ");
    scanf("%d", &sup);

    int soma = somaN(inf, sup);

    printf("A soma dos inteiros entre %d e %d eh: %d\n", inf, sup, soma);

    return 0;
}

int somaN(int inf, int sup)
{
    if (inf >= sup)
    {
        return sup;
    }

    return (inf + somaN(inf + 1, sup));
}
