#include <stdio.h>
#include <math.h>

int main()
{
    int bin[100], dec;

    printf("Digite um numero decimal: ");
    scanf("%d", &dec);

    int bits = ceil(log2(dec));

    for (int i = 0; i < bits; i++)
    {
        bin[i] = dec % 2;
        dec /= 2;

        if (dec == 0)
        {
            break;
        }
    }

    for (int i = bits - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }

    return 0;
}
