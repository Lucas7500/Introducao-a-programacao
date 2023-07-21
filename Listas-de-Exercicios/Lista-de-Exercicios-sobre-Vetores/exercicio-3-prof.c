#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 10

int main()
{
    float vetDec[MAX];
    float numDecimal;
    float somaValores = 0, mediaArit;

    int parteFrac;
    int quantAlg;
    int contNumMenorQMedia = 0;
    int contNumMaiorQMedia = 0;
    int contNumIgualAMedia = 0;

    int i;

    srand(time(NULL)); // Gerar a semente

    // Gerar numeros decimais
    for (i = 0; i < MAX; i++)
    {
        numDecimal = rand() % 100;
        parteFrac = rand() % 100;
        quantAlg = log10(parteFrac) + 1;
        numDecimal += (float)parteFrac * (pow(10, -quantAlg));
        vetDec[i] = numDecimal;

        printf("%.2f ", vetDec[i]);
        // Acumulacao dos valores do vetor
        somaValores += vetDec[i];
    }
    // Calcular media aritmetica
    mediaArit = somaValores / MAX;

    // Realizar levantamento estatistico
    for (i = 0; i < MAX; i++)
    {
        // Quantificar valores menores que a media
        if (vetDec[i] < mediaArit)
            contNumMenorQMedia++;
        // Quantificar valores maiores que a media
        if (vetDec[i] > mediaArit)
            contNumMaiorQMedia++;
        // Quantificar valores maiores que a media
        if (vetDec[i] == mediaArit)
            contNumIgualAMedia++;
    }

    // Imprimir resultados estatisticos
    printf("\nMedia aritmetica: %f\n", mediaArit);
    printf("Quant. de valores < media: ");
    printf("%d\n", contNumMenorQMedia);

    printf("Quant. de valores > media: ");
    printf("%d\n", contNumMaiorQMedia);

    printf("Quant. de valores = media: ");
    printf("%d\n", contNumIgualAMedia);
}
