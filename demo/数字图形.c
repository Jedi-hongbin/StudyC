#include <stdio.h>

/*
        1
       22
      333
     4444
    55555
   666666
  7777777
 88888888
999999999
*/

int main()
{

    int arr[10][10], i, j;

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            arr[i][j] = i + 1;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i + j >= 8)
                printf("%d", arr[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}