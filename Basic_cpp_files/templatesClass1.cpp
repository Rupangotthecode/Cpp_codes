#include<iostream>
using namespace std;
//templates are classes of classes 
//they can represent many data types.
//here we look at single template classes
template<class T>
class Add{
    public:
    T a;
    T b;
    T calcadd ()
    { 
        return a+b;
    }
};
int main()
{
    Add <int> a1;
    cin>>a1.a>>a1.b;
    cout<<"int addition="<<a1.calcadd()<<endl;
    Add <float> a2;
    cin>>a2.a>>a2.b;
    cout<<"float addition="<<a2.calcadd()<<endl;
    return 0;
}