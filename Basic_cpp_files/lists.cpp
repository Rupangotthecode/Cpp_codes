#include<iostream>
#include<list>
#include<iterator>
using namespace std;
template<class T>
void display(list<T>l)
{
    for(auto i=l.begin();i!=l.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l1;
    for(int i=1;i<=10;i++)
    {
        l1.push_back(i*2);
    }
    display(l1);
    /* l1.assign(3,10);
    display(l1); */
    l1.emplace_back(3);
    display(l1);
    l1.clear();
    l1={1,9,4,2,4,3,2};
    display(l1);
    l1.sort();
    display(l1);
    l1.unique();
    display(l1);
    list<int>::iterator it;
    it=l1.begin();
    cout<<*it;
    return 0;
}