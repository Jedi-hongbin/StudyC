#include <stdio.h>

/*
两两比较 大的放一边
第一轮 
1和2比较 大的放右边 然后2和3比较大的放右边 然后3和4比较 大的放右边 ...
都比较完后最大的在最右边 
第二轮 
最右边的是最大的不需要在计算了 所以 长度-1
继续 1和2比较 大的放右边 然后2和3比较大的放右边 ...
这样第二大的放在的倒数第二位置 然后下一次比较需要比较的次数再-1 最后发现就是 - 当前是第几轮
*/

int main()
{
    int arr[10] = {0, 2, 4, 1, 6, 8, 3, 9, 6, 8}, temp;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int x = 0; x < 10; x++)
        printf("%d ", arr[x]);

    return 0;
}