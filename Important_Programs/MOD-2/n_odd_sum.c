#include <stdio.h>
int oddSum(int n)
{
    if (n == 0)
        return 0;
    else
        return (2 * n - 1) + oddSum(n - 1);
}

int main()
{
    int val = oddSum(0);
    printf("%d ", val);
    return 0;
}