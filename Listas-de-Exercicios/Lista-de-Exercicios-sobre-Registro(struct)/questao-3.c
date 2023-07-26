// 3. Utilizando uma estrutura, escreva um programa em C que permita a entrada de nome, endereço e telefone de
// 5 pessoas e os imprima em ordem alfabética

#include <stdio.h>
#include <ctype.h>

typedef struct
{
    char nome[45];
    char endereco[45];
    int telefone;
} Dados;

int main()
{
    int tamVet;

    printf("Quantas pessoas voce deseja registrar os dados? ");
    scanf("%d%*c", &tamVet);

    Dados dados[tamVet];

    for (int i = 0; i < tamVet; i++)
    {
        printf("Pessoa %d\n", i + 1);

        printf("Nome: ");
        scanf("%[^\n]%*c", dados[i].nome);

        printf("endereco: ");
        scanf("%[^\n]%*c", dados[i].endereco);

        printf("telefone: ");
        scanf("%d%*c", &dados[i].telefone);

        printf("\n");
    }

    Dados temp;
    int k = 0;

    for (int i = 0; i < tamVet; i++)
    {
        for (int j = i + 1; j < tamVet; j++)
        {
            if (toupper(dados[i].nome[k]) > toupper(dados[j].nome[k]))
            {
                temp = dados[i];
                dados[i] = dados[j];
                dados[j] = temp;
            }
            else if (toupper(dados[i].nome[k]) == toupper(dados[j].nome[k]))
            {
                while (dados[i].nome[k] != '\0')
                {
                    if (toupper(dados[i].nome[k]) > toupper(dados[j].nome[k]))
                    {
                        temp = dados[i];
                        dados[i] = dados[j];
                        dados[j] = temp;
                        break;
                    }

                    k++;
                }
            }
        }

        k = 0;
    }

    for (int i = 0; i < tamVet; i++)
    {
        printf("Registro %d\n", i + 1);
        printf("Nome: %s\n", dados[i].nome);
        printf("endereco: %s\n", dados[i].endereco);
        printf("telefone: %d\n", dados[i].telefone);
        printf("\n");
    }

    return 0;
}
