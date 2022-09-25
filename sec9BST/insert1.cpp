#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

void insert( int key)
{
    struct node *t=root;
    struct node  *r=NULL;
    struct node *p;
    if (root == NULL)   // means first node bhi nahi h , NULL hain toh create first root node
    {   
        p = (struct node *)malloc(sizeof(struct node ));
        p->data = key ;
        p->lchild = p->rchild = NULL;
        root = p; // root will point p , root will point new node p , jo create hui hain
        return ;
    }

    while (t!=NULL)
    {   
        r=t;  // r is tailing pointer , jo t ko point karega , t ke peeche chalega 
        if (t->data > key)
        {
                t=t->lchild;
        }
        else if (t->data<key)
        {
             t=t->rchild;
        } 
        else 
              return ; 
    }
     p = (struct node *)malloc(sizeof(struct node ));
        p->data = key ;
        p->lchild = p->rchild = NULL;

        if (r->data>key)
        {
                r->lchild = p;     // link kar rhe hain hum new node ko tree se 
        }
        else r->rchild = p;
}

void inorder(struct node *p)
{
    if (p)
    {
            inorder(p->lchild);
            printf("%d ", p->data);
            inorder(p->rchild);
    }
    
}
// Iterative approach for search in BST
struct node *search(int key)          // return type will be node 
{
     struct node *t=root;
     while (t!=NULL)
     {
         if (key==t->data)
         {
                return t;
         }
         else if (key>t->data)
         {
            t =t->rchild;
         }
         else if (key<t->data)
         {
           t=  t->lchild;
         }
         
     }
     return NULL;
     
}

// recursive approach bhi krlena

int main()

{   struct node *temp;     // temp variable node is made to search 
    
    
     insert(30);
    insert(45);
    insert(1);
    insert(3);
    insert(300);

    inorder(root);
    temp = search(45);
    if (temp != NULL)
    {
        printf("Element is found %d ", temp->data);
    }
    else printf("Element not found");
    
    return 0;
}