#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aux[100];

    FILE *fw = fopen("saida.txt", "a");

    scanf("%[^\n]", aux);
    fprintf(fw, "%s", aux);

    fclose(fw);

    return 0;
}
