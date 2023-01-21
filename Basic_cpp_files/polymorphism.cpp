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
     virtual  void func()
    {
        cout<<name<<" is an employee";
    }
};
class dev:public employee{
    public:
    int codes;
    dev(string n,string c,int a,int co):employee(n,c,a)
    {
        codes=co;
    }
    void func()
    {
        cout<<name<<" has written "<<codes<<" codes";
    }

};
int main()
{
    dev d1=dev("rupan","nvidia",22,1109);
    employee *e1=&d1;
    e1->func();
    return 0;

}