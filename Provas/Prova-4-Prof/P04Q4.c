#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM_MAX 200

int main()
{
	int X[TAM_MAX]; // Vetor que contera numeros de 0 a 199
	float DP;
	float Somatorio = 0.0, SomaX = 0.0;
	float Media;
	int i;

	for (i = 0; i < TAM_MAX; i++)
	{
		X[i] = i;	   // Preenchimento do vetor X com valores de 0 a 199
		SomaX += X[i]; // Acumulacao dos valores de X
	}

	// Calculo da media aritmetica
	Media = SomaX / TAM_MAX;

	// Calculo do somatorio de (X[i] - Media)
	for (i = 0; i < TAM_MAX; i++)
	{
		Somatorio += pow((X[i] - Media), 2.0);
	}

	// Calculo do desvio padrao
	DP = sqrt(1 / 4.0 * Somatorio);

	printf("Desvio padrao: %f", DP);
}
