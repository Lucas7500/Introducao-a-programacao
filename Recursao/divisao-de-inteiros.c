#include <stdio.h>

int divItr(int, int);

int main()
{
    int inteiro = divItr(6, 4);

    printf("%d\n", inteiro);

    return 0;
}

int divItr(int num, int den)
{
    if (num < den)
    {
        return 0;
    }

    return 1 + divItr(num - den, den);
}
