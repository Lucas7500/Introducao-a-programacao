#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5

void calcularMedias(float[][COLUNAS], int, int);

int main()
{
  float mat[LINHAS][COLUNAS] = {{9.6, 10.0, 7.0, 10.0, 0.0},
                                {8.0, 0.0, 7.0, 8.0, 0.0},
                                {9.0, 8.5, 7.5, 10.0, 0.0},
                                {7.1, 4.2, 8.3, 1.6, 0.0},
                                {7.5, 5.8, 5.3, 8.9, 0.0}};

  printf("Matriz sem calculo das medias:\n");

  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      printf("%4.1f | ", mat[i][j]);
    }

    printf("\n");
  }

  calcularMedias(mat, LINHAS, COLUNAS);

  printf("\nMatriz com calculo das medias:\n");

  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      printf("%4.1f | ", mat[i][j]);
    }
    printf("\n");
  }
}

void calcularMedias(float mat[][COLUNAS], int l, int c)
{
  float soma;

  for (int i = 0; i < l; i++)
  {
    soma = 0;
    for (int j = 0; j < c; j++)
    {
      if (j == 4)
      {
        mat[i][j] = soma / 4;
      }
      else
      {
        soma += mat[i][j];
      }
    }
  }
}
