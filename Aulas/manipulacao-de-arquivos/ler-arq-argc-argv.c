#include <stdio.h>
#include <stdlib.h>

/*
    argc: contador de argumentos
    Cenário-exemplo 1:
    C:\>LerArqTexto <ENTER>
    argc = 1

    argv: vetor de ponteiros para char ou
          vetor de strings
    Cenário-exemplo 1:
    C:\>LerArqTexto <ENTER>
    argv = {"LerArqTexto.exe"}

    Cenário-exemplo 2:
    C:\>LerArqTexto texto.txt <ENTER>
    argc = 2

    argv: vetor de ponteiros para char ou
          vetor de strings
    Cenário-exemplo 2:
    C:\>LerArqTexto texto.txt
    argv = {"LerArqTexto.exe", "texto.txt"}
*/
int main(int argc, char *argv[])
{
    FILE *arq;
    char aux, nomeArq[100];
    int quantCamposLidos = 0, retorno;

    if (argc != 2)
    {
        printf("Sintaxe: LerArqTextov3 <nome_arq_texto>");
        system("pause > nul");
        exit(1);
    }

    strcpy(nomeArq, argv[1]);

    /**
      printf("Nome do arquivo: ");
      scanf("%s", nomeArq);
    */
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
