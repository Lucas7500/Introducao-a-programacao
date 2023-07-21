// Escreva um programa em C que receba o salário de um funcionário chamado Carlos. Sabe-se que outro funcionário, João, tem salário
// equivalente a um terço do salário de Carlos. Carlos aplicará seu salário integralmente na caderneta de poupança, que está rendendo
// 2% ao mês, e João aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. O programa deverá
// calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor
// pertencente a Carlos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioCarlos = 10310, salarioJoao = salarioCarlos / 3;
    float taxaPoupanca = 0.02, taxaRendaFixa = 0.05;
    int tempo = 0;

    while (salarioCarlos > salarioJoao)
    {
        salarioCarlos += (salarioCarlos * taxaPoupanca);
        salarioJoao += (salarioJoao * taxaRendaFixa);
        tempo++;
    }

    printf("Tempo para o valor de Joao igualar ou ultrapassar o valor de Carlos: %d mes(es).", tempo);
}
