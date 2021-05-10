#include <stdio.h>

int isPrime(int num)
{
    int status = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            status = 0;
            break;
        }
    }
    return status;
}

void PrimeSum()
{
    int count = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (isPrime(i))
        {
            count += i;
        }
    }
    printf("SUM: %d\n", count);
}

int main()
{
    PrimeSum();
    return 0;
}