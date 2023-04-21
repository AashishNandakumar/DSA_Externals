#include <stdio.h>

void SelectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}

int main()
{
    int A[100], n;
    printf("Enter no of elemnts: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    SelectionSort(A, n);

    printf("Sorted elemetns: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}