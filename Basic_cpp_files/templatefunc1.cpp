#include<iostream>
using namespace std;
template <class T>//function template;
T Mul(T a,T b)
{
    return a*b;
}

void display(int a)
{
    cout<<"The normal function:"<<a<<endl;
}

template<class T>
void display(T a)
{
    cout<<"The template function:"<<a<<endl;
}
//when overriding a function template the function with direct datatype is prioritized over the templatized one

int main()
{
    cout<< Mul(3.1,8.2)<<endl;;
    display(2);
    display('c');
    return 0;
}