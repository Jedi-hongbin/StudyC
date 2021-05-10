#include <stdio.h>
#include <math.h>
#include <string.h>

#define true 1
#define false 0

typedef int Bool;

void case1()
{
    float x = -1234.567;
    printf("\n %8.3f", x);  //=>  -1234.567
    printf("\n %10.3f", x); // =>   -1234.567
}
/*
void case2()
{
    int x, i, j;
    int result = (0 <= x < 100) + (i = j = 0) + (char)(65 + 3);
    printf("%d\n", result); //=> 69
    //# 第一个部分 0<=x为0或1然后和100比较永远为真因为不管是0还是1都小于100，所以第一部分结果是1
    //# 第二部分结果为右值就是0
    //# 第三部分虽然是char类型进行+运算的时候会转换成65+3的值就是68
    //=>最后 1 + 0 + 68 = 69
    //printf("%d", (0 <= x)); //=> 1
}
*/

/*

void case3()
{
    int x = 2, y = -1, z = 2;
    if (x < y)
        if (y < 0)
            z = 0;
        else
            z += 1;
    printf("%d\n", z); //=> 2
    //# 第一个判断为false所以不往下走，
    //# 而else属于上面的if，第二个if不执行，不会有z=0也不会有+=1
    //# 运算的最后z没有任何操作还是2输出
}
*/

void case4()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    p++;
    // *p++;//=> 30
    (*p)++; // => 21
    printf("%d \n", *p);
}

void case5()
{
    //宏定义 #define PI 3.14159 中，用宏名PI代替一个 字符串
}
void case6()
{
    //判断两个字符串是否相等
    // char s1[] = {'1', '2', '3'};
    // char s2[] = {'1', '2', '3'};
    // printf("%s \n", s1);
    // printf("%s \n", s2);
    char *s1 = "123";
    char *s2 = "124";
    char *s3 = "123";
    // printf("%d\n", s1 == s2);
    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s3));
    printf("%d\n", strcmp(s1, s3));
    //char *s3 = "\x54BNHGb13,2m"; //长度 11  \x54算一个
    //printf("%s len: %lu \n", s1, strlen(s1)); // strlen 遇到 \0停止
    //printf("%s len: %lu \n", s2, strlen(s2));
}

void case7()
{
    int a = 1;
    switch (a)
    {
    case 1:
        printf("1");
    case 2:
        printf("2");
        break;
    default:
        printf("other");
    }
    //=> 12
}
//! 字符串赋值 不允许先定义后直接赋值
//=> https://blog.csdn.net/choujiao7447/article/details/100809073
void case8()
{
    //=> char str[10]; str = "123" // err
    //!数组名字就是一个指针（重点）
    //* 指针指向字符串第一个元素
    //* 所以str = "123"相当于让指针指向一个字符串常量，指针指向的需要是地址
    //* 要后赋值的话可以用strcpy赋值
    char t[3] = "123";
    char str[10];
    strcpy(str, "123");
    printf("%s \n", str);
}

void case9()
{
    double x, y;
    double a = 3, b = 2;
    x = 1.5;
    y = 3 / 2; //=> 1
    //! 如果有浮点数参与运算都转化成double类型计算，否则 3/2 = 1 而 3.0/2=1.5 或者 3 / 2.0 = 1.5
    printf("%lf \t %lf \t %d", x + y, a / b, 3 / 2); //=> 2.5  1.5  1
}

void case10()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p = &a[3];
    int b = p[5];            // 9
    printf("%d \n", b);      //9
    printf("%d \n", *(p++)); //4
    printf("%d \n", *(p++)); //5
    printf("%d \n", *(p++)); //6
    printf("%d \n", *(p++)); //7
    printf("%d \n", *(p++)); //8
    printf("%d \n", *(p++)); //9
    printf("%d \n", *(p++)); //10
    printf("%d \n", *p);     //开始随机数
}

