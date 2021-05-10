#include <stdio.h>

int main()

{
    int *p, *q, k = 1, j = 10;
    p = &j, q = &k;      // p -> 10的地址  q -> 1的地址
    p = q;               // p -> q -> 1的地址
    (*p)++;              // 1的地址 ++ 变成 2
    printf("%d \n", *q); // 1的地址 2
    return 0;
}