#include <stdio.h>

int main()
{
    int a, b, c;

    printf("用，隔开三个数： ");

    scanf("%d,%d,%d", &a, &b, &c);

    int x = a > b ? a : b;

    int max = x > c ? x : c;

    printf("max: %d", max);

    return 0;
}