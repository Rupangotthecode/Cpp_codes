#include <iostream> 

#include <cmath> 

using namespace std; 

int main() { 
    int n;
    cout<<"enter no of values";
    cin>>n;
    float val[n]; 
    int i;
    float sum = 0.0, mean, variance = 0.0, stdDeviation; 
    for (i = 0; i < n; ++i) {
        cin>>val[i];
    }
    for (i = 0; i < n; ++i) 
    sum += val[i]; 
    mean = sum / n; 
    for (i = 0; i < n; ++i) 
    variance += pow(val[i] - mean, 2); 
    variance = variance / n; 
    stdDeviation = sqrt(variance); 
    cout << "The data values are: "; 
    for (i = 0; i < n; ++i) 
    cout << val[i] << " "; 
    cout << endl; 
    cout << "The standard deviation of these data values is " << stdDeviation; 
} 