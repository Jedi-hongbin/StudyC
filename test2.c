#include <stdio.h>
#include <string.h>
#include <math.h>

void floatAddInt()
{
    int a = 2;
    float b = 1.5;
    printf("%f", a + b); // 3.500000
    // float + int 相加结果是 float类型
    /*
    int是整型float是单精度浮点型
    double是双精度浮点型
    int和float计算时，结果最多只是float型
    不会转换为double型的
    */
}

void stringEnd()
{
    char a[] = "Hello,hongbin";
    a[5] = 0;
    printf("%s", a); //Hello
    //字符串中遇到数字0表示结束符不是字符0
    /*
        a在地址中保存形式
        'H'
        'e'
        'l'
        'l'
        'o'
        0
        ...
    */
}

void unionValue()
{
    union
    {
        int i;
        char c;
    } a;
    a.i = 0x1234;
    printf("%d", a.c);
}

// void identity()
// {
//     int i = 5;
//     printf("%d,%d\n", i, ++i); // 5,6
//     printf("%d\n", i);         //6
// }

void enumValue()
{
    enum workday
    {
        mom,
        tue,
        wed = 7,
        thu,
        fri
    };
    enum workday W;
    W = mom; //0
    // W = thu; //8
    // W = wed;//7
    printf("%d \n", W);
}

void octal()
{
    int x = 017;
    do
    {
        printf("%d \n", x + x);
    } while (!x);
    printf("x=%d", x);
}

void str()
{
    char str[] = "\ba\016ef"; // 退格a空格ef \016 => 8 + 6 = 14 DLE
    printf("%s 长度： %ld,占字节： %ld", str, strlen(str), sizeof(str));
}

void str2()
{
    char str[] = "1\b\b\n"; // 1 长度： 2,占字节： 3
    // char str[] = "1\b\n"; // 1
    //  长度： 3,占字节： 4

    printf("%s 长度： %ld,占字节： %ld", str, strlen(str), sizeof(str));
}

void str3()
{
    char str[] = {'1', '2', '3', '4', '\n'};
    printf("%s,%ld,%ld", str, sizeof(str), strlen(str));
}

void structProint()
{
    struct
    {
        int x;
    } s[2] = {{2}, {5}}, *p = s;
    // printf("%d ", p->x);// 2
    // printf("%d ", ++p->x);// 3
    // printf("%d ", ++(p->x)); // 3

    // p++;
    // printf("%d ", p->x); // 5
    //# ->优先级很高 比一般运算符都高
    // && > ||
}

void demo()
{
    int a = -1, b = 4, k;
    k = (a++ <= 0) && (!(b <= 0));
    printf("%d %d %d", k, a, b);
}

void demo1()
{
    int i, sum;
    for (i = 1, sum = 0; i < 6; i++, sum = 0)
        sum += i;
    printf("%d\n", sum); //! 0 条件判断比循环内容最后多执行一次
    //# 当i是5的循环执行完毕 后执行i++, sum =0 i=6 sum变为0
    //# 然后判断 i < 6发现不通过循环结束 允许打印sum命令 此时 sum在上面已经置为0了
}

void pointer()
{
    //!  *p++  == *(p++)
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, *p = arr;
    // printf("%p %d\n", p, *(p++)); // 0x7ffee96d4460 0
    // printf("%p %d\n", p, *p++); // 0x7ffee96d4460 0
    printf("%p\n", p); // 0x7ffee96d4464
    // printf("%p %d\n", p, (*p)++); // 0x7ffee185c460 0
    // printf("%p\n", p);            // 0x7ffee185c460
}

void arrPointer()
{
    int arr[3][2] = {10, 20, 30, 40, 50, 60}, (*p)[2];
    //# (*p)[2] 意思为 有2个元素的数组指针
    p = arr;
    printf("%d", *(*(p + 2) + 1)); //! 60
    //=> p+2 arr[0] -> arr[2]
    //=> *arr[2] + 1 arr[2][0] -> arr[2][1]
    //=> *arr[2][1] == 第三个数组的第二项 就是60
    // printf("%d", *(p[0]));//10
    // printf("%d", **p); //10
    // printf("%d", *(*(++p))); //30
}

void youXianJi()
{
    int a = 013, b = 017;
    char c = 3;
    int abc = b | a >> c;
    int ab = (b | a) >> c;
    int ba = b | (a >> c);
    //=> 证明 >> 优先级 大于 ｜
    printf("%d %d %d", abc, ab, ba);
    //# | 按位或运算 0|x = x  1|x = 1
    //#` & 按位与运算 0|x = 0  1|x = x
}

void strValue()
{
    char str[] = "\'\103";
    // printf("%s", str);
    // printf("\n %d", '\103'); // 67

    //! \103 == 67  \表示八进制  \x是十六进制
    //! 只有 八进制 十六进制 没有别的
}

void inputChar()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch - 'E')
            putchar(ch + 32);
        else
            putchar(ch);
    }
    //=> abcdE
    /*
        单个getchar只能获取第一个字符 用while可以拿到每一个字符到回车'\n'停止
    */
}

