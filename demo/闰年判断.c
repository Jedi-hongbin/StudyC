#include <stdio.h>

//! 1. 被四整除 同时 不被100整除
//! 2. 被400整除

void runYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d 是闰年\n", year);
}

int main()
{
    for (int i = 400; i < 2021; i++)
    {
        runYear(i);
    }
    return 0;
}