#include <stdio.h>
#include <stdlib.h>

int main()
{
	float notas[3] = {9.5, 7.9, 8.5};
	float NF[] = {5.0, 7.9, 8.5, 7.0, 6.0, 9.8};
	float maiorValor;
	int i;
	int tamVetorNF = sizeof(NF) / sizeof(NF[0]);

	// Obtencao do maior valor no vetor 'notas'
	maiorValor = notas[0];

	for (i = 0; i < 3; i++)
	{
		if (notas[i] > maiorValor)
			maiorValor = notas[i];
	}
	printf("Maior valor no vetor \'notas\': %.1f", maiorValor);

	// Obtencao do maior valor no vetor 'NF'
	maiorValor = NF[0];

	for (i = 0; i < tamVetorNF; i++)
	{
		if (NF[i] > maiorValor)
			maiorValor = NF[i];
	}
	printf("\nMaior valor no vetor \'NF\': %.1f", maiorValor);

	system("pause > nul");
}
