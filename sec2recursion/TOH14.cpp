#include<stdio.h>

 int TOH(int n , int A , int B , int C)
 {
     if(n>0)
     {
         TOH(n-1, A, C, B);
         printf("from Tower %d to Tower %d \n", A , C);
         TOH(n-1, B, A , C);
     }
     else return 0;
 }

 int main()
 {  
    TOH(3,1,2,3);
     return 0;
 }