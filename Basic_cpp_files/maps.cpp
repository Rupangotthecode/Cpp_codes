#include<iostream>
#include<map>
#include<iterator>
using namespace std;
void display(map<int,string> m)
{
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}
int main()
{
    map<int,string> m1,m2;
    m1[100]="Rupan";
    m1[102]="Tom";
    m1[38]="Harry";
    display(m1);
    m2.insert(pair<int,string>(77,"umesh"));
    m2.insert(pair<int,string>(93,"Farhad"));
    m2.insert(pair<int,string>(22,"Ameen"));
    display(m2);
    return 0;
}