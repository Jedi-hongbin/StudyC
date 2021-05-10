#include <stdio.h>

int main()
{
    for (int i = 0; i < 141; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d \t", i);
        }
    }
    return 0;
}