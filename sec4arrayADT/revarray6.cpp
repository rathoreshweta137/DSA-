#include<iostream>
#include<stdio.h>
using namespace std;
struct array
{
    int A[10];
    int size = 10;
    int length = 5;

};
/*void swap(int *x, int *y)
     {
         int temp;
         temp = *x;
         *x=*y;
         *y=temp;
     }


// dividing array into two parts , and swaping its elements
void rev(struct array *arr)
{
    for (int i = 0,  j = arr->length-1; i<j; i++, j--)
    {  
         swap(&arr->A[i], &arr->A[j]);
    }
    
}*/

void rev(struct array *arr)
{
    int *B;
    B = (int *)malloc(arr->length*sizeof(int));
    for (int i = arr->length-1 , j = 0; i>=0; i--, j++)
    {
        B[j]=arr->A[i];

    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i]=B[i];
    }
    
    
}
void display(struct array arr)
{
    cout<<"Elements of the array \n";
    for (int i = 0; i <arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}


int main()
{
    struct array arr = {{2,3,4,5,6},10,5};
    rev(&arr);
    display(arr);
   
    return 0;
}

