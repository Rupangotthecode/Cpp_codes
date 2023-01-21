#include<iostream>
using namespace std;
int bns(int ar[],int n,int s)
{
    int m,h=n-1,l=0,i;
    while(l!=h)
    {
        m=(h+l)/2;
        if(ar[m]<s)
        {
            l=m+1;
        }
        else if(ar[m]>s)
        {
            h=m-1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}
int main()
{
    int ar[]={2,5,8,12,16,23,38,56,72,91};
    int res=bns(ar,10,23);
    (res==-1)
    ? cout<<"not there"<<endl
    : cout<<res;
    return 0;
}
