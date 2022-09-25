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

void insert(struct node *p, int index, int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (index >= 0 || index < length(head))
    {
        if (index == 0)
        {
            t->data = x;
            if (head == NULL)
            {
                head = t;
                head->next = head;
            }
            else
            {
                while (p->next != head)
                {
                    p = p->next;
                }
                p->next = t;
                t->next = head;
                head = t;
            }
        }
         else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }

        t->data = x;
        t->next = p->next;
        p->next = t;
    }
    }
   
}

int main()
{
    int A[] = {2, 3, 4, 6, 21};
    create(A, 5);
    insert(head , 0 ,10);
    insert(head , 3 , 45);
    display(head);

    return 0;
}
