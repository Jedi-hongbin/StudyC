#include <stdio.h>

struct S
{
    char num[6];
    int score[3];
} ss[5] = {
    {"123asd", {10, 20, 30}},
    {"dfafas", {100, 10, 30}},
    {"yuiop", {40, 10, 130}},
},
  *p = ss;

void print(struct S s)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", s.score[i]);
    }
}

int main()
{
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("学号：");
        scanf("%s", ss[i].num);
        printf("\n 3科成绩:");
        int j = 0;
        while (j < 3)
        {
            scanf("%d", &(ss[i].score[j]));
            j++;
        }
    }

    print(ss[0]);
    return 0;
}