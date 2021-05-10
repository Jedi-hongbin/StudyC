#include <stdio.h>
#include <string.h>

void getLen(char str[])
{
    printf("len: %lu", strlen(str));
}

int main()
{
    char str[100];
    scanf("%s", str);
    getLen(str);
    return 0;
}