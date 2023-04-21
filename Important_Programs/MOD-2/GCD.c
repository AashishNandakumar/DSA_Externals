#include <stdio.h>

int gcd(int a, int b)
{

    while (a != b)
    {
        if (a > b)
            return gcd(a - b, b);
        else if (b > a)
            return gcd(a, b - a);
    }

    return a;
}

int main()
{

    printf("Enter a and b: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int val = gcd(a, b);
    printf("GCD: %d", val);
    return 0;
}