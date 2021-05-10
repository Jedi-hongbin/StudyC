#include <stdio.h>
#include <string.h>

// void str_copy()
// {
//     char *a = "you are moon";
//     char *b = "I am a star beside you";
//     // copy_str(a, b);
//     while (*a)
//     {
//         // *b++ = *a;
//         printf("%c %c", *a, *b = '2');
//         a++;
//         b++;
//     }
//     puts(a);
//     // puts(b);
// }

void putsTest()
{
    char str[100] = "12345\0 678", *p = str;
    char str2[100], *p2 = str2;
    *p2++ = '2';
    *p2 = '3';
    puts(str); //12345
    puts(str2);
}

void AAAAAAAA()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 3 == 0)
            j += a[i];
    }
    printf("%d", j); // 12  index == 0/3/6/9
}

//# 不会换行
void putcharT()
{
    putchar('1');
    putchar('2');
    putchar('3');
    //=> 123
}

//# 会换行
void putcT()
{
    char s[] = "1234";
    puts(s);
    puts(s);

    //=>1234
    //=>1234
}

void f1()
{
    int a = 6;
    int x = 11, y = 22, m = 0;
    m -= x;
    m += a;
    m = y - x;
    printf("%d", m);
}

void f2()
{
    int i = 0, j = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case 'e':
        case 'u':
        case 'U':
            i++;
        default:
            j++;
        }
    }
    printf("%d, %d", i, j);
}

void pool(int x, int y)
{
    float enter = 100 / x, outer = 100 / y;
    float curr = 0.0;
    int t = 1;
    while (curr < 100)
    {
        curr = (enter - outer) * t;
        printf("after %d hour:%f \n", t, curr < 100 ? curr / 100 : 1);
        t++;
    }
}

void stringInitial()
{
    //! char a[30], *p;
    //! scanf("%s", p);// err
    // char s[4][6] = {"abc"}, *p = s;
}

int blamedRabbit(int m)
{
    int fb1, fb2;
    fb1 = fb2 = 1;

    if (m < 3)
        return 1;

    for (int i = 3; i <= m; i++)
    {
        int fb = fb1 + fb2;
        fb2 = fb1;
        fb1 = fb;
    }

    return fb1;
}

int LCW(int m, int n)
{
    int i = m > n ? m : n;
    while (i % m != 0 || i % n != 0)
        i++;
    return i;
}

void ff()
{
    int a = 2, b = 9;
    int lcw = LCW(a, b);
    printf("最小公倍数：LCW:  %d", lcw);
    printf("最大公约数：GCD： %d", a * b / lcw);
}
//水仙花数 三位是 每个数的立方相加等于这个数
void narcissus()
{
    for (int i = 100; i < 1000; i++)
    {
        int g = i % 10;
        int s = i / 10 % 10;
        int b = i / 100 % 10;
        if (g * g * g + s * s * s + b * b * b == i)
            printf("%d ", i);
    }
}

int main()
{

    // char str[] = {'1', '2'};
    //char str[] = {'\101'};//A
    // char str[] = {'\064'};
    // puts(str);

    return 0;
}