void f(int *p1, int *p2)
{
    int *p3;
    p3 = p1;
    p1 = p2;
    p2 = p3;
}
// CARE
void examination()
{
    int x = 10, y = 20;
    int *m = &x, *n = &y;
    f(m, n);
    printf("%d %d\n", x, y);
    printf("%d %d", *m, *n);
    //! 值和指针都没有收到函数f的影响 很奇怪 参考网上的回答说函数的实参是两个指针的副本
    //! 可以通过这个副本改变两个指针的值 不过这个副本的改变影响不到外部 只在当前这个小区域有效
    //! 参考 https://zhidao.baidu.com/question/752122542532470524.html
}

void doubleLoop()
{
    int i, j, k = 0;
    for (i = 10, j = 9; i < 13; i++)
        while (j++ < i)
            k += j;
    printf("%d", k); //=> 10
}
/*
此题阴险的很 两重循环 while循环内容虽不一定执行
但条件判断语句一定会执行 就是j++会每次for循环都执行一次一++恰好只有第一次判断通过k最终只+= 10
*/

void f1()
{
    int i;
    for (i = 30; i > 10; i--)
        if (i % 5 != 0)
            break;
    printf("%d", i);
}

void strPointer()
{
    char x[] = "fedc", *p;
    // char a[] = "";
    // char b[] = "\286";
    // printf("%s ,%s", a, b);
    // p = &x[3];
    // char d = '\028';
    // printf("%c", d);
    // printf("%c", *(p - 1) + 1);
}

void floatPrint()
{
    float a = 12.345;
    printf("%f 3.2f->%3.2f 03.2f -> %010.2f", a, a, a);
    //# 浮点数 会自动四舍五入
}

void strlens()
{
    // char c1[] = "abcd";
    // char c1[] = {"abcd"};
    // char c2[] = {'a', 'b', 'c', 'd'};
    // c2是比c1少一位的 但这么试没试出来
    //? https://tiku.baidu.com/web/view/c071ce0903020740be1e650e52ea551810a6c90d?pv=view&doc_id=c071ce0903020740be1e650e52ea551810a6c90d&url=/view/c071ce0903020740be1e650e52ea551810a6c90d.html?bfetype=new&bfetype=new

    // printf("%ld %ld", sizeof(c1), sizeof(c1));
}

void verifyString()
{
    //1 字符型数组中可以存放字符串
    // char s1[] = {'1',
    //              "234"};
    // printf("%s", s1);
    //err

    /*
    下列描述中不正确的是_______。

    A．字符型数组中可以存放字符串
    B．可以对字符型数组进行整体输入、输出
    C．可以对整型数组进行整体输入、输出
    D．不能在赋值语句中通过赋值运算符“=”对字符型数组进行整体赋值

    正确答案
    C

    答案解析
    [评析] C语言规定只能逐个引用数组元素而不合下次引用整个数组。字符数组的输入、输出可以将整个字符串一次输入或输出。所以，选项C的说法是不正确的。
    */
}

void defineStrVal()
{
    char s[20];
    strcpy(s, "define "); // define
    strcat(s, "hello");   // define hello
    strcpy(s, "heihei "); // heihei
    printf("%s", s);      // heihei
}

void strPutchar()
{
    char s[7];
    strcpy(s, "ab\nc\nd");
    // int i = 0;
    // for (; i < 6; s[i] = getchar(), i++)
    // ;
    //for (i = 0; i < 6; i++)
    // putchar(s[i]);
    //  printf("%c", s[i]);
    printf("\nstr: %s", s);
    printf("\n");
}

void getChar()
{
    char s[10];
    printf("%s", s);
}

void strPointerPosition()
{
    char a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, *p = a + 5;
    printf("%d\n", *p);
}

#define MAX(x, y) (x) > (y) ? (x) : (y)

void maxInt()
{
    int a = 5, b = 2, c = 3, d = 3, t;
    t = MAX(a + b, c + d) * 10;
    //! t=(a+b)>(c+d)?(a+b):(c+d)*10
    //: t = 7 > 6 ? 7 : 60
    printf("%d", t); //7
    //注意 后面的 *10是迷惑的 遇到宏定义的问题先打开运算
}

struct AA
{
    int y;
    int x;
} a = {1, 2}, *p = &a;

void structpointer()
{

    printf("%p\n", p);
    printf("x - %d %p\n", (*p).x, &(*p).x);
    printf("y - %d %p", (*p).y, &(*p).y);
}

void approvedSyntax()
{
    float a;
    scanf("%4f", &a);
    // scanf("%4.2f", &a);//!invalid conversion specifier '.
    printf("val:%f%%%%", a); // 2 -> 2.000000%%
}

void switchDefault()
{
    int a = 2;
    switch (a)
    {
    case 2:
        printf("2");
    case 3:
        printf("3");
    default:
        printf("default 也会执行");
    }
}

void copy_str(char *from, char *to)
{
    // while (*to++ = *from++)
    //     ;

    *(to - 3) = 'u';
    *(to - 4) = 's';
    *(to - 5) = ' ';
}

void str_copy()
{
    char *a = "you are moon";
    char *b = "I am a star beside you";
    // copy_str(a, b);
    while (*a)
    {
        *p++ = *a;
        a++;
    }
    // puts(a);
    // puts(b);
}

int main()
{
    str_copy();
    return 0;
}