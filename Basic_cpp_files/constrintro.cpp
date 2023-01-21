#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    string company;
    int age; 
    void intro(){
        cout<<"name-"<<name<<endl;
        cout<<"company"<<company<<endl;
        cout<<"age"<<age<<endl;
    }
    employee(string n,string c,int a)
    {
        name=n;
        company=c;
        age=a;
    }
};
int main()
{
    employee e1=employee("rupan","facebook",19);
    e1.intro();
    return 0;
}