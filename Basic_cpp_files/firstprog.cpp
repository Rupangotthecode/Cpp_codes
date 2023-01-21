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
};
int main()
{
    employee e1;
    e1.name="rupan";
    e1.age=19;
    e1.company="fb";
    e1.intro();

    }