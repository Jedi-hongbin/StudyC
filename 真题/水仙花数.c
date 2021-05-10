#include <stdio.h>

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        int b = i / 100;
        int s = (i - (b * 100)) / 10;
        int g = i % 10;
        if (i == (b * b * b + s * s * s + g * g * g))
        {
            printf("%d \n", i);
        }
    }

    return 0;
}