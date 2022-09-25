#include<iostream>
using namespace std;

int fac(int n )
{
    if (n==0)
    return (1);
    else
    return fac(n-1)*n;

}

int main()
{   int r ;
    r = fac(5);
    cout<<r<<endl;
    return 0;
}