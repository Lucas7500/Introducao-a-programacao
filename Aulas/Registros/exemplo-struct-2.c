#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[45];
    int idade;
    char sexo;
};

int main()
{
    struct Aluno a,
        b = {"Maria", 20, 'F'},
        c = {idade : 20, nome : "Juca", sexo : 'M'};

    strcpy(a.nome, "Jose");
    a.idade = 17;
    a.sexo = 'M';

    printf("Dados do aluno a:\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Sexo: %c\n", a.sexo);

    printf("\nDados do aluno b:\n");
    printf("Nome: %s\n", b.nome);
    printf("Idade: %d\n", b.idade);
    printf("Sexo: %c\n", b.sexo);

    printf("\nDados do aluno c:\n");
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
    printf("Sexo: %c\n", c.sexo);
    system("pause > nul");
}
