#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Hello World \n");
    fork();
    fork();
    printf("Hello World \n");
    return 0;
}