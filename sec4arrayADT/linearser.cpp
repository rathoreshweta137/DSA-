#include <iostream>
using namespace std;
struct array
{
    int A[20];
    int size = 20;
    int length = 5;
};

void display(struct array arr)
{
    printf("Elements of an arrays\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}
 void swap(int *x, int *y)
     {
         int temp;
         temp = *x;
         *x=*y;
         *y=temp;
     }
// improving linear search 1) move to front /head F , 2) Transposition T
/*int linearsearchT(struct array *arr, int key)
{   
    
    for (int i = 0; i<arr->length; i++)
    {
        if (key==arr->A[i])  
        {  
            swap(&arr->A[i],&arr->A[i-1]);
           return i-1;
        }
        
    }
    return -1;
    
}*/

int linearsearchF(struct array *arr, int key)
{   
    
    for (int i = 0; i<arr->length; i++)
    {
        if (key==arr->A[i])  
        {  
            swap(&arr->A[i],&arr->A[0]);
           return 0;
        }
        
    }
    return -1;
    
}

/*int linearsearch(struct array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key==arr.A[i])  
        {
           return i;
        }
        
    }
    return -1;
    
}*/
int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 20, 5};
   // printf("%d\n",linearsearch(arr, 6) );
  // printf("%d\n", linearsearchT(&arr, 5));
  printf("%d\n", linearsearchF(&arr, 5));
    display(arr);
    return 0;
}