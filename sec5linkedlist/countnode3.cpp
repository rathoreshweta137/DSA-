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

// Recursive version
int Rcount(struct node *p)
{
    if (p==0)
    {
        return 0;
    }
    else return Rcount(p->next)+1;
    
}
// Iterative version for sum
int add(struct node *p)
{
    int sum = 0;
    while (p!=0)
    {
        sum = sum + p->data;
       p =  p->next;
    }
    return sum;
}
// Recursive version for sum
int Radd(struct node *p)
{
    if (p==0)
    {
        return 0;
    }
    else return Radd(p->next) + p->data;
    
}


int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
   // cout<<count(first)<<endl;
   // cout<<Rcount(first)<<endl;
    cout<<add(first)<<endl;
    cout<<Radd(first)<<endl;
    
    return 0;
}