#include<iostream>
using namespace std;
class date{
    public:
    int day;
    int mon;
    int year;
    string str_month;
    string month(int m)
    {
        
        switch(m)
        { 

            case 1: 

            str_month = "January"; 

            break; 

            case 2: 

            str_month = "February"; 

            break; 

            case 3: 

            str_month = "March"; 

            break; 

            case 4: 

            str_month = "April"; 

            break; 

            case 5: 

            str_month = "May"; 

            break; 

            case 6: 

            str_month = "June"; 

            break; 

            case 7: 

            str_month = "July"; 

            break; 

            case 8: 

            str_month = "August"; 

            break; 

            case 9: 

            str_month = "September"; 

            break; 

            case 10: 

            str_month = "October"; 

            break; 

            case 11: 

            str_month = "November"; 

            break; 

            case 12: 

            str_month = "December"; 

            break; 

            default: 

            break; 

        } 
        return str_month;
    }

    void output1()
    {
        cout<<day<<"th "<<str_month<<" "<<year;
    }
    void output2()
    {
        cout<<day<<"/"<<mon<<"/"<<year;
    }
};
int main()
{
    date d1;
    cout<<"Enter Day: ";
    cin>>d1.day;
    cout<<"Enter Month: ";
    cin>>d1.mon;
    cout<<"Enter Year: ";
    cin>>d1.year;
    string str_month=d1.month(d1.mon);
    cout<<d1.day<<" "<<str_month<<" "<<d1.year<<endl;
    d1.output2();
    return 0;

}
