#include <stdio.h>

void f(int len, int num, char str[100]);

void main()
{

    int i, j, n;
    char str[100];
    i = 1, j = 10;
    scanf("%d", &n);

    //计算有几位数

    while (n / j)
    {
        i++;
        j *= 10;
    }
    f(i, n, str);
    printf("trans -> %s", str);
}

void f(int len, int num, char str[100])
{
    if (len > 0)
    {
        str[len - 1] = '0' + num % 10;
        num /= 10;
        f(len - 1, num, str);
    }
}