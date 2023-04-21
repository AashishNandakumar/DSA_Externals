#include <stdio.h>

void BFS_graph(int G[][7], int start, int n)
{
    struct node *q; //* Assuming this is a Queue using linkedlist
    int visited[7] = {0};

    printf("%d ", start);
    visited[start] = 1;
    enqueue(start);
    int i;
    while (!isEmpty())
    {
        i = dequeue();
        for (int j = 0; j <= n; j++)
        {
            if (G[i][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                enqueue(j);
                visited[j] = 1;
            }
        }
    }
}

int main()
{
    //! TODO
    return 0;
}