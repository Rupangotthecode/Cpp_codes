#include <iostream> 

using namespace std; 

int main() { 

    int min, max, isPrime; 
    cout << "Enter the first number: "; 
    cin >> min; 
    cout << "Enter the last number: "; 
    cin >> max; 
    cout << "Prime numbers between " << min << " and " << max << " are: " << endl; 
    for (int i = min + 1; i < max; i++) { 
        isPrime = 0; 
        for (int j = 2; j < i; j++) { 
            if (i % j == 0) { 
                isPrime = 1; 
                break; 
            } 
        } 
        if (isPrime == 0) { 
            cout << i << endl; 
        } 
    }
    return 0;
} 