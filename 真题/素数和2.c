#include <stdio.h>

main()
{
    int total = 0;

    for (int i = 100; i <= 200; i++)
    {
        int j;
        for (j = 2; j <= i; j++)
        { //证明除开了 不是素数
            if (i % j == 0)
                break;
        }
        if (i == j)
            total += i;
    }
    printf("total: %d", total);
}