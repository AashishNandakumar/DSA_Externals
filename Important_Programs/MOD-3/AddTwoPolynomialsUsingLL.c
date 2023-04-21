#include <stdio.h>

struct Node
{
    int coeff;         // coefficient of the term
    int degree;        // degree of the term
    struct Node *next; // pointer to the next term in the polynomial
};

struct Node *addPolynomials(struct Node *poly1, struct Node *poly2)
{
    struct Node *result = NULL; // head of the resulting linked list
    struct Node *tail = NULL;   // tail of the resulting linked list
    struct Node *ptr1 = poly1;  // pointer to traverse the first linked list
    struct Node *ptr2 = poly2;  // pointer to traverse the second linked list

    // Traverse both linked lists until one of them is exhausted
    while (ptr1 != NULL && ptr2 != NULL)
    {
        // Compare the degrees of the current terms
        if (ptr1->degree == ptr2->degree)
        {
            // If the degrees are equal, add the coefficients and create a new term
            int sum = ptr1->coeff + ptr2->coeff;
            if (sum != 0)
            {
                struct Node *term = (struct Node *)malloc(sizeof(struct Node));
                term->coeff = sum;
                term->degree = ptr1->degree;
                term->next = NULL;
                // Add the new term to the resulting linked list
                if (result == NULL)
                {
                    result = term;
                    tail = term;
                }
                else
                {
                    tail->next = term;
                    tail = term;
                }
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if (ptr1->degree > ptr2->degree)
        {
            // If the degree of the current term in the first list is greater,
            // add it to the resulting linked list as is.
            struct Node *term = (struct Node *)malloc(sizeof(struct Node));
            term->coeff = ptr1->coeff;
            term->degree = ptr1->degree;
            term->next = NULL;
            if (result == NULL)
            {
                result = term;
                tail = term;
            }
            else
            {
                tail->next = term;
                tail = term;
            }
            ptr1 = ptr1->next;
        }
        else
        {
            // If the degree of the current term in the second list is greater,
            // add it to the resulting linked list as is.
            struct Node *term = (struct Node *)malloc(sizeof(struct Node));
            term->coeff = ptr2->coeff;
            term->degree = ptr2->degree;
            term->next = NULL;
            if (result == NULL)
            {
                result = term;
                tail = term;
            }
            else
            {
                tail->next = term;
                tail = term;
            }
            ptr2 = ptr2->next;
        }
    }

    // Add any remaining terms from the first linked list
    while (ptr1 != NULL)
    {
        struct Node *term = (struct Node *)malloc(sizeof(struct Node));
        term->coeff = ptr1->coeff;
        term->degree = ptr1->degree;
        term->next = NULL;
        if (result == NULL)
        {
            result = term;
            tail = term;
        }
        else
        {
            tail->next = term;
            tail = term;
        }
        ptr1 = ptr1->next;
    }

    // Add any remaining terms from the second linked list
    while (ptr2 != NULL)
    {
        struct Node *term = (struct Node *)malloc(sizeof(struct Node));
        term->coeff = ptr2->coeff;
        term->degree = ptr2->degree;
        term->next = NULL;
        if (result == NULL)
        {
            result = term;
            tail = term;
        }
        else
        {
            tail->next = term;
            tail = term;
        }
        ptr2 = ptr2->next;
    }
}

int main()
{
    //! TODO

    return 0;
}