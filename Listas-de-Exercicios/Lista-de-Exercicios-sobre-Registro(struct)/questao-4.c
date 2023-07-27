// 4. Escreva um programa em C que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e
// preço. Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este processo
// até que seja lido um valor p = 0.

#include <stdio.h>
#define tamVet 5

typedef struct
{
    char brand[16];
    int year;
    float price;
} Car;

int main()
{
    Car cars[tamVet] = {{"Chevrolet", 2014, 21600},
                        {"Renault", 2011, 18670},
                        {"Audi", 2016, 53450},
                        {"Fiat", 1995, 8000},
                        {"Jeep", 2013, 43000}};

    float p;

    while (1)
    {
        printf("p: ");
        scanf("%f", &p);
        printf("\n");

        if (!p)
        {
            break;
        }

        for (int i = 0; i < tamVet; i++)
        {
            if (cars[i].price < p)
            {
                printf("Marca: %s\n", cars[i].brand);
                printf("Ano: %d\n", cars[i].year);
                printf("Preco: %.2f\n", cars[i].price);
                printf("\n");
            }
        }
    }

    return 0;
}