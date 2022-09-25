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

// Itertiave version
int max(struct node *p)
{
    int m = INT16_MIN;
    while (p)
    {
        if(p->data>m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
    
}

// Recurisve version
int Rmax(struct node *p)
{
    int x =0 ;
    if (p==0)
    {
            return INT16_MIN;
    }
    else 
    {
        x =   Rmax(p->next);
        if (x>p->data)
        {
                return x;
        }
        else return p->data;
        
    }
    
}


int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
   cout<<max(first)<<endl;
   cout<<Rmax(first)<<endl;
    
    return 0;
}