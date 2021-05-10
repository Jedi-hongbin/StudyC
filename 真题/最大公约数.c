#include <stdio.h>

int fun(int a, int b)
{
    int i, j, m, n;
    if (a > b)
    {
        m = a;
        a = b;
        b = m;
    };
    i = a;
    j = b;
    while ((n = j % i) != 0)
    {
        j = i;
        i = n;
    }
    return i;
};

int main()
{
    printf("%d", fun(25, 100));
    return 0;
}