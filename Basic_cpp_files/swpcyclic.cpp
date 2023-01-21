#include<iostream> 
using namespace std; 
void swap(int *a, int *b, int *c) 

{ 
    int temp = *a; 
    *a = *b; 
    *b = *c; 
    *c = temp; 
}

int main() { 
    int n1, n2, n3; 
    cin >> n1 >> n2 >> n3; 
    cout << "YOU INPUTTED: " <<n1<<" "<<n2<<" "<<n3<<" "<< endl; 
    swap(&n1, &n2, &n3); 
    cout << "SWAPPED NUMBERS: " << n1 <<" "<< n2 <<" "<< n3 << endl; 
    return 0; 
} 