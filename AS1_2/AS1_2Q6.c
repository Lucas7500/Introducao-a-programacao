// Escreva um programa em C que receba o salário de um funcionário chamado Carlos. Sabe-se que outro funcionário, João, tem salário
// equivalente a um terço do salário de Carlos. Carlos aplicará seu salário integralmente na caderneta de poupança, que está rendendo
// 2% ao mês, e João aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. O programa deverá
// calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor
// pertencente a Carlos.

// Nota: 1.66/1.66

#include <stdio.h>

int main(void)
{
    float moneyC, moneyJ;
    // tempo em meses
    int time = 0;

    printf("Digite o salario de Carlos: ");
    scanf("%f", &moneyC);

    moneyJ = moneyC / 3;

    while (moneyJ < moneyC)
    {
        moneyC *= 1.02;
        moneyJ *= 1.05;
        time++;
    }

    printf("Sao necessarios %i meses para que o valor de Joao iguale ou ultrapasse o valor de Carlos\n", time);

    return 0;
}