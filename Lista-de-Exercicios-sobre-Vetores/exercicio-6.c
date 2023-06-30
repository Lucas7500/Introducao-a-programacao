// 6. Escreva um programa em C para gerenciar um sistema de reservas de mesas em uma casa de espetáculo, com
// as seguintes características:
// a) A casa possui 30 mesas de 5 lugares cada uma. O programa deverá permitir que o usuário escolha código de
// uma mesa (100 a 129) e forneça a quantidade de lugares desejados.
// b) O programa deverá informar se foi possível realizar a reserva e atualizar a reserva. Se não for possível, o
// programa deverá emitir uma mensagem.
// c) O programa deve terminar quando o usuário digitar o código 0 (zero) para uma mesa ou quando todos os 150
// lugares estiverem ocupados.

#include <stdio.h>

int main()
{
    int tables[30], key = 1, place, numSeat, sum;

    for (int i = 0; i < 30; i++)
    {
        tables[i] = 5;
    }

    while (key != 0)
    {
        sum = 0;

        for (int i = 0; i < 30; i++)
        {
            sum += tables[i];
        }

        if (sum == 0)
        {
            printf("Todos os lugares estao preenchidos!\n");
            break;
        }

        printf("Digite o codigo da mesa desejada(100 a 129): ");
        scanf("%d", &key);

        if (key == 0)
        {
            break;
        }

        if (key > 129 || key < 100)
        {
            printf("Codigo invalido.\n\n");
        }
        else if (tables[key - 100] == 0)
        {
            printf("A mesa %d esta lotada.\n\n", key);
        }
        else
        {
            printf("A mesa %d possui %d cadeiras disponiveis.\n", key, tables[key - 100]);

            printf("Deseja reservar quantos lugares? ");
            scanf("%d", &numSeat);

            if (numSeat > tables[key - 100])
            {
                printf("Nao foi possivel realizar a reserva, sem lugares suficientes.\n\n");
            }
            else
            {
                tables[key - 100] -= numSeat;
                printf("A reserva de %d lugares na mesa %d foi feita com sucesso!\n\n", numSeat, key);
            }
        }
    }

    return 0;
}
