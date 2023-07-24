// 1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// a) Horário: composto de hora, minutos e segundos.
// b) Data: composto de dia, mês e ano.
// c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
// d) Escreva um programa em C que seja uma agenda de compromissos, que crie e leia um vetor de tamanho 5
// com essas estruturas.

#include <stdio.h>

// a)
typedef struct
{
    int hour;
    int min;
    int sec;
} Time;

// b)
typedef struct
{
    int day;
    int month;
    int year;
} Date;

// c)
typedef struct
{
    Date date;
    Time time;
    char description[50];
} Commitment;

int main()
{
    int tamVet;

    printf("Quantos compromissos voce deseja registrar? ");
    scanf("%d%*c", &tamVet);
    printf("\n");

    // d)
    Commitment schedule[tamVet];

    for (int i = 0; i < tamVet; i++)
    {
        printf("Compromisso %d\n", i + 1);

        printf("Data(dd mm yyyy): ");
        scanf("%d %d %d%*c", &schedule[i].date.day, &schedule[i].date.month, &schedule[i].date.year);

        printf("Horario(hh mm ss): ");
        scanf("%d %d %d%*c", &schedule[i].time.hour, &schedule[i].time.min, &schedule[i].time.sec);

        printf("Descricao: ");
        scanf("%[^\n]", schedule[i].description);

        printf("\n");
    }

    for (int i = 0; i < tamVet; i++)
    {
        printf("Compromisso %d\n", i + 1);
        printf("%s\n", schedule[i].description);
        printf("Data: %02d/%02d/%d\n", schedule[i].date.day, schedule[i].date.month, schedule[i].date.year);
        printf("Horario: %02d:%02d:%02d\n", schedule[i].time.hour, schedule[i].time.min, schedule[i].time.sec);

        printf("\n");
    }

    return 0;
}
