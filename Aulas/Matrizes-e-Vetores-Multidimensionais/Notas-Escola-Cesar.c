// Código feito pelo meu amigo César Caus
#include <stdio.h>
#define MAX 100
#define NUM 2

int main()
{

    float notasTurma[NUM][4];
    float notaTurma[NUM];
    char alunos[NUM][MAX];
    int i, k;

    for (i = 0; i < NUM; i++)
    {
        printf("\nNome do aluno: ");
        scanf("%[^\n]%*c", alunos[i]);

        for (k = 0; k < 4; k++)
        {

            notasTurma[i][k];

            printf("Nota %i:", k + 1);
            scanf("%f%*c", &notasTurma[i][k]);

            notaTurma[i] += notasTurma[i][k];
        }
    }

    for (i = 0; i < NUM; i++)
    {
        notaTurma[i] = notaTurma[i] / 4;

        printf("\nNota final do %s: %.2f", alunos[i], notaTurma[i]);
    }
    return 0;
}
