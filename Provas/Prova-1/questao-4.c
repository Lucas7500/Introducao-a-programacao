// Escreva um programa em C que leia uma quantidade de segundos e os converta para dias, horas, minutos e
// segundos. (Observação: 1 hora tem 3600 segundos).

// Exemplo 1:
// Entrada: 7322 (segundos)
// Saída: 0 dia(s) 2 hora(s) 2 minuto(s) 2 segundo(s)

// Exemplo 2:
// Entrada: 2000 (segundos)
// Saída: 0 dia(s) 0 hora(s) 33 minuto(s) 20 segundo(s)

// Exemplo 3:
// Entrada: 100000 (segundos)
// Saída: 1 dia(s) 3 hora(s) 46 minuto(s) 40 segundo(s)

// Nota: 1.0/1.0

#include <stdio.h>

int main()
{
    int num, day, hour, min, sec;
    day = 0;
    hour = 0;
    min = 0;
    sec = 0;

    scanf("%d", &num);

    if (num >= 86400)
    {
        day = num / 86400;
        num = num - (day * 86400);
    }

    if (num >= 3600)
    {
        hour = num / 3600;
        num = num - (hour * 3600);
    }

    if (num >= 60)
    {
        min = num / 60;
        num = num - (min * 60);
    }

    if (num > 0)
    {
        sec = num;
    }

    printf("%d %d %d %d", day, hour, min, sec);

    return 0;
}
