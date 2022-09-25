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

int issorted(struct node *p)
{
    int x = INT16_MIN;
    while (p!=0)
    {
        if(p->data<x)
        {
             return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
    
}

int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
    display(first);
    cout<<issorted(first)<<endl;
    return 0;
}