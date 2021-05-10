#include <stdio.h>
#include <string.h>

void fun(char *s, int p, int k)
{
    int i;
    for (i = p; i < k - 1; i++)
    {
        printf("%c -> %c\n", s[i], s[i + 2]);
        s[i] = s[i + 2];
    }
}

main()
{
    char s[] = "abcdefg";
    fun(s, 3, strlen(s));
    puts(s); //abcfg
    char A[] = "\0";
    printf("%d \n", strlen(A)); //0
}