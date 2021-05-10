#include <stdio.h>

struct tt
{
    int x;
    struct tt *y;
} * p;

struct tt a[4] = {20, a + 1, 15, a + 2, 30, a + 3, 17, a};

main()
{
    p = a;
    p++;
    for (int i = 1; i <= 2; i++)
    {
        printf("%d \n", p->x);
        p = p->y;
    }
}