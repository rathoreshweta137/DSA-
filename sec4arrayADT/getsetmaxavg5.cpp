#include<iostream>
#include<stdio.h>
using namespace std;
struct array
{
    int A[10];
    int size = 10;
    int length = 5;

};
void display(struct array arr)
{
    cout<<"Elements of the array \n";
    for (int i = 0; i <arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}
int get(struct array arr, int index)
{
    if (index>=0 && index <arr.length)
    {
            cout<<arr.A[index];
    }
    
}
int set(struct array *arr, int index , int x)
{
    if (index >=0 && index<arr->length)
    {
        arr->A[index] = x;
    }
    
}

int sum(struct array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}
float avg(struct array arr)
{
    float sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return float(sum/arr.length);
}
int max(struct array arr)

{   int max = arr.A[0];
     for (int i = 1; i < arr.length; i++)
{
     
    if (arr.A[i]>max)
    {    
        max = arr.A[i];
    }
    
}
return max;

    
}

int main()
{
    struct array arr = {{2,3,4,5,6},10,5};
    //cout<<get(arr, 2);
    //cout<<set(&arr, 2 ,1000);
   // display(arr);
   // printf("%d\n", sum(arr));
  // printf("%f\n", avg(arr));
    printf("%d", max(arr));
    return 0;
}

