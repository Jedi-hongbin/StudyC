#include <stdio.h>

void f(int b[])
{
    int i;
    for (i = 2; i < 6; i++)
        b[i] *= 2;
}

main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    f(a);
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
}