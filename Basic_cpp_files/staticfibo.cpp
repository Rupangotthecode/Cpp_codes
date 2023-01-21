#include<iostream> 

 

using namespace std; 

 

int fibo() { 
    static int l=0; 
    static int l1 = 1; 
    int n = l + l1; 
    l1 = l; 
    l = n; 
    return l; 
 } 
int main() { 
    int c; 
    int res,sum=0;
    cin >> c; 
    for (int i = 0; i < c; i++) { 
    res=fibo();
    sum=sum+res;

    } 
    cout<<sum;
    return 0; 
} 