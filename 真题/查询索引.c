#include <stdio.h>

#define SIZE 10

int search(int a[SIZE], int k)
{
    int i;
    for (i = 0; i < SIZE; i++)
        if (a[i] == k)
            return i;
    return -1;
}

int main()
{
    int a[SIZE], m, i, n;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &(a[i]));
        printf("--> %d - %d\n", a[i], i);
    }
    printf("\n:");
    for (i = 0; i < SIZE; i++)
        printf("%d,", a[i]);
    printf("\nfound:");
    scanf("%d", &m);
    n = search(a, m);
    if (n != -1)
        printf("OK,found! %d", n);
    else
        printf("Sorry,no found!");

    return 0;
}