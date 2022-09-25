#include <stdio.h>
struct array
{
    int A[20];
    int size = 20;
    int length = 5;
};
void display(struct array arr)
{
    printf("Elements of an array \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}
void append(struct array *arr, int x)         // value change bhi krni h so call by address..pointer use karenge , so ->
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)

        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int del(struct array *arr, int index)
{
     if (index>=0 && index<arr->length)
     {
         int x;
         x = arr->A[index];
         for (int i = index; i < arr->length-1; i++)
         {
            arr->A[i]=arr->A[i+1];
         }
         arr->length--;
         return x;
         
     }
     return 0;
     
}

int main()
{
    struct array arr = {{1, 3, 4, 22, 10000}, 20, 5};
   // append(&arr, 10);
    //insert(&arr, 5, 11);
   printf("%d\n ", del(&arr, 1));
    display(arr);

    return 0;
}
