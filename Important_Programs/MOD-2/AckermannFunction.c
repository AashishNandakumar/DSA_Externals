#include <stdio.h>

int Ackermann(int m, int n)
{

    //* Base condition:
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        Ackermann(m - 1, n);
    else if (m > 0 && n > 0)
        Ackermann(m - 1, Ackermann(m, n - 1));
}

int main()
{
    int val = Ackermann(1, 3);
    printf("%d", val);
    return 0;
}