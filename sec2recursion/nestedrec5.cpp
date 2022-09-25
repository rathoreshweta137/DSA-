#include<iostream>
using namespace std;

int func(int n)
{
    if(n>100)
    return n-10;
    else 
       return func(func(n+11));
}

int main()
{
    int r ;
    r = func(95);
    cout<<r<<endl;
    return 0;
}