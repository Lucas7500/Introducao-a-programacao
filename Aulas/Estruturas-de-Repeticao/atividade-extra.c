#include <stdio.h>

int main()
{
    float value, comission;
    int min = 39;

    printf("Digite o valor da transacao: ");
    scanf("%f", &value);

    if (value <= 2500)
    {
        comission = 30 + (0.017 * value);

        if (comission < min)
        {
            comission = min;
        }
    }
    else if (value > 2500 && value <= 6250)
    {
        comission = 56 + (0.0066 * value);
    }
    else if (value > 6250 && value <= 20000)
    {
        comission = 76 + (0.0034 * value);
    }
    else if (value > 20000 && value <= 50000)
    {
        comission = 100 + (0.0022 * value);
    }
    else if (value > 50000 && value <= 500000)
    {
        comission = 155 + (0.0011 * value);
    }
    else
    {
        comission = 255 + (0.0009 * value);
    }

    printf("O valor da comissao eh de: %.2f\n", comission);

    return 0;
}