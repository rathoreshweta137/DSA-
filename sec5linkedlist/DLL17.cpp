#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{   
    struct node *prev;
    int data;
    struct node *next;
} * first;

void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next =first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc((sizeof(struct node)));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
   while (p!=NULL)
   {
      printf("%d\n", p->data);
      p=p->next;
   }
   
}


int main()
{
    int A[] = {2, 3, 4, 6, 21};
    create(A, 5);
    
    display(first);

    return 0;
}
