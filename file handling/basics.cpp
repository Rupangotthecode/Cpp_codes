#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[100];
    cin.getline(arr,100);
    ofstream myfile("xyz.txt",ios::app);
    if(myfile.is_open())
    {
        myfile<<arr;
        myfile.close();
    }
    char arr1[100];
    ifstream myfile1("xyz.txt");
    if(myfile1.is_open())
    {
        myfile1.getline(arr1,100);
    }
    cout<<arr1;
}