#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
  char string[255], caractereAtual, caractereNovo;
  int i;

  printf("String: ");
  fgets(string, 255, stdin);

  printf("Caractere atual: ");
  scanf("%c%*c", &caractereAtual);
  printf("Caractere novo: ");
  scanf("%c", &caractereNovo);

  caractereAtual = tolower(caractereAtual);

  for (i = 0; i < strlen(string); i++)
  {
    if (tolower(string[i]) == caractereAtual)
    {
      string[i] = caractereNovo;
    }
  }

  printf("%s", string);

  return 0;
}
