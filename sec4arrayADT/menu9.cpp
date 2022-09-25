#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct array
{
    int *A;
    int size;
    int length;
};
void insert(struct array *arr, int index, int value)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i >index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}
int dlt(struct array *arr, int index)
{
    int x;
    x = arr->A[index];
    if (index>=0 && index<arr->length)
    {
        for (int i = index; i<arr->length-1; i++)
        {
           arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        
        return x;
    }
    return -1;
    
    
}
int linear(struct array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]== key)
        {
            return i;
        }
        
    }
    return -1;
    
    
}
int Binsearch(struct array arr, int key)
{
   int l , mid , h;
   l=0;
   h=arr.length-1;
   
   while (l<=h)
   {
      mid = (l+h)/2;
      if (key==arr.A[mid])
      {
        return mid;
      }
      else if (key<arr.A[mid])  
      {
         h=mid-1;
      }
      else return l = mid+1;
      
   }
   return -1;
}
void get(struct array arr , int index)
{
    if (index>=0 && index<arr.length)
    {
       cout<< arr.A[index]<<endl;
    }
    
}
void set(struct array *arr, int index, int value)
{   if (index>=0 && index<arr->length)
    {
        arr->A[index]   = value;
    }  
    
    
}
void max(struct array arr )
{   
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]>max )
        {
            max = arr.A[i];
        }
        
    }
    cout<<"The maximum element in an array is "<<max<<endl;
    
}
void min(struct array arr )
{   
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]<min )
        {
            min = arr.A[i];
        }
        
    }
    cout<<"The minimum element in an array is "<<min<<endl;
    
}
void sum(struct array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    cout<<"The sum of the all elements in an array is "<<sum<<endl;
    
}
void avg(struct array arr)
{
    int sum = 0;
    float average;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    average = sum / arr.length;
    cout<<"The average of the elements in an array is "<<average<<endl;
    
}
void reversearray(struct array *arr)
{  
    int *B;
    B = (int *)malloc(arr->length*sizeof(int));
    for (int j = 0, i = arr->length-1; i>=0; i--, j++)
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
    cout << "elements of an array are printed below:" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}
int main()
{
    struct array arr;
    cout << "Enter the size of an array" << endl;
    cin >> arr.size;
    cout << "Enter the length of an array" << endl;
    cin >> arr.length;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    cout<<"Enter elements in an array\n";
    for (int i = 0; i < arr.length; i++)
    {   
        cout<<"Enter element of an array at index "<<i<<endl;
        cin>>arr.A[i];
    }
    
    
    //insert(&arr, 2, 100);
   // cout<<"deleted element is "<<dlt(&arr, 2)<<endl;
   //cout<<"The index is "<<linear(arr,2)<<endl;
    //cout<<"The index of the key using BS is "<<Binsearch(arr, 1)<<endl;
    // get(arr, 2);
   // set(&arr, 2, 1000000);
  // max(arr);
   //min(arr);
   //sum(arr);
   //avg(arr);
  
   reversearray(&arr);
    display(arr);

    return 0;
}
