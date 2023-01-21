#include<iostream>
using namespace std;
class absemployee{//abstraction
     virtual void promo()=0;
};

class employee{
    public:
    string name;
    int age;
    int salary;
    employee(string n,int a,int s)//constructor custom-made
    {
        name=n;
        salary=s;
        age=a;
    }
    void intro()
    {
        cout<<"Hi,I am "<<name<<endl;
        cout<<"My age is "<<age<<endl;
        cout<<"My salary aim is "<<salary<<"lakhs"<<endl;
    }
     void promo()
    {
        if(age>20)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;

    }
    virtual void func()
    {
        cout<<"I love being employee"<<endl;
    }
};
class student{
    private:
    string name;
    int age;
    int marks;
    public:
    void setname(string n)//encapsulation
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
    void setage(int a)
    {
        age=a;
    }
    int getage()
    {
        return age;
    }
    void setmarks(int m)
    {
        marks=m;
    }
    int getmarks()
    {
        return marks;
    }
     void promo()
    {
        if(age>10)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;

    }
};
class dev:public employee{//inheritance
    public:
    int codes;
    dev(string n,int a,int s,int co):employee(n,a,s)
    {
        codes=co;
    }
    void func()
    {
        cout<<"I have solved "<<codes<<"codes"<<endl;
    }

};
int main()
{
    employee e1=employee("Rupan",19,10);
    e1.intro();
    e1.promo();
    student s1;
    s1.setname("Abhi");
    s1.setage(19);
    s1.setmarks(92);
    cout<<"Hi,I am "<<s1.getname()<<endl;
    cout<<"My age is "<<s1.getage()<<endl;
    cout<<"My marks aim is "<<s1.getmarks()<<"percent"<<endl;
    s1.promo();
    dev d1=dev("Ravi",22,20,1000);
    d1.intro();
    e1.func();
    employee* e2=&d1;//polymorphism
    e2->func();
    return 0;

}