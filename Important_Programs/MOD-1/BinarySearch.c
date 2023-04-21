#include <stdio.h>

void BinarySearch(int A[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    printf("Enter key: ");
    int key;
    scanf("%d", &key);
    while (A[low] <= A[high])
    {
        mid = (low + high) / 2;
        if (A[mid] == key)
        {
            printf("key found at posn. %d", mid + 1);
            return;
        }
        else if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
}

int main()
{
    int A[100];
    printf("Enter array elements(should be sorted sorted): \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    BinarySearch(A, 5);
    return 0;
}