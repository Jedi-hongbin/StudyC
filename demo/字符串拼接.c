#include <stdio.h>

void str_cat(char *s1, char *s2)
{
    int i = 0, j = 0;
    while (s1[i++])
        ;
    i--;
    while (s1[i++] = s2[j++])
        ;
}

void str_cat2(char *s1, char *s2)
{
    int i = 0, j = 0;
    while (s1[i])
        i++;
    while (s2[j])
        s1[i++] = s2[j++];
    // while (s2[j])
    // {
    //     s1[i++] = s2[j++];
    // }
}

int main()
{
    char s1[10] = "abc", s2[10] = "def";
    str_cat2(s1, s2);
    puts(s1);
    return 0;
}
