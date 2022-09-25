/*#include<stdio.h>
int main()
{   
   /* int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("%d\n", sizeof(arr));*/

    /*int arr[20];
    printf("Enter the elements of the array:");
    for (int i = 0; i <11; i++)
    {
      scanf("%d", arr);
    }*/
    

    // think why we can not take variable array like this
    /*int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    arr[0]=1;
    arr[1]=3;

    for (int i = 0; i <n; i++)
    {
      printf("%d\n", arr);
    }*/

    

    

    

    
   // return 0;
//}



#include<iostream>
using namespace std;
int main()
{
  int arr[5];
  arr[0]=4;
arr[1]=7;
arr[2]=10;
arr[3]=88;
arr[4]=1000000;

cout<<arr[4]<<endl;
cout<<sizeof(arr)<<endl;
printf("%d\n", arr[4]);

for (int i = 0; i < 5; i++)
{
 cout<<arr[i]<<endl;
}

int arrb[10]= {1,2};            // rest elements will taken as 0 if we does not intialise it but once declared
cout<<arrb[7]<<endl;

for (int x: arrb)               //  for each loop is used to acess all elements of array
{
  cout<<x<<endl;
}


// variable size array


int n;
cout<<"Enter the size of the array:"<<endl;
cin>>n;
int array[n];
array[0]=99;
array[1]=8888;

for (int x: array)
{
  cout<<x<<endl;                   // here we can intialise the array of variable size in c++ , not intialised elements will taken as garabage
}


return 0;
}


