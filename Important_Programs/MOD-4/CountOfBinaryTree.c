#include <stdio.h>

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};

int count(struct Node *p)
{
    if (p == NULL)
        return 0;

    return count(p->lchild) + count(p->rchild) + 1;
}

int main()
{
    //! TODO
    return 0;
}