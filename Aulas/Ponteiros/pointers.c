#include <stdio.h>

int main(void)
{
    int x = 10;
    int *pointer;
    pointer = &x;

    printf("%p %p %p %i\n", &x, pointer, &pointer, &pointer);

    int y = 20;
    *pointer = y;

    printf("%i %i\n", x, y);
}