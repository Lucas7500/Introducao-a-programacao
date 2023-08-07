#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char aux, nomeArq[100];
    int quantCamposLidos = 0, retorno;

    printf("Nome do arquivo: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r");
    if (arq == NULL)
        printf("Erro ao abrir o arquivo \"%s\"", nomeArq);
    else
    {
        printf("------ Dados do arquivo:\n\n");
        // while(fscanf(arq,"%c",&aux) != EOF) {
        while ((retorno = fscanf(arq, "%c", &aux)) != EOF)
        {
            quantCamposLidos++;
            // printf("#%d %c", retorno, aux);
            printf("%c", aux);
        }
        printf("\n------ Fim dos dados do arquivo\n");
        printf("\nQuant. de campos lidos: %d", quantCamposLidos);
    }
    fclose(arq);
}
