// Escreva um programa em C em que seja implementada uma função que calcule o desvio padrão cuja fórmula segue adiante.
// O protótipo da função é o seguinte:
// float calcDesvioPadrao(int n);

// Imagem da formula: https://prnt.sc/mcsFkGceQBZu
// Obs: A fórmula está sim errada, na fórmula correta a divisão seria feita por n e não por 4
// Para que meu código represente a fórmula correta, só mudar na linha 47 o 4 por n

#include <stdio.h>
#include <math.h>
#define N 10

int vet[N];

float calcDesvioPadrao(int);

int main()
{
    for (int i = 0; i < N; i++)
    {
        vet[i] = i;
    }

    printf("%f\n", calcDesvioPadrao(N));

    return 0;
}

float calcDesvioPadrao(int n)
{
    float media, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += vet[i];
    }

    media = sum / n;

    sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += pow((vet[i] - media), 2);
    }

    return sqrt(sum / 4);
}
