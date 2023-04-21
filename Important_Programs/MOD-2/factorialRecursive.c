#include <stdio.h>

int factorial(int ele)
{
    if (ele == 0)
        return 1;

    return ele * factorial(ele - 1);
}

int main()
{
    printf("Enter a positive no: ");
    int ele;
    scanf("%d", &ele);
    int val = factorial(ele);
    printf("RES: %d", val);
    return 0;
}