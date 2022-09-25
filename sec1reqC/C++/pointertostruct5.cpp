#include<iostream>
using namespace std;
struct rectangle 
    {
        int length;
        int breadth;
    };

int main()
{   

    // static object is created
    /*struct rectangle r;
    struct rectangle *p=&r;
    r.length=10;
    r.breadth=20;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;*/



    // dynamic object is created inside a heap and pointer is pointing there
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length =50;
    p->breadth =5;

    cout<<p->breadth<<endl;



    

    return 0;
}