
#include<iostream>
using namespace std;

template <class T>
class arithametic 
{  private:
T length;
T breadth;
public:
arithametic(T a, T b);
T add();
T sub();
};

template <class T>
arithametic<T>::arithametic(T a , T b)
{
    this->a=a;
    this->b=b;

}

template <class T>
 T arithametic <T> :: add ()
{
    T c;
    c = a+b;
    return c;

    
}

int main()
{
    arithametic <int> ar(10, 5);
    cout<<ar.add();
    return 0;
}

// error hain please check it at once