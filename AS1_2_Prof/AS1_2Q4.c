// Calcular a frequência de algarismos numéricos
// Escreva um programa que leia um inteiro positivo n, em seguida leia n números de apenas um algarismo. Seu
// programa deve computar e imprimir a frequência de ocorrência de cada um deles.
// Por exemplo:
// ENTRADA:
// Para n = 7
// Números lidos: 1 2 3 1 4 2 5
// SAÍDA:
// Frequência do número 1: 2
// Frequência do número 2: 2
// Frequência do número 3: 1
// Frequência do número 4: 1
// Frequência do número 5: 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num;
    int contAlg0 = 0, contAlg1 = 0, contAlg2 = 0, contAlg3 = 0,
        contAlg4 = 0, contAlg5 = 0, contAlg6 = 0, contAlg7 = 0,
        contAlg8 = 0, contAlg9 = 0;
    int i;

    printf("Quant. de numeros a serem lidos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%do. numero: ", i + 1);
        scanf("%d", &num);

        switch (num)
        {
        case 0:
            contAlg0++;
            break;
        case 1:
            contAlg1++;
            break;
        case 2:
            contAlg2++;
            break;
        case 3:
            contAlg3++;
            break;
        case 4:
            contAlg4++;
            break;
        case 5:
            contAlg5++;
            break;
        case 6:
            contAlg6++;
            break;
        case 7:
            contAlg7++;
            break;
        case 8:
            contAlg8++;
            break;
        case 9:
            contAlg9++;
            break;
        }
    }

    printf("\n");

    if (contAlg0)
        printf("Frequencia do numero 0: %d\n", contAlg0);
    if (contAlg1)
        printf("Frequencia do numero 1: %d\n", contAlg1);
    if (contAlg2)
        printf("Frequencia do numero 2: %d\n", contAlg2);
    if (contAlg3)
        printf("Frequencia do numero 3: %d\n", contAlg3);
    if (contAlg4)
        printf("Frequencia do numero 4: %d\n", contAlg4);
    if (contAlg5)
        printf("Frequencia do numero 5: %d\n", contAlg5);
    if (contAlg6)
        printf("Frequencia do numero 6: %d\n", contAlg6);
    if (contAlg7)
        printf("Frequencia do numero 7: %d\n", contAlg7);
    if (contAlg8)
        printf("Frequencia do numero 8: %d\n", contAlg8);
    if (contAlg9)
        printf("Frequencia do numero 9: %d\n", contAlg9);
}
