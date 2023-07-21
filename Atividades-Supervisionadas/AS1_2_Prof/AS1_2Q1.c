// 1. Escreva um programa em C que solicite ao usuário a idade de cada componente de um grupo de pessoas. A
// entrada de dados termina quando o usuário digitar o número 0 (que não corresponde à idade de nenhuma
// pessoa).
// O programa deve imprimir:
// a) a média das idades (com precisão de uma casa decimal);
// b) a maior idade;
// c) a menor idade;
// d) a quantidade de pessoas maiores de idade (ou seja, quantas pessoas tem idade igual ou maior que 18 anos).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int somaIdades = 0, contIdadesValidas = 0, contIdade18OuMais = 0;
    int menorIdade, maiorIdade;
    float mediaIdades;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade > 0)
    {
        // Acumulando em Soma o valor da idade
        somaIdades += idade;

        // Atribuindo valores de referência para cálculo de menor e maior idades
        menorIdade = idade;
        maiorIdade = idade;

        // Atualizando o contador de idades validas
        contIdadesValidas++;
    }

    while (idade > 0)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        // Acumulando em Soma o valor da idade
        somaIdades += idade;

        // Atualizando o contador de idades validas
        contIdadesValidas++;

        // Testando para selecionar a menor idade
        if (idade < menorIdade)
            menorIdade = idade;
        // Testando para selecionar a maior idade
        if (idade > maiorIdade)
            maiorIdade = idade;

        // Totalizando a quantidade de pessoas com idade >= 18 anos
        if (idade >= 18)
            contIdade18OuMais++;
    }
    if (contIdadesValidas > 0)
    {
        // Cálculo da média das idades
        mediaIdades = (float)somaIdades / contIdadesValidas;

        printf("\nMedia das idades: %.1f\n", mediaIdades);
        printf("Maior idade: %d\n", maiorIdade);
        printf("Menor idade: %d\n", menorIdade);
        printf("Quant. de pessoas com 18 anos ou mais: %d\n", contIdade18OuMais);
    }
}
