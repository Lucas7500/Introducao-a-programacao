/*
  Instituicao	: INF/UFG
  Curso					: Bacharelado em Sistemas de Informacao
  Disciplina		: Introducao a Programacao
  Professor			: Andre Luiz Moura
  Autor					: Andre Luiz Moura
  Finalidade		: Realizar fatoracao detalhada de um numero inteiro
  Data (criacao): 15/10/2014
*/

#include <stdio.h>  // printf, scanf
#include <math.h>   // log10
#include <string.h> // strcpy, strcat
#include <stdlib.h> // system

// Prototipo de funcao
double ContAlg(double);

int main()
{
  double num, i;
  double numCopia;
  double quantDigitos;
  char expFormatacao[20], expFormatacao2[20];
  int contFatores = 0;

  printf("FATORACAO DE NUMEROS INTEIROS\n\n");
  printf("Digite numero inteiro a ser fatorado: ");
  scanf("%lf", &num); // 1948159581918191211

  quantDigitos = ContAlg(num);
  numCopia = num;

  strcpy(expFormatacao, "%");
  strcat(expFormatacao, itoa(quantDigitos, expFormatacao2, 10));
  strcat(expFormatacao, ".0lf |%");
  strcat(expFormatacao, itoa(quantDigitos, expFormatacao2, 10));
  strcat(expFormatacao, ".0lf\n");
  printf("\n");

  for (i = 2; i <= sqrt(numCopia) + 1; i++)
  {
    while (fmodl(num, i) == 0)
    {
      printf(expFormatacao, num, i);
      num = num / i;
      contFatores++;
    } // Fim while

    if (num <= 1)
      break;
  } // Fim for

  if (num != 1 && num <= numCopia)
  {
    contFatores++;
    printf(expFormatacao, num, num);
  }

  strcpy(expFormatacao, "%");
  strcat(expFormatacao, itoa(quantDigitos, expFormatacao2, 10));
  strcat(expFormatacao, ".0lf |");
  printf(expFormatacao, 1.0);

  printf("\n\nTotal de fatores: %i", contFatores);
  system("pause > nul");

  return 0;
}

// Retorna a quantidade de algarismos de um numero
double ContAlg(double N)
{
  double logN = log10(N);
  double parteInteira;
  double frac = modf(logN, &parteInteira);

  return parteInteira + 1;
}