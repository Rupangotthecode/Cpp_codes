#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> v;
    int a,i=0,c=0;
    stringstream ss(str);
    char ch;
    for(i=0;i<str.length();i++)
    {
        if(str[i]==',')
        {
            c++;
        }
    }
    while (c!=-1) {
        ss>>a;
        v.push_back(a);
        ss>>ch;
        c--;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
