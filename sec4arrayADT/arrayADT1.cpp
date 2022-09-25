#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
    void create()
    {
        cout<<"Enter number of elements : "<<endl;
        cin >> length ;
        cout<<"Enter the elements of an array:"<<endl;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
    }

    void display()
    {
        cout<<"The elements of an arrays are :"<<endl;
        for (int i = 0; i < length; i++)
        {
            cout<<A[i];

        }
        
    }
};

int main()
{   
    Array arr(10);
    arr.create();
    arr.display();
    
    
    return 0;
}

