#include <stdio.h>
/*
并不是所有被4整除了都是闰年 需要满足一下两个条件
1， 能被4整除不能被100整除
2， 能被400整除
*/
main()
{
    for (int i = 1000; i < 2020; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        // if (i % 4 == 0 && i % 100 == 0 && i % 400 != 0)
        {
            printf("%d\n", i);
        }
    }
}