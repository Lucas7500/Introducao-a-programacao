#include <stdio.h>
#include <stdlib.h>

float calcMediaAritVetor(int[], int);

int main()
{
	int vet[] = {1, 22, -31, 5};
	int tamVet = sizeof(vet) / sizeof(vet[0]);
	float mediaArit;

	mediaArit = calcMediaAritVetor(vet, tamVet);
	printf("media arit: %f\n", mediaArit);
}

float calcMediaAritVetor(int vet[], int tamVet)
{
	static int i = 0;
	if (i >= tamVet)
		return 0;

	i++;
	return ((float)vet[i - 1] / tamVet) + calcMediaAritVetor(vet, tamVet);
}
