#include <stdio.h>

void fun(int *arr)
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            { //升序
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int x = 0; x < 10; x++)
        printf("%d ", arr[x]);
}

int main()
{

    int arr[10] = {9, 8, 6, 7, 4, 5, 3, 1, 2, 0};
    fun(arr);

    return 0;
}