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

node * search(struct node *p, int key)
{   struct node *q =NULL;
    while (p!=0)
    {
        if (key==p->data)
        {
           q->next = p->next;
           p->next = first;
           first = p;  
           return p; 
        }
        else q = p ;
         p= p->next;
        
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

int main()
{
    int A[] = {3, 4, 5, 66, 53};
    create(A, 5);
   
    cout<<search(first , 66)<<endl;
     display(first);
    return 0;
}
