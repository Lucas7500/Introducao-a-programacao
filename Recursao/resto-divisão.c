#include <stdio.h>

int restodiv(int, int);

int main()
{
    int resto = restodiv(5, 2);

    printf("%d\n", resto);

    return 0;
}

int restodiv(int num, int den)
{
    if (num < den)
    {
        return num;
    }

    return restodiv(num - den, den);
}
