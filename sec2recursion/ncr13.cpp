#include<iostream>
#include<stdio.h>
using namespace std;

int fac(int n)
{
    if(n==0)
    return 1;
    else 
    return fac(n-1)*n;

}

int ncr(int n , int r)
{
    int t1 , t2 , t3;
    t1 = fac(n);
    t2 = fac(r);
    t3 = fac(n-r);
    return t1/(t2*t3);
}

// without using factorial func. , by the help of pascal triangle 
/*int C(int n , int m)
{
    if(m==0 || n==m)
    return 1;
    else return C(n-1, m-1)+ C(n-1, m);
}*/

int main()
{
    int r;
    r = ncr(4,2);
    cout<<r<<endl;
}
