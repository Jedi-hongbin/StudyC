#include <stdio.h>
#include <string.h>

int main()

{
    char a[5], b[] = "abcde";
    // a = b;//! err
    // strcpy(a, b);
    strcpy(a, "123");
    printf("%s \n %s", a, b);
    return 0;
}