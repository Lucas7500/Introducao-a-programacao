#include <stdio.h>

int main()
{
    int *mema = NULL;
    int a = 90;
    mema = &a;

    printf("Endereco de \'a\': %X\n", &a);
    printf("Conteudo de \'a\': %d\n", a);
    printf("Endereco de \'mema\': %X\n", &mema);
    printf("Conteudo de \'mema\': %X\n", mema);
    printf("Conteudo no end. apontado por \'*mema\': %d", *mema);
}
