#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;

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
        t->data = A[i];
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
int length(struct node *p)
{
    int length = 0;
    do
    {
        length++;
        p = p->next;
    } while (p != head);

    return length;
}
int dlt(struct node *p, int index)
{
    struct node *q;
    int x;
    if (index < 0 || index > length(head))
    {
        return -1;
    }
    if (index == 1)
    {
        while (p->next != head)
        {
            p = p->next;
        }
        if (head == p)
        {

            x = head->data;
            free(head);
            head = NULL;
        }
        else
        {
            x = head->data;
            p->next = head->next;
            free(head);
            head = p->next;
        }
    }
    else
    {
        for (int i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}

int main()
{
    int A[] = {2, 3, 4, 6, 21};
    create(A, 5);
    dlt(head , 1);
    display(head);

    return 0;
}
