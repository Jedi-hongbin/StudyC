#include <stdio.h>

void print(int *a, int *b)
{
    if (a < b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    printf("%d,%d", *a, *b);
}

int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    print(&a, &b);
}