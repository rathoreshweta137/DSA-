#include<iostream>
using namespace std;

// int a = 5 is global variable 

int func(int n)
{
    static int x = 0;         // static variable will create a single copy 
    if(n>0)
    {
        x++;
        return func(n-1)+x;
    }
    return 0;
}
int main()
{
    int a =5;
    cout<<func(a)<<endl;
    return 0;
}