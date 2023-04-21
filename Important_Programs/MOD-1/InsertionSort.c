#include <stdio.h>

void Insertion_Sort(int A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{

    int A[100], n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    Insertion_Sort(A, n);

    printf("After sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}