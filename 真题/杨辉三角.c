#include <stdio.h>
#define LinNum 10

int main()
{
    //5个数组一个数组10个元素
    //{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}
    static int arr[LinNum][LinNum];
    // 构建
    for (int i = 0; i < LinNum; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
        // 打印
    }

    // 打印
    for (int i = 0; i < LinNum; i++)
    {
        printf("第%2d行:", i + 1);
        for (int j = 0; j < LinNum; j++)
        {
            if (arr[i][j])
                printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}