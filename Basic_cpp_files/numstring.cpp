#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
int input(char str[],int n)
{
    int ch,i=0;
    while ((ch = getchar())!='\n')
    {
        if(i<n)
        {
            str[i++]=ch;
        }
        str[i]='\0';
    }
    return 0;
}

int main()
{
    char str[100];
    input(str,100);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            cout<<str[i]<<" ";
        }
    }
    return 0;
}
