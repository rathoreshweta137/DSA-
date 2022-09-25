#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

/*struct stack
{
    int size;
    int top;
    int *S;
};

void create(struct stack *st)
{
    cout << "Enter the size of the stack ";
    cin >> st->size;
    st->top = -1;
    st->S = (int *)malloc(sizeof(int) * st->size);
}
void display(struct stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d\n", st.S[i]);

    }
}
void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Overflow";
    }
    else
        st->top++;
        st->S[st->top] = x;
}
int pop(struct stack *st)
{
    int x =-1;
    if (st->top == -1)
    {
            cout<<"Stack underflow";
    }

    else x = st->S[st->top];
    st->top--;
    return x;

}
int peek(struct stack st , int index)
{
    int x = -1;
    if (st.top-index+1<0)
    {
            printf("invalid index\n");
    }
    else  x = st.S[st.top-index+1];
    return x;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    // printf("The popped element is %d\n",  pop(&st));
    //display(st);
    printf("The seeked elements is %d\n", peek(st , 2)); // i want element at position 2 , means upar se 2nd postion pe


    return 0;
}*/

struct node
{
    int data;
    struct node *next;

} *top = NULL;

void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        cout << "Stack overflow\n";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct node *p;
    int x = -1;
    if (top == NULL)
    {
        printf("Stack underflow");
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;
}
int peek(int index)
{
    struct node *p;
    p = top;
    int x = -1;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        return p->data;
    }

    return -1;
}
void display()
{
    struct node *p;
    while (p != NULL)
    {
        printf("%d \n", p->data);
        p = p->next;
    }
}

int main()
{
    push(100);
    push(50);
    push(99);
    printf("The poped element is %d\n", pop());
    printf("The peek element is %d\n ", peek(1));
    // display();
    return 0;
}