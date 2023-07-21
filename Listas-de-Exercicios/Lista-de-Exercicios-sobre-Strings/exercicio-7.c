// 7. Escreva um programa em C que preencha uma matriz de string com os modelos de cinco carros
// (exemplos de modelos: Fusca, Gol, Vectra etc.). Em seguida, preencha um vetor com o consumo
// desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e
// mostre:
// a) O modelo de carro mais econômico;
// b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer
// uma distância de 1.000 quilômetros.

#include <stdio.h>
#include <string.h>

// 1l -> 10.7km
// xl -> 1000km

int main()
{
    char car[5][10] = {"Fusca", "Gol", "Up", "Uno", "Celta"};
    float consumption[5][1] = {{10.7}, {13.3}, {14.2}, {11.6}, {13.8}};

    char mostEconomical[10];
    float highestValue = 0;

    int k;

    // a)
    for (int i = 0; i < 5; i++)
    {
        if (consumption[i][0] > highestValue)
        {
            highestValue = consumption[i][0];

            for (k = 0; car[i][k] != '\0'; k++)
            {
                mostEconomical[k] = car[i][k];
            }

            mostEconomical[k] = '\0';
        }
    }

    printf("O carro mais economico da lista eh o %s, que faz %.1f km/l.\n", mostEconomical, highestValue);

    printf("\n");

    // b)

    for (int i = 0; i < 5; i++)
    {
        printf("Para percorrer 1000km de distancia, o %s consome %.2f litros de combustivel.\n", car[i], 1000 / consumption[i][0]);
    }

    return 0;
}
