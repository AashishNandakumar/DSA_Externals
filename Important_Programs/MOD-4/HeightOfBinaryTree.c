#include <stdio.h>

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};

int height(struct Node *p)
{
    if (p == NULL)
        return 0;
    else
    {
        int left_height = height(p->lchild);
        int right_height = height(p->rchild);
        return (left_height > right_height ? left_height + 1 : right_height + 1);
    }
}

int main()
{

    return 0;
}