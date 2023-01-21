#include<iostream>
using namespace std;
class absemployee{
     virtual void promo()=0;
};
class employee:absemployee{
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
    void promo()
    {
        if(age>20)
        cout<<"yes";
        else
        cout<<"no";

    }
};
int main()
{
    employee e1=employee("rupan","facebook",22);
    e1.intro();
    e1.promo();
    return 0;
}