void case11()
{
    char a, b, c, *d;
    // a='\';        // 不合法
    b = '\xbc'; // 无法标识 但是合法，不报错
    //c = '\0xab';   // 有警告 不合法
    d = "\017";      // 无法标识 但是合法，不报错
    char f = '\xab'; // 无法标识 但是合法，不报错
    //char g = '\xbl'; // 有警告 但是合法 打印 l
    printf("%c | %c \n", b, *d);
}

void case12()
{
    //=> '\x41' => A 65
    printf("八进制： %o\n ", 97 + 26);
    printf("%c \n", '\173');
    //printf("%c | %c", '\101', '\xab');
}

void case13()
{
    int n = 3;
    // n += n -= n * n;
    //相当于下面两部
    n -= n * n;
    n += n;
    printf("%d\n", n); //=> -12
}

void case14()
{
    int x = 3, y = 2;
    int z = (y++ == --x) ? y++ : x;
    printf("%d \n", z);
}

void case15()
{
    Bool a = true;
    printf("%lf \n", 1.0 / 3 * 3);
}
//! 整形和字符型可以不写类型 不过警告
// backInt()
// {
//     return 0;
// }

// backChar()
// {
//     return 'a';
// }

void case16()
{
    char a = '1', b = '0';
    int c = a + b;
    char d = a + b;
    printf("%d\n", c);
    printf("%c\n", d);
    printf("%c ,%d %lu", a + b, a + b, sizeof(a + b));
}

void case17()
{
    int a;
    float b = 2.1;
    a = (int)(b + 3);
}

void case18()
{
    //! %md m可以是负号
    printf("%-3d \n", 10);
}

void case19()
{
    int m = 21, n = 14, temp;
    while (m != 0)
    {
        temp = m % n;
        printf("temp-%d \n", temp);
        n = m / n;
        printf("n-%d \n", n);
        m = temp;
        printf("m-%d \n", m);
        printf("----------\n");
    }
    printf("%d", n);
}

void case20()
{
    int i, j;
    static int s[11];
    printf("init :");
    for (i = 0; i <= 10; i++)
    {
        printf("%3d", i);
    }
    printf("\n");
    printf("第二部分 s[i] = 1:");
    for (i = 2; i <= 10; i++)
        s[i] = 1;
    for (i = 0; i <= 10; i++)
    {
        printf("%3d", i);
    }
    printf("\n");
    for (i = 2; i <= sqrt(10); i++)
        if (s[i])
            for (j = i + i; j <= 10; j += i)
                s[j] = 0;
    printf("第三部分 s[j] = 0:");
    for (i = 0; i <= 10; i++)
    {
        printf("%3d", i);
    }
    printf("\n");
    for (i = 2; i <= 10; i++)
        if (s[i])
            printf("%3d", i);
}

void case21()
{
    static int arr[11];
    printf("init:");
    for (int i = 0; i <= 10; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    printf("1:");
    for (int i = 2; i <= 10; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    printf("2:");
    for (int i = 2; i <= sqrt(10); i++)
    {
        if (arr[i])
        {
            printf("*");
            for (int j = i + i; j <= 10; j += i)
                arr[j] = 0;
        }
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    for (int i = 2; i <= 10; i++)
        if (arr[i])
            printf("%3d", i);
}

void case22()
{
    // printf("%%%");// 不合法
    printf("$$$");
    printf("***");
}

// void case23()
// {
//     int i = 3;
//     printf("%d \n", i-- - i); //=> 3 - 2 = 1
// }

void case24()
{
    //# '!' 遇0 返回1，遇到非零返回0
    // printf("%d \n", 3);       // 3
    // printf("%d \n", !3);      // 0
    // printf("%d \n", !0 || 3); // 1
    int a = 3, b = 4, c = 5;
    printf("%d \n", !((a < b) && !c || 1));
}

int main()
{
    case24();
    return 0;
}