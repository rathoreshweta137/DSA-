
#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};

void display(struct array arr)
{
    printf("The elements of an array are :");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
    
}
int main() 
{   
    struct array arr;
    printf("Enter the size of an array :");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    int n;
    printf("Enter how many elements you wants to store:");
    scanf("%d", &n);
   
    printf("Enter elements in an array:");
    for (int i = 0; i<n; i++)
    {
        scanf("%d\n", &arr.A[i]);
    }
    arr.length = n;
    display(arr);

    
    return 0;
}