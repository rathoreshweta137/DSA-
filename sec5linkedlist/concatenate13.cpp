#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first = NULL, *second = NULL, *third = NULL;

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
void create2(int B[], int m)
{
    struct node *t, *last;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = B[0];
    second->next = NULL;
    last = second;

    for (int i = 1; i < m; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = B[i];
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

void concatenate(struct node *p, struct node *q)
{
     third = p;
     while (p->next != NULL)
     {
        p=p->next;
     }
     p->next = q;
     q = NULL;

}

int main()
{
    int A[] = {3, 4, 5, 66, 53};
    int B[] = {10,20,30,299};
    create(A, 5);
    create2(B, 4);
    cout<<"1st linked list"<<endl;
    display(first);
    cout<<"2nd linked list"<<endl;
    display(second);
    concatenate(first , second);
    cout<<"concatenate linked list"<<endl;
    display(third);

    return 0;
}