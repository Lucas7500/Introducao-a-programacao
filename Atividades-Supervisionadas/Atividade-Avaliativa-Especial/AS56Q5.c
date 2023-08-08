// Cesar Caus Portilho e Lucas Moreira Iglesias

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    long int matricula;
    char nome[50];
    float notas[4];
    float notaMedia;
} tipoAluno;

int main()
{
    tipoAluno vetHistorico[3];

    vetHistorico[0].matricula = 202310;
    strcpy(vetHistorico[0].nome, "Roberto Kepler");
    vetHistorico[0].notas[0] = 05.0;
    vetHistorico[0].notas[1] = 05.0;
    vetHistorico[0].notas[2] = 05.0;
    vetHistorico[0].notas[3] = 05.0;

    vetHistorico[1].matricula = 202301;
    strcpy(vetHistorico[1].nome, "Arnald Crush  ");
    vetHistorico[1].notas[0] = 10.0;
    vetHistorico[1].notas[1] = 07.0;
    vetHistorico[1].notas[2] = 09.0;
    vetHistorico[1].notas[3] = 10.0;

    vetHistorico[2].matricula = 202335;
    strcpy(vetHistorico[2].nome, "Nika Costa    ");
    vetHistorico[2].notas[0] = 08.0;
    vetHistorico[2].notas[1] = 10.0;
    vetHistorico[2].notas[2] = 10.0;
    vetHistorico[2].notas[3] = 10.0;

    for (int i = 0; i < 3; i++)
    {
        float sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum += vetHistorico[i].notas[j];
        }

        vetHistorico[i].notaMedia = sum / 4.0;
    }

    printf("MATRICULA\tNOME\t\t\tNOTAS\t\t\t\tNOTA MEDIA");

    for (int i = 0; i < 3; i++)
    {
        printf("\n%li\t\t\%s\t\t\%.2f %.2f %.2f %.2f\t\t%.2f",
               vetHistorico[i].matricula,
               vetHistorico[i].nome,
               vetHistorico[i].notas[0],
               vetHistorico[i].notas[1],
               vetHistorico[i].notas[2],
               vetHistorico[i].notas[3],
               vetHistorico[i].notaMedia);
    }

    printf("\n\n");

    FILE *arquivo = fopen("historico.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "MATRICULA\tNOME\t\t\tNOTAS\t\t\t\tNOTA MEDIA");

    for (int i = 0; i < 3; i++)
    {
        fprintf(arquivo, "\n");
        fprintf(arquivo, "%li\t\t", vetHistorico[i].matricula);
        fprintf(arquivo, "%s\t\t", vetHistorico[i].nome);
        fprintf(arquivo, "%.2f %.2f %.2f %.2f\t\t",
                vetHistorico[i].notas[0],
                vetHistorico[i].notas[1],
                vetHistorico[i].notas[2],
                vetHistorico[i].notas[3]);
        fprintf(arquivo, "%.2f\t", vetHistorico[i].notaMedia);
    }

    fclose(arquivo);

    printf("Arquivo historico.txt criado e preenchido com sucesso!\n\n");

    return 0;
}