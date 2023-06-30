// 2. Decimal para binário
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long int dec, bin = 0, cont = 0;

    printf("Digite um numero inteiro: ");
    scanf("%li", &dec);

    while (dec > 0)
    {
        if (dec % 2 == 1)
        {
            bin += 1 * pow(10, cont);
        }
        else if (dec == 1)
        {
            bin += 1 * cont;
        }

        dec /= 2;
        cont++;
    }

    printf("%li\n", bin);
}
