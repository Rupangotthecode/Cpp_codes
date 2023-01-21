#include <iostream> 
#include<math.h>  
using namespace std;

int power(int n) { 
int res=pow(n, n); 
return res; 
} 
int main() { 
int num; 
cin >> num;  
int ans = power(num); 
cout << ans << endl; 
return 0; 
} 