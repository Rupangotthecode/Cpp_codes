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
class dev:public employee{//the public is the visibility mode. This means the public members of the base class become the public members of derived class. private visibility means the public members of base class become the private members of derived class.
    public:
    int codes;
    dev(string n,string c,int a,int co):employee(n,c,a)
    {
        codes=co;
    }

};
int main()
{
    dev d1=dev("rupan","nvidia",22,1109);
    d1.promo();
    d1.intro();
    return 0;

}