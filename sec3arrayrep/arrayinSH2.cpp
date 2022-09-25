#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    cout << "Static array !!" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    int *p;
    p = new int[10];
    p[1] = 10000;
    cout << "Dynamic array in C++ !!";
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    }

    int *q;
    q = (int *)malloc(6 * sizeof(int));
    q[1] = 22222;
    cout << "Dynamic array in C !!";
    for (int i = 0; i < 6; i++)
    {
        cout << q[i] << endl;
    }

    return 0;
}