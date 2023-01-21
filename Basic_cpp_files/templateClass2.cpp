#include<iostream>
using namespace std;
//templates are classes of classes 
//they can represent many data types.
//here we look at multiple template classes
template<class T1=char, class T2=int>
class Show{
    public:
    T1 data1;
    T2 data2;
    Show(T1 a,T2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<"data1="<<data1<<endl;
        cout<<"data2="<<data2<<endl;
    }
};
int main()
{
    Show <> s  ('a',13);//default mode
    s.display();
    Show <int,char> s1 (1,'B');//overriden mode
    s1.display();
    return 0;
}