// 4. (Questão de Desafio) Escreva um programa em C para simular a compra das passagens em um ônibus intermunicipal.
// O ônibus possui 44 lugares numerados, divididos em 2 fileiras com dois bancos em cada lado (em cada fileira um banco
// está na janela e o outro no corredor). O programa deve permitir ao usuário visualizar a ocupação do ônibus e escolher um
// lugar vago. Para escolher um lugar vago o usuário deve digitar o número da cadeira e caso o lugar informado já esteja
// ocupado uma mensagem de aviso deve ser emitida. (Veja-se leiaute abaixo.)

#include <stdio.h>

int main()
{
    int seats[11][4] = {{1, 2, 4, 3}};
    int occupied[11][4] = {0};
    int seat;

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > 0)
            {
                seats[i][j] = seats[i - 1][j] + 4;
            }

            printf("%4d", seats[i][j]);
        }

        printf("\n");
    }

    while (1)
    {

        printf("\n");

        do
        {
            printf("Digite o numero da cadeira que voce quer ocupar: ");
            scanf("%d", &seat);

            if (seat < 0 || seat > 44)
            {
                printf("Lugar inválido, tente novamente.\n");
            }
        } while (seat < 0 || seat > 44);

        if (seat == 0)
        {
            break;
        }

        for (int i = 0; i < 11; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (seats[i][j] == seat)
                {
                    if (occupied[i][j] == 0)
                    {
                        printf("O lugar %d foi reservado.\n", seat);
                        occupied[i][j] = 1;
                    }
                    else
                    {
                        printf("O lugar %d ja esta ocupado.\n", seat);
                    }
                }
            }
        }

        printf("\n");

        for (int i = 0; i < 11; i++)
        {
            for (int j = 0; j < 4; j++)
            {

                if (occupied[i][j] == 1)
                {
                    printf("%4d", 0);
                }
                else
                {
                    printf("%4d", seats[i][j]);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
