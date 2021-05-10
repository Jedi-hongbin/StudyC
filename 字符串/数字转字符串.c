#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 256;
    char str[10];
    sprintf(str, "%d", num);
    printf("The number 'num' is %d and the string 'str' is %s. \n",
           num, str);
    printf("%c \n", str[0]);
    printf("%c \n", str[1]);
    printf("%c \n", str[2]);
    return 0;
}