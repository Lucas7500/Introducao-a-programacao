#include <stdio.h>
#include <stdlib.h>
#define MAX 50

float calcMediaAritVetor(int[], int);

int main()
{
  int vetNum[MAX], tamVetNum, i;

  printf("Quant. de numeros inteiros a serem lidos: ");
  scanf("%d", &tamVetNum);

  for (i = 0; i < tamVetNum; i++)
  {
    printf("%do. numero: ", i + 1);
    scanf("%d", &vetNum[i]);
  }

  printf("\nMedia arit. dos elementos do vetor: %f\n", calcMediaAritVetor(vetNum, tamVetNum));
}

float calcMediaAritVetor(int vetNum[], int tamVetNum)
{
  float soma = 0;
  int i;
  for (i = 0; i < tamVetNum; i++)
  {
    soma += vetNum[i];
  }

  return soma / tamVetNum;
}
