#include <stdio.h>

int main()
{
    //保留两位小树
    double a = 3.5244;

    double f = (int)(a * 1000 + 5) / 10 * 0.01;
    printf("%f round-> %f", a, f);

    return 0;
}