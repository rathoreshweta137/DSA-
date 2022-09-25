#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p != 0)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
// Iterative version of linear search
node * search(struct node *p, int key)
{
    while (p!=0)
    {
        if (key==p->data)
        {
                return p;
        }
        p = p->next;
        
    }
    return NULL;

}
// recursive veriosn of linear search
node * Rsearch(struct node *p, int key)
{
    if (p==0)
    {
        return NULL;
    }
    if (key==p->data)
    {
        return p;
    }
    else return Rsearch(p->next, key);

}

int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
    display(first);
    cout<<search(first, 66)<<endl;
    cout<<Rsearch(first, 66)<<endl;
    return 0;
}