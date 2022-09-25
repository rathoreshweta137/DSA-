#include<iostream>
using namespace std;

/*void func(int A[])
{  
    // we can not use for each loop over a pointer
    // we can use for loop to print the elements of array
    for (int i = 0; i < 4; i++)
    {
        cout<<A[i]<<endl;
    }
    
    cout<<sizeof(A)/sizeof(int);  
    // will print size of pointer , not the size of array
}
int main()

{   int A[]={1,2,3,4,5};
    cout<<sizeof(A)/sizeof(int);
    func(A);
    return 0;
}*/

// we can change the value of elements using pointers 

/*void func(int *A)
{
    A[0]=100;

}

int main()
{  int A[5]={1,2,3,4,5};
    func(A);
    for(int x:A)
    {
       cout<<x<<endl;
    }
    return 0;
}*/

// creating an array inside a function and returning its address , a func returning an array

#include<iostream>
using namespace std;

int * func(int size)  // fucnction func is creating an arrayand returning of pointer p that type array
{    
    int *p;
    p = new int[size];  // array is created in heap

    for(int i=0; i<size; i++ )
    p[i]=i+1;        // intialising the elements of array 

    return p;
}

//main function is using that array
int main()
{

    int *ptr, size=10;
    ptr = func(10);
    for(int i=0; i<size; i++)
    {
        cout<<ptr[i]<<endl;
    }

}