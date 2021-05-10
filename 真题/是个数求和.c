#include <stdio.h>

int main()
{

    float count, total = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Place enter a float:");
        scanf("%f", &count);
        total += count;
    }
    printf("SUM: %f", total);
    return 0;
}