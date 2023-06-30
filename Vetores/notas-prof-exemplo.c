#include <stdio.h>
#include <stdlib.h>

int main()
{
	float notasTemp[3];
	float notas[3] = {9.5, 7.9, 8.5};
	int pos; // Posicao na estrutura vetorial
	float notaLida;
	int i;
	/*
	                 |9.5|7.9|8.5|
	                   0   1   2
  */
	printf("notas[0] = %.1f\n", notas[0]);
	printf("notas[1] = %.1f\n", notas[1]);
	printf("notas[2] = %.1f\n", notas[2]);
	
	notas[0] = notas[0] + 0.5;
	notas[1] = notas[1] + 0.5;
	
	printf("\nNotas apos acrescimento de 0.5 ponto:\n");
	printf("notas[0] = %.1f\n", notas[0]);
	printf("notas[1] = %.1f\n", notas[1]);
	printf("notas[2] = %.1f\n", notas[2]);
	
	notas[2] = 8.7;
	
	printf("\nNotas apos revisao de prova:\n");
	printf("notas[0] = %.1f\n", notas[0]);
	printf("notas[1] = %.1f\n", notas[1]);
	printf("notas[2] = %.1f\n", notas[2]);
	
	printf("Posicao da nota a ser alterada: ");
	scanf("%d", &pos);
	printf("Novo valor da nota: ");
	scanf("%f", &notas[pos]);
	
	// Exibicao de todas as notas usando estrutura de repeticao
	printf("\nNotas atualizadas:\n");
	for (i=0; i<=2; i++) {
		printf("notas[%d] = %.1f\n", i, notas[i]);
	}
	
	system("pause > nul");
		
}
