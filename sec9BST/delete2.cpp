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
int height(struct node *p)
{
    int x , y;
    if (p!=NULL)
    {
            x = height(p->lchild);
            y = height(p->rchild);
            if (x>y)
            {
                    return x+1;
            }
            else return y+1;
            
    }
    return 0;
    
}

struct node * Inpre(struct node * p)
{
    while (p && p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
    
}
struct node * Insucc(struct node * p)
{
    while (p && p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
    
}
// recursive approach bhi krlena

struct node *del(struct node *p , int key)
{   struct node *q;

    if (p==NULL)
    {
            return NULL;
    }
    if (p->lchild==NULL && p->rchild==NULL)
    {
        if (p==root)
        {
                root =NULL;
        }
        free(p);
        return NULL;
    }
    
    
    if (key>p->data)
    {
        p->rchild = del(p->rchild , key);
    }
    else if (key<p->data)
    {
         p->lchild = del(p->lchild , key);
    }
    else
    {
        if (height(p->lchild)>height(p->rchild))    
        {
            q = Inpre(p->lchild);
            p->data = q->data;
            p->lchild = del(p->lchild , q->data);
        }

        else
        {
             q = Insucc(p->rchild);
            p->data = q->data;
            p->rchild = del(p->rchild , q->data);
        }
        
    }
    
}
int main()

{   struct node *temp;     // temp variable node is made to search 
    
    
     insert(30);
    insert(45);
    insert(1);
    insert(3);
    insert(300);

    del(root , 45);
    inorder(root);
    temp = search(45);
    if (temp != NULL)
    {
        printf("Element is found %d ", temp->data);
    }
    else printf("Element not found");
    
    return 0;
}