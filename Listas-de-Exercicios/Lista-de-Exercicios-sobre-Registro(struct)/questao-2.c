// 2. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do
// aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
// a) Permita ao usuário entrar com os dados de 5 alunos.
// b) Encontre o aluno com maior nota da primeira prova.
// c) Encontre o aluno com maior média geral.
// d) Encontre o aluno com menor média geral
// e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.

#include <stdio.h>

#define True 1
#define False 0

typedef int Approved;

typedef struct
{
    int registration;
    char name[30];
    float notas[3];
    Approved approved;
} Alunos;

int main()
{
    // a)
    int tamVet;
    float highestGradeFT = 0, highestAvg = 0, lowestAvg = 0, avg;

    printf("Quantos alunos voce deseja registrar? ");
    scanf("%d%*c", &tamVet);
    printf("\n");

    Alunos alunos[tamVet];

    for (int i = 0; i < tamVet; i++)
    {
        printf("Aluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d%*c", &alunos[i].registration);

        printf("Nome: ");
        scanf("%[^\n]", alunos[i].name);

        for (int j = 0; j < 3; j++)
        {
            printf("Nota da prova %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    printf("\n");

    float sumGrades = 0;

    for (int i = 0; i < tamVet; i++)
    {
        if (alunos[i].notas[0] > highestGradeFT)
        {
            highestGradeFT = alunos[i].notas[0];
        }

        for (int j = 0; j < 3; j++)
        {
            sumGrades += alunos[i].notas[j];
        }

        avg = sumGrades / 3;

        if (avg > highestAvg)
        {
            highestAvg = avg;
        }

        if (avg < lowestAvg)
        {
            lowestAvg = avg;
        }

        if (avg >= 6)
        {
            alunos[i].approved = True;
        }
        else
        {
            alunos[i].approved = False;
        }
    }

    for (int i = 0; i < tamVet; i++)
    {
        if (alunos[i].approved == True)
        {
            printf("O aluno %s foi aprovado\n", alunos[i].name);
        }
        else
        {
            printf("O aluno %s foi reprovado\n", alunos[i].name);
        }
    }

    for (int i = 0; i < tamVet; i++)
    {
        if (alunos[i].notas[0] == highestGradeFT)
        {
            printf("O aluno com a maior nota na primeira prova foi o %s\n", alunos[i].name);
        }

        if (alunos[i].notas[0] == highestAvg)
        {
            printf("O aluno com a maior media foi o %s\n", alunos[i].name);
        }

        if (alunos[i].notas[0] == lowestAvg)
        {
            printf("O aluno com a menor media foi o %s\n", alunos[i].name);
        }
    }

    return 0;
}