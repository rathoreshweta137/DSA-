#include<iostream>
#include<stdio.h>
using namespace std;

// iterative approach
int fibi(int n)
{   
    int t0 = 0;
    int t1 = 1;
    int s;
    if(n<=1)
    return n;
    for (int i = 2; i <=n; i++)
    {
       s=t0 + t1;
       t0 = t1;
       t1 = s;
      

    }
    return s;
    

}

// recursive approach
/*int fib(int n)
{
    if(n<=1)
    return n;
    else 
    return fib(n-2)+ fib(n-1);
}*/

int main()
{   
    int r ;
   // r = fib(5);
    r = fibi(5);
    cout<<r<<endl;

    return 0;
}