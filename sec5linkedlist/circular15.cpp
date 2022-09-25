#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * head;

void create(int A[], int n)
{
    struct node *t, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc((sizeof(struct node)));
        t->data= A[i];
        t->next = last->next;
        last->next = t;
        last = t;
        

    }
}

void display(struct node *p)
{
    do
    {
        printf("%d\n", p->data);
        p = p->next;
    } while (p != head);
}

void recursive(struct node *p)
{
    static int flag =0;
    if (p!=head || flag ==0 )
    {
        flag = 1;
        printf("%d\n", p->data);
        recursive(p->next);
    }
    flag = 0;
}
int main()
{
    int A[] = {2, 3, 4, 6, 21};
    create(A, 5);
    display(head);
    recursive(head); 
    return 0;
}

