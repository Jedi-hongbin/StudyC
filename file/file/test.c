#include <stdio.h>

int main()
{

    FILE *fp;
    fp = fopen("a.txt", "r");
    char str[200];
    fgets(str, 200, fp);
    puts(str);
    fgets(str, 200, fp);
    puts(str);
    // rewind(fp);
    fseek(fp, 2, SEEK_SET); //指针指向 开头处位移2个字节处
    fgets(str, 200, fp);
    puts(str);
    return 0;
}