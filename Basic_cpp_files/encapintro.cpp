#include<iostream>
using namespace std;
class employee{
    private:
    string name;
    string company;
    int age;
    public:
     
    void intro(){
        cout<<"name-"<<name<<endl;
        cout<<"company"<<company<<endl;
        cout<<"age"<<age<<endl;
    }
    void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
};
int main()
{
    employee e1;
    e1.setname("nikhil");
    cout<<e1.getname();

    return 0;
}