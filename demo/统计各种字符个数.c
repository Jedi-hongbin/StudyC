#include <stdio.h>

int main()
{

    char str[100], *p = str;
    //! scanf("%s",str); 遇到空格就停止了 不行
    gets(str);
    int w = 0, n = 0, s = 0, o = 0;
    while (*p != '\0')
    {
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
            w++;
        else if (*p >= '0' && *p <= '9')
            s++;
        else if (*p == ' ')
            n++;
        else
            o++;
        p++;
    }

    printf("word: %d\n", w);
    printf("number: %d\n", s);
    printf("space: %d\n", n);
    printf("other char: %d\n", o);

    return 0;
}