#include <stdio.h>

void main()
{
    float C, F; //改为float
    for (F = 0; F <= 300; F += 20)
    {
        C = (5.0 / 9) * (F - 32); //5.0 转化成double
        printf("%4.0f%10.1f\n", F, C);
    }
}