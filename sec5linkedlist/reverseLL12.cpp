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

// Iterative version
int count(struct node *p)
{
    int c = 0;
    while (p!=0)
    {
        c++;
        p = p->next;
    }
    return c;
}

void revA(struct node *p)
{
    p = first ;
    int *a;
    int i = 0;
    a = (int *)malloc(sizeof(int)*count(p));
    while (p!=0)
    {
        a[i] = p->data;
        p=p->next;
        i++;
    }
    p = first ;
    i--;
    while (p!=0)
    {
        p->data = a[i--];
        p = p->next;
    }
    
    
}


int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
    revA(first);
    
  
    
    return 0;
}