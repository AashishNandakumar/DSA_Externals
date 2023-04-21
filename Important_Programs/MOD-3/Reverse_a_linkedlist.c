#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void Reverse(struct Node *first)
{
    struct Node *p, *q, *r;
    p = first;
    q = r = NULL;

    //* Concept of sliding pointers:
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
}

int main()
{
    //! Fill the linked List with values
    //! TODO

    return 0;
}