#include <stdio.h>
#include <string.h>

typedef struct
{
    int code;
    char nome[50];
    float price;
    int unit;
} produto;

int main()
{
    produto produtos[3];
    int code;

    produtos[0].code = 123;
    strcpy(produtos[0].nome, "Banana");

    produtos[1].code = 132;
    strcpy(produtos[1].nome, "Maca");

    produtos[2].code = 1234;
    strcpy(produtos[2].nome, "Pera");

    printf("Digite o codigo do produto: ");
    scanf("%d", &code);

    for (int i = 0; i < 3; i++)
    {
        if (produtos[i].code == code)
        {
            printf("%s", produtos[i].nome);
            break;
        }
    }

    return 0;
}
