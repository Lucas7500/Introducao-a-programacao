#include <stdio.h>
#include <stdlib.h>
#define LINHAS 30
#define COLUNAS 30

int main()
{
  int mat[LINHAS][COLUNAS];
  int num = 1, soma = 0;
  int i, j;

  for (i = 0; i < LINHAS; i++)
  {
    for (j = 0; j < COLUNAS; j++)
    {
      mat[i][j] = num++;

      if ((i + j) % 2 == 0)
        soma += mat[i][j];
    }
  }

  printf("%d\n", soma);
}
