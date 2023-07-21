#include <stdio.h>

typedef struct
{
    char nome[45];
    int idade;
    char sexo;
} Aluno;

int main()
{
    Aluno vetAlunos[50];

    int i, quantAlunos;

    printf("Quantidade de alunos: ");
    scanf("%d%*c", &quantAlunos);

    for (i = 0; i < quantAlunos; i++)
    {
        printf("Nome do aluno: ");
        scanf("%[^\n]", vetAlunos[i].nome);

        printf("Idade do aluno: ");
        scanf("%d%*c", &vetAlunos[i].idade);

        printf("Sexo do aluno: ");
        scanf("%c%*c", &vetAlunos[i].sexo);

        printf("\n");
    }

    printf("Relacao de alunos cadastrados:\n");

    for (i = 0; i < quantAlunos; i++)
    {
        printf("Nome: %s\n", vetAlunos[i].nome);
        printf("Idade: %d\n", vetAlunos[i].idade);
        printf("Sexo: %c\n", vetAlunos[i].sexo);
        printf("\n");
    }

    return 0;
}
