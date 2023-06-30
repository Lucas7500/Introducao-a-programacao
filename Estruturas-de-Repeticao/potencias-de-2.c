#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2;

    for (int i = 0; i <= 10; i++)
    {
        int p = pow(x, i);
        printf("%i^%i = %i\n", x, i, p);
    }

    return 0;
}
