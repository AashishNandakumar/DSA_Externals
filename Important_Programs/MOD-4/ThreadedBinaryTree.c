#include <stdio.h>
#include <stdlib.h>

// node structure for threaded binary tree
typedef struct ThreadedNode
{
    int data;                   // data stored in the node
    struct ThreadedNode *left;  // left child pointer
    struct ThreadedNode *right; // right child pointer
    int leftThread;             // flag to indicate if left child pointer is a thread
    int rightThread;            // flag to indicate if right child pointer is a thread
} ThreadedNode;

// traverse an inorder threaded binary tree
void inorderTraversal(ThreadedNode *root)
{
    ThreadedNode *curr = root;
    while (curr != NULL)
    {
        // find the leftmost node in the subtree rooted at curr
        while (curr->leftThread == 0)
        {
            curr = curr->left;
        }

        // visit the node
        printf("%d ", curr->data);

        // follow the thread to the inorder successor of curr
        while (curr->rightThread == 1 && curr->right != NULL)
        {
            curr = curr->right;
            printf("%d ", curr->data);
        }

        // move to the right child node
        curr = curr->right;
    }
}
