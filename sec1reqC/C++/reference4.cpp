// refrenece share same memory , it does not create any other memory , it is just a nick name of variable ,thats all
#include<iostream>
using namespace std;
int main()
{
    int a= 10;
    int &r= a;
    cout<<a<<r<<endl;
    r++;
    cout<<a<<r<<endl;

    
    return 0;
}