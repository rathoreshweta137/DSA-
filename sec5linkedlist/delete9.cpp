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

int del(struct node *p, int pos)
{
    int x, i;
    struct node  *q;
    q = NULL;
    if (pos == 1)
    {
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }

    return x;
}

void display(struct node *p)
{
    while (p != 0)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
    del(first, 1);
    del(first, 1);
    display(first);
    return 0;
}