#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ 
    int a=10;
    int *p;
    p = &a;
    cout<<*p<<endl;
    cout<<*p<<&a<<p<<endl;


    int arr[]={1,2,3,4,5};
    int *h;
    h=arr;

    for(int x: arr)
    {
         cout<<h<<endl;
         cout<<x<<endl;
    }


    // alloacating memory in heap by using pointers and mallock function

    int *m;
    m = (int*)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for (int i = 0; i <5; i++)
    {  
        cout<<p[i]<<endl;
    }

    free(m);

    // c++ mai sirf new ka use krke alloacte  kar sakte hain memory in heap , acting like malloc fucntion

    int *n;
    n = new int[5];
    n[0]=222;

    for (int i = 0; i <5; i++)
    {
       cout<<n[i]<<endl;
    }
    
    delete [ ] n;

    



 return 0;   
}