// 1. Escreva um programa em C que solicite ao usuário a idade de cada componente de um grupo de pessoas. A
// entrada de dados termina quando o usuário digitar o número 0 (que não corresponde à idade de nenhuma
// pessoa).
// O programa deve imprimir:
// a) a média das idades (com precisão de uma casa decimal);
// b) a maior idade;
// c) a menor idade;
// d) a quantidade de pessoas maiores de idade (ou seja, quantas pessoas tem idade igual ou maior que 18 anos).

// Nota: 1.50/1.66
// Motivo: problema quando o 1 numero é zero
// Corrigido - Linha 54

#include <stdio.h>

int main(void)
{
    // Siglas: biggest age, smallest age, legal age count, average
    int age = 1, count = 0, bAge, sAge, lAgeCount = 0, sumOfAges = 0;
    float avg = 0;

    while (age > 0)
    {
        printf("Digite a idade da pessoa %d: ", count + 1);
        scanf("%d", &age);

        if (!age)
        {
            break;
        }
        else if (!count)
        {
            bAge = age;
            sAge = age;
        }
        else if (bAge < age)
        {
            bAge = age;
        }
        else if (sAge > age)
        {
            sAge = age;
        }

        if (age >= 18)
        {
            lAgeCount++;
        }

        sumOfAges += age;
        count++;
    }

    if (count)
    {
        avg = sumOfAges / (float)count;

        // a)
        printf("A media das idade eh: %.1f\n", avg);
        // b)
        printf("A maior idade eh: %d\n", bAge);
        // c)
        printf("A menor idade eh: %d\n", sAge);
        // d)
        printf("A quantidade de pessoas maiores de idade eh: %d", lAgeCount);
    }

    return 0;
}