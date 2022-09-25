// call by value

/*#include<iostream>
using namespace std;

int add(int a, int b)
    {
       int c = a+b;
    }

int main()
{  
  int x=10;
  int y=20;
  int z;
  z=add(10,20);
  cout<<"the sum is:"<<z<<endl;
    return 0;
}*/

// remember the how we declare functions ....prototype of functions

// call by address

/*#include<iostream>
using namespace std;
 int swap(int *x, int *y)
 {
     int temp;
     temp = *x;
     *x=*y;
     *y=temp;

 }

 int main()
 {
 int a=10;
    int b=20;
    swap(a,b);
    printf("%d %d ",a,b);
    return 0;
 }*/

 // call by reference ....only diff is that we havr to use & , we pass address of the actual parameters to
 // formal parameters . by this we can change the value of actual parameter easily ...

 #include<iostream>
 using namespace std;
 int swap(int &x , int &y)
 {
     int temp ;
     temp = x;
     x=y;
     y= temp;
 }
 int main()
 {  
    int a= 10; 
    int b =100;
    swap(a,b);
    cout<<"a:"<<a<<"b:"<<b;
     return 0;
 }


   
 




