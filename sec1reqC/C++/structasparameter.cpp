#include<iostream>
using namespace std;

void func(struct rectangle r)
{
    printf("Length and breadth is ", r.length, r.breadth);
}

struct rectangle
{
    int length;
    int breadth;

};
int main()
{
  struct rectangle r = {10,20};
 cout<<"length:"<<r.length<<"breadh:"<<r.breadth<<endl;
 func(r);
 return 0;
 
}