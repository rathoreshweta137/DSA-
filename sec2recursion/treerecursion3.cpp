#include<iostream>
using namespace std;

void func( int n)
{
    if( n >0)
    {
        cout<<n<<endl;
        func(n-1);       // phyli recursive call , puri terminate hone ke baad hi aage ke statement execute honge , or operations bhi tabhin honge
        func(n-1);       // ye wali statement , 9th statement ke puri tarh terminate hone ke baad execute hogi 
    }
}

int main()
{   
    func(3);
    return 0;
}