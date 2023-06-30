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

#include <conio.h>
#include <stdio.h>

int main()
{
    long int segundos;
    int dias, horas, minutos;

    printf("Total de segundos: ");
    scanf("%ld", &segundos);

    dias = segundos / 86400;
    segundos %= 86400;

    horas = segundos / 3600;
    segundos %= 3600;

    minutos = segundos / 60;
    segundos %= 60;

    printf("%d dia(s) %d hora(s) %d minuto(s) %d segundo(s)\n", dias, horas, minutos, segundos);
}
