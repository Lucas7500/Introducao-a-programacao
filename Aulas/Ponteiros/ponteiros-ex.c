#include <stdio.h>

int main()
{
    int *mema;
    int a = 90;
    mema = &a;
    *mema = 100;

    // %x imprime memoria em hexadecimal sem 0 antes (X maiúsculo deixa as letras maiúsculas)
    printf("%X\n", &mema);
    printf("%d", a);

    return 0;
}
