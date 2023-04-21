#include <stdio.h>

int sumOfEven(int n)
{
    if (n == 0)
        return 0;
    else
        return 2 * n + sumOfEven(n - 1);
}

int main()
{
    int val = sumOfEven(10);
    printf("%d ", val);
    return 0;
}