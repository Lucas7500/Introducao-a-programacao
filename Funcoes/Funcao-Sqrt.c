#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PRECISAO 10E-10

double sqrtIter(double, double, double);
double Sqrt(double);

int main()
{
    double n, sqrtN;

    printf("Digite o valor de n: ");
    scanf("%lf", &n);

    sqrtN = Sqrt(n);

    printf("Raiz de %lf = %lf\n", n, sqrtN);
}

double sqrtIter(double n, double limInf, double limSup)
{
    double termoMedio;

    while (1)
    {
        termoMedio = (limInf + limSup) / 2;

        if (fabs(termoMedio * termoMedio - n) < PRECISAO)
        {
            break;
        }
        else if (termoMedio * termoMedio < n)
        {
            limInf = termoMedio;
        }
        else if (termoMedio * termoMedio > n)
        {
            limSup = termoMedio;
        }
    }
    return termoMedio;
}

double Sqrt(double n)
{
    return sqrtIter(n, 0, n);
}