#include <stdio.h>

int main()
{
    FILE *fp;
    char c;
    //a 向文件追加内容
    fp = fopen("a.txt", "r");

    do
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        printf("%c", c);
    } while (1);

    // fprintf(fp, "%s", "hh");
    // fputs("end", fp);
    // char str[1000];
    // 获取%s 放到 str中
    // fscanf(fp, "%s", str);
    // 获取%s 放到 str中 长度限制1000个字符
    // while (fgets(str, 1000, fp) != NULL)
    // {
    // puts(str);
    // }
    fclose(fp);

    /*
    fp = fopen("a.txt", "w");
    //w 每次只要执行fopen("a.txt", "w") a.txt原来的内容会被替代 不输入内容也会被清空
    fprintf(fp, "%d", 123);
    fprintf(fp, "%s", "456\n");
    fprintf(fp, "%s", "789");
*/

    return 0;
}