#include <stdio.h>
#include <stdlib.h>

#define max 20

int main()
{
  int TODOS[] = {11, 42, 3, 4, 60, 15, 7, 18};
  int PARES[max], IMPARES[max], indicePar = 0, indiceImpar = 0, i;
  int tamVet = sizeof(TODOS) / sizeof(TODOS[0]);

  for (i = 0; i < tamVet; i++)
  {
    if (TODOS[i] % 2 == 0)
    {
      PARES[indicePar] = TODOS[i];
      indicePar++;
    }
    else
    {
      IMPARES[indiceImpar] = TODOS[i];
      indiceImpar++;
    }
  }

  printf("TODOS = [%d", TODOS[0]);
  for (i = 1; i < tamVet; i++)
  {
    printf(", %d", TODOS[i]);
  }
  printf("]\n");

  if (indicePar > 0)
  {
    printf("PARES = [%d", PARES[0]);
    for (i = 1; i < indicePar; i++)
    {
      printf(", %d", PARES[i]);
    }
    printf("]\n");
  }

  if (indiceImpar > 0)
  {
    printf("IMPARES = [%d", TODOS[0]);
    for (i = 1; i < indiceImpar; i++)
    {
      printf(", %d", IMPARES[i]);
    }
    printf("]\n");
  }

  return 0;
}
