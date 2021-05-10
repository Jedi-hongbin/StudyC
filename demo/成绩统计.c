#include <stdio.h>

int main()
{

    FILE *fp;
    float a, b, c, e = 0.0, j = 0.0, m = 0.0;
    int count = 0;

    fp = fopen("grade.txt", "r");

    if (fp)
    {
        for (int i = 0; i < 5; i++)
        {
            fscanf(fp, "%f,%f,%f", &a, &b, &c);
            c += a;
            j += b;
            m += c;
            if ((a + b + c) / 3 >= 60)
                count++;
        }

        printf("成绩及格的人数:%d\n", count);
        printf("平均成绩\n数学:%f\n计算机:%f\n英语:%f", c / 5, j / 5, m / 5);
    }

    return 0;
}