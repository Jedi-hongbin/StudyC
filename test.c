#include <stdio.h>
#include <math.h>
#include <string.h>

// struct sk
// {
//     int a;
//     float b;
// } data;

// void sub(int x, int y, int *z)
// {
//     *z = y - x;
// }

struct stu
{
  char num[6];
  int source[3];
} s[5], *p = s;

void print(struct stu s)
{
  int i = 0;
  while (i < 3)
  {
    printf("%d ", s.source[i]);
    i++;
  }
}

int main()
{

  // int a = -1;
  // printf("%u \n", a); //4294967295
  // int a = 0b01111111111111111111111111111111;// 2147483647
  // int a = 0b11111111111111111111111111111111; // -1
  // printf("%d", a);

  // unsigned int a = 4294967295;
  // printf("%d\n", a); //=> -1
  // //=>  a 表示为11111111 11111111 11111111 11111111
  // //=> 转换成有符号输出 首位1看作是负数 反补码 再取反码
  // //=> 变为 10000000 00000000 00000000 00000001 = -1

  //最大值
  // printf("%d %d \n", ~(unsigned int)0 / 2, 2147483647 + 1); // 2147483647 -2147483648
  // printf("%d\n", (~(unsigned int)0 / 2) + 1);               // -2147483648
  // printf("%u\n", ~(unsigned int)0);                         // 4294967295
  // printf("%u\n", (~(unsigned int)0) + 1);                   // 0

  // int a = pow(2, 31) - 1;
  // printf("%d %u\n", a, a);
  // printf("%d %u\n", a + 1, a + 1);
  // printf("%d %u\n", a + 2, a + 2);
  // printf("%d %u\n", 4294967295, 4294967295);         // -1 4294967295
  // printf("%d %u\n", 4294967295 + 1, 4294967295 + 1); // 0 0
  // printf("%d %u\n", 4294967295 + 2, 4294967295 + 2); // 1 1

  // for (int i = 0; i < 2; i++)
  // {
  //   printf("num:");
  //   scanf("%s", p->num);
  //   printf("成绩:");
  //   int j = 0;
  //   while (j < 3)
  //   {
  //     // scanf("%d", &(p + i)->source[j]);
  //     scanf("%d", p[i].source[j]);
  //     j++;
  //   }
  // }
  // print(p[0]);

  // char ch[7] = {"12ab56"};
  // int i, s = 0;
  // for (i = 0; ch[i] >= '0' && ch[i] <= '9'; i += 2)
  //     s = 10 * s + ch[i] - '0';
  // printf("%d\n", s);

  // int i, b, k = 0;
  // for (i = 1; i <= 5; i++)
  // {
  //     b = i % 2;
  //     while (b-- >= 0)
  //     {
  //         printf("%d \t", b);
  //         k++;
  //     }
  // }
  // printf("%d,%d \n", k, b); // 8，-2

  // static char a[] = "program";
  // char *pa = &a[7];
  // while (--pa >= a)
  //     putchar(*pa); // margorp
  // putchar('\n');

  // int a, b, c;
  // sub(10, 5, &a);
  // sub(7, a, &b);
  // sub(a, b, &c);
  // printf("%4d,\n%4d,\n%4d", a, b, c);
  /*
      -5,
     -12,
      -7
    */

  // int *p;
  // p = &(data.a);
  // data.a = 123;
  // printf("%d\t%d", data.a, *p);

  // int i = 3;
  //printf("%d %d", i++, i++); // 3,4
  // printf("%d %d", ++i, i++); // 4,4

  // int a[3][4] = {{1, 2}, {0}, {4, 6, 7, 8}};
  // printf("%d ", a[2][1]);// 6

  // char str1[10] = "abcde", str2[10] = "xyz";
  // printf("%d", strlen(strcpy(str1, str2)));//3

  // char MMP[] = "\\22a,0\n\"";
  // printf("%s \t %lu", MMP, strlen(MMP));

  // int a = 10, b = 0;
  // do
  // {
  //     b += 1;
  //     a -=1 + b;
  //     printf("%d\n", a);
  // } while (a >= 0);

  // int *p;
  // int a[] = {1, 3, 5, 7, 9, 11, 13};
  // p = a;
  // printf("%d \n", *(p + 2));

  // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, *p = arr;

  // printf("%d \n", *p++);
  // printf("%d \n", *p + 2); // p向下两个地址 但p并没有变化 3
  // printf("%d \n", *p);     //p还是p++后的地址 1

  //! 行省列不省 二维数组 第一个下标可以省略第二个必须有 第一个下标会按照数组有的元素向上取整除以第二个下标
  //* a[][3]  下面这样 数组中有5个元素 提供的每一个数组长度为 3 有几个这样的数组就是 floor(5 / 3) = 2
  //* 就是 a[2][3]
  // int a[][3] = {0, 1, 2, 3, 4};
  // int b[2][3] = {0, 1, 2, 3, 4, 5};

  // char s[] = "ABCD", *p;

  // for (p = s; p < s + 4; p += 2)
  //   printf("%s", p); // ABCD + CD = ABCDCD
  // printf("\n");

  // char x[4] = {'1', '2', '3', '4'}, *p;
  // p = x;
  // printf("-->%c", *(++p));

  // printf("%ld \n", sizeof((float)1));  // 4
  // printf("%ld \n", sizeof((int)1));    // 4
  // printf("%ld \n", sizeof((char)'1')); // 1
  // printf("%ld \n", sizeof((double)1)); // 8
  // printf("%ld \n", sizeof(step));        // 40
  // printf("a -- %ld \n", sizeof(step.a)); // a -- 8
  // printf("c -- %ld \n", sizeof(step.c)); // c -- 1
  // printf("f -- %ld \n", sizeof(step.f)); // f -- 8
  // printf("q -- %ld \n", sizeof(step.q)); // q -- 1
  // printf("r -- %ld \n", sizeof(step.r)); // r -- 8
  // printf("t -- %ld \n", sizeof(step.t)); // t -- 4

  // char a[] = "ABCD";// 5 4
  // char a[] = "AB\0CD"; // 6 2
  //! sizeof计算 \0 strlen 遇到\0停止计算
  // printf("%s sizeof: %lu strlen: %ld \n", a, sizeof(a), strlen(a));

  // struct A
  // {
  //   char a;  //1
  //   int b;   //空3 + 4 = 7 (规则1)
  //   short c; //2+空2=4 (规则2)
  // };

  // printf("%ld \n", sizeof(struct A));

  // struct b
  // {
  //   double f; // 8
  //   char c;   // 1 + 7
  //   int a[2]; // 8
  //   double r; // 8
  //   float t;  //4
  //   char q;   //1 + 3
  // };
  // printf("%ld \n", sizeof(struct b));

  // int x = 017; //=>八进制
  // printf("%d  %d \n", x, 1 * 8 + 7);
  // int y = 0b0011; //=>二进制
  // printf("%d  %d \n", y, 1 * 2 + 1);
  // int z = 0x00A0; //=>十六进制
  // printf("%d  %d \n", z, 10 * 16);
  // int a = sizeof(a);
  // float maxA = pow(2, a * 8) - 1;
  // unsigned int b = 4294967295;
  // // printf("字节： %d， 最大表示: %f", a, maxA);
  // //* implicit conversion from 'long' to 'int' changes value from 4294967295 to -1
  // printf("%d,%d \n", b, b + 1); // -1,0
  // printf("%u,%u \n", b, b + 1); // -1,0

  // unsigned int a = -1;
  // int b = -1;
  // printf("%d %d \n", a, b); //=> -1 -1
  // //# 有无符号int类型变量 输出结果相同是因为 按照\d输出会隐式转换成有符号整形输出即转换成int类型输出
  // printf("%u %u", a, b); //=> 4294967295 4294967295
  // //# \u是无符号输出 可以理解为都是正数输出
  // //# 正常int 一个 -1 是以补码的形式存储 4字节int 就是 11111111 11111111 11111111 11111111
  // //# 在读取的时候 首位是1表示是负数 然后取反码 最后位 +1 就成了 10000000 00000000 00000000 00000001
  // //# 读取有符号整数值就是-1
  // //# 无符号读取的话就忽略查看首位是1还是0都按照正常二进制计算,就成了二进制能表示的int类型最大数:4294967295

  // //# unsigned 类型和 signed能表示的最大数也有差异 比如 无符号能表示100个数 从0 ～ 100 有符号只能是 -50 ～ 50要兼顾负数的一面

  return 0;
}