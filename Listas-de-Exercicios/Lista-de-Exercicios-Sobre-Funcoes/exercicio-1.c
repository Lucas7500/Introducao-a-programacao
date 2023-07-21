// 1. Escreva um programa em C que sejam lidos dois números em ponto flutuante, X e Y, e sejam feitas
// chamadas a funções descritas abaixo, que deverão ser implementadas, e imprima, na função main, o resultado
// retornado por elas.
// a) Uma função que receba X e Y como entrada e retorne o maior deles;
// b) Uma função que receba X e Y como entrada e retorne o menor deles;
// c) Uma função que receba X e Y como entrada e retorne a média aritmética deles;
// d) Uma função que receba X e Y como entrada e retorne o produto entre eles;
// e) Uma função que receba X e Y como entrada e retorne a soma entre eles;
// f) Uma função que receba X e Y como entrada e retorne a subtração entre eles (X-Y);
// g) Uma função que receba X e Y como entrada e retorne a divisão entre X e Y. Incluir teste nessa função para
// impedir divisão por zero;
// h) Uma função que receba X e Y como entrada e retorne X elevado a Y.

#include <stdio.h>
#include <math.h>

float highest(float, float);
float smallest(float, float);
float average(float, float);
float product(float, float);
float sum(float, float);
float subtraction(float, float);
float division(float, float);
float potentiation(float, float);

int main()
{
    float x, y;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("\n");
    printf("O maior valor eh: %.2f\n", highest(x, y));
    printf("O menor valor eh: %.2f\n", smallest(x, y));
    printf("A media aritmetica simples desses valores eh: %.2f\n", average(x, y));
    printf("O produto desses valores eh: %.2f\n", product(x, y));
    printf("A soma desses valores eh: %.2f\n", sum(x, y));
    printf("A subtracao de x por y eh: %.2f\n", subtraction(x, y));
    if (y != 0)
    {
        printf("A divisao de x por y: %.2f\n", division(x, y));
    }
    else
    {
        printf("Nao eh possivel dividir por 0\n");
    }
    printf("A potenciacao de x por y eh: %.2f\n", potentiation(x, y));

    return 0;
}

float highest(float x, float y)
{
    return x > y ? x : y;
}

float smallest(float x, float y)
{
    return x > y ? y : x;
}

float average(float x, float y)
{
    return (x + y) / 2;
}

float product(float x, float y)
{
    return x * y;
}

float sum(float x, float y)
{
    return x + y;
}

float subtraction(float x, float y)
{
    return x - y;
}

float division(float x, float y)
{
    return x / y;
}

float potentiation(float x, float y)
{
    return pow(x, y);
}
