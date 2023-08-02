#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char texto[255];
	int j, a = 0, e = 0, i = 0, o = 0, u = 0;

	fgets(texto, 255, stdin);

	for (j = 0; j < strlen(texto); j++)
	{
		switch (toupper(texto[j]))
		{
		case 'A':
			a++;
			break;

		case 'E':
			e++;
			break;

		case 'I':
			i++;
			break;

		case 'O':
			o++;
			break;

		case 'U':
			u++;
			break;
		}
	}

	printf("Vogal aA: %d\n", a);
	printf("Vogal eE: %d\n", e);
	printf("Vogal iI: %d\n", i);
	printf("Vogal oO: %d\n", o);
	printf("Vogal uU: %d\n", u);

	return 0;
}
