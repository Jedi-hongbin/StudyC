#include <stdio.h>

main()
{
    int y = 9;
    for (; y > 0; y--)
    {
        if (y % 3 == 0)
        {
            printf("%d \n", --y);
        }
    }
}