#include<iostream>
using namespace std;
int main()
{
    int ar[]={3,5,1,2,4};
    int i=1,j,key;
    for(i=1;i<5;i++)
    {
        key=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>key)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
    }
    for(i=0;i<5;i++)
    {
        cout<<ar[i];
    }
    return 0;
}
