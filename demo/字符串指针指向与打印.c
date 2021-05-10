#include <stdio.h>

int main()
{
    char str[] = "12345", *p = str;

    p += 3;
    printf("%c\n", *p); //=> 当前指向 4
    puts(p);            //=> 45  从指针指向的位置开始输出
    puts(str);          //=> 12345 指针还是在0位置
    str[3] = 0;
    puts(str); //=> 123 遇到 \0 结束
    return 0;
}