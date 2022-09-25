#include<iostream>
#include<stdio.h>
using namespace std;
struct array
{
    int A[20];
    int size = 20;
    int length;
};
void display(struct array arr)
{  
    cout<<"Elements of an array:"<<endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
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
// recursive approach for binary search
/*int Rbinarysearch(int a[],int l , int h, int key)
{
        int mid;
        
        if (l<=h)
        {
            mid = (l+h)/2;
            if (key==a[mid])
            {
                return mid;
            }
            else if (key<a[mid])
            {
                return Rbinarysearch(a , l , mid-1, key);
            }
            else return Rbinarysearch(a,mid+1,h , key);
        }
        return -1;
        
}*/


int main()
{   
    struct array arr = {{2,3,4,5,6},20 , 5};
    cout<<Binsearch(arr,5);
    //cout<<Rbinarysearch(arr.A,0, arr.length,3);
    return 0;
}
