#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    

};

int main()
{
   struct rectangle r1;
   r1.length = 70;
   r1.breadth =10;
   cout<<r1.length*r1.breadth<<endl;
   cout<<sizeof(r1)<<endl;


    return 0;
}