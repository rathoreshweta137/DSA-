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
    display(first);
    return 0;
}

// c++ code

/*class Node{
public:
    int data;
    Node* next;
};
 
int main() {
 
    int A[] = {3, 5, 7, 10, 15};
 
    Node* head = new Node;
 
    Node* temp;
    Node* last;
 
    head->data = A[0];
    head->next = nullptr;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
        // Create a temporary Node
        temp = new Node;
 
        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;
 
        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
 
    // Display Linked List
    Node* p = head;
 
    while (p != nullptr){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
 
    return 0;
}*/