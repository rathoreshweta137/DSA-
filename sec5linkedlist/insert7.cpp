#include <iostream>
#include <iostream>
#include <stdio.h>
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
int count(struct node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (index < 0 || index > count(first))
    {
        return;
    }
    else if (index == 0)
    {
        t->data = x;
        t->next = first;
        first = t;
    }
    else
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }

    t->data = x;
    t->next = p->next;
    p->next = t;
}

int main()
{
    int A[] = {2, 42, 66, 344, 4};
    create(A, 5);
    insert(first, 2, 100);
    display(first);
    return 0;
}
