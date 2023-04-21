#include <stdio.h>
#include <stdlib.h>

struct triplet
{
    int row, col, value;
};

void accept_sparseMatrix(struct triplet A[], int *row, int *col)
{
    printf("Enter no of rows and columns: ");
    scanf("%d %d", row, col);
    int k = 1, ele;
    printf("Enter elements of Matrix: \n");
    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *col; j++)
        {
            printf("For A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &ele);
            if (ele != 0)
            {
                A[k].col = j;
                A[k].row = i;
                A[k++].value = ele;
            }
        }
    }
    A[0].row = *row;
    A[0].col = *col;
    A[0].value = k - 1;
}

void display(struct triplet A[])
{
    int k = 1;
    for (int i = 0; i < A[0].row; i++)
    {
        for (int j = 0; j < A[0].col; j++)
        {
            if (A[k].col == j && A[k].row == i)
            {
                printf("%d ", A[k++].value);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}

void transposeMatrix(struct triplet A[], struct triplet transpose[])
{
    int k = 1;
    //* loop through OG matrix and swap row and column values
    transpose[0].value = A[0].value;
    transpose[0].row = A[0].col;
    transpose[0].col = A[0].row;
    for (int i = 1; i < A[0].value; i++)
    {
        transpose[k].col = A[i].row;
        transpose[k].row = A[i].col;
        transpose[k++].value = A[i].value;
    }

    //* Sort the transpose matrix in sorted order based on row index;
    int temp;
    for (int i = 1; i < transpose[0].value; i++)
    {
        for (int j = 1; j < transpose[0].value - i - 1; j++)
        {
            if (transpose[j].row > transpose[j + 1].row)
            {
                temp = transpose[j].row;
                transpose[j].row = transpose[j + 1].row;
                transpose[j + 1].row = temp;

                temp = transpose[j].col;
                transpose[j].col = transpose[j + 1].col;
                transpose[j + 1].col = temp;

                temp = transpose[j].value;
                transpose[j].value = transpose[j + 1].value;
                transpose[j + 1].value = temp;
            }
        }
    }
}

int main()
{
    struct triplet A[100], transpose[100];
    int noOfRow, noOfCol;

    accept_sparseMatrix(A, &noOfRow, &noOfCol);
    printf("Normal matrix: \n");

    display(A);
    transposeMatrix(A, transpose);

    printf("Tranpsose matrix: \n");
    display(transpose);

    return 0;
}