#include <stdio.h>

int main()

{
    char ch;
    // ch = 'a+b';
    // ch = '\0';
    // ch = '7' + '9';//p
    // ch = 5 + 9;
    // ch = 5 + 60;//A
    int a, b;
    printf("%d", (a = 6, a + 1, b = a, b + 1)); // 7
    return 0;
}