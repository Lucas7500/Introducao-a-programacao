#include <stdio.h>
#include <stdlib.h>
#define maxA 5
#define maxB 4

int main()
{
  int maxU = maxA + maxB;

  int u[maxU], i, j, existe = 0, indice = 0;
  int a[maxA] = {1, 2, 4, 2, 5};
  int b[maxB] =  {2, 3, 4, 1};

  for (i = 0; i < maxA; i++) {
    existe = 0;
    for (j = 0; j < indice; j++) {
      if (a[i] == u[j]) {
        existe++;
      }
    }
    if (existe == 0) {
      u[indice] = a[i];
      indice++;
    }
  }

  for (i = 0; i < maxB; i++) {
    existe = 0;
    for (j = 0; j < indice; j++) {
      if (b[i] == u[j]) {
        existe++;
      }
    }
    if (existe == 0) {
      u[indice] =  b[i];
      indice++;
    }
  }

  printf("Vetor A = {%d", a[0]);
  for (i = 1; i < maxA; i++) {
    printf(", %d", a[i]);
  }
  printf("}\n");

  printf("Vetor B = {%d", b[0]);
  for (i = 1; i < maxB; i++) {
    printf(", %d", b[i]);
  }
  printf("}\n");

  printf("Vetor U = {%d", u[0]);
  for (i = 1; i < indice; i++) {
    printf(", %d", u[i]);
  }
  printf("}\n");

  return 0;
}
