#include <stdio.h>

int main()

{

    int x = 5, y = 2;
    y += y -= x *= y;
    printf("%d", y); //-16
    return 0;
}