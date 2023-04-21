#include <stdio.h>

void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};

    if (visited[start] == 0)
    {
        printf("%d ", start);
        visited[start] = 1;
        for (int j = 0; j <= n; j++)
        {
            if (G[start][j] == 1)
                DFS(G, j, n);
        }
    }
}

int main()
{
    //! TODO
    return 0;
}