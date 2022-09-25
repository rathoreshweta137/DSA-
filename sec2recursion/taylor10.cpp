#include<iostream>
using namespace std;
#include<stdio.h>


double e(int x , int n)
{
    static double s = 1;
    if(n==0)
    return s;
    else
      s = 1+x*s/n;
      return e(x, n-1);
}
/*double e(int x , int n)
{
    int s= 1;
    for ( n>0; n--;)
    {
        s =  1+x/n * s;
    }
    return s;
    
}*/

int main()
{    
    printf("%lf \n ", e(1,10));
    
    return 0;
}