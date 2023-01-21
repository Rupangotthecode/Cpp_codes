#include<iostream>
#include<exception>
using namespace std;
class Myexc:public exception{
    public:
    const char* what() const throw()
    {
        return "a fat faggot";
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    try{
        if(y==0)
        {
            Myexc e;
            throw e;
        }
        else{
            cout<<x/y<<endl;
        }
    }
    catch (exception &e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}