#include<stdio.h>
void insertion(int A[] , int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j]>x)
        {
            A[j+1]= A[j];
            j--;
        }
        A[j+1]=x;
    }
    
}

int main()
{   
    int A[] = {8,5,7,3,2};
    int n = 5;
    insertion(A, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    

    return 0;
}