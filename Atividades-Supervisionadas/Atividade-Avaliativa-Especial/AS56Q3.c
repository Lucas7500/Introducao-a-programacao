// Cesar Caus Portilho e Lucas Moreira Iglesias

#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    char mes[20];
    int ano;
} t_Data;

void atribuirData(t_Data *data);

int main()
{
    t_Data DataAtual;

    atribuirData(&DataAtual);

    printf("%d de %s de %d\n", DataAtual.dia, DataAtual.mes, DataAtual.ano);

    return 0;
}

void atribuirData(t_Data *data)
{
    (*data).dia = 13;
    strcpy((*data).mes, "Agosto");
    (*data).ano = 2023;
}