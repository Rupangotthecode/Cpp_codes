#include <iostream> 

using namespace std; 
#include<stdio.h>
#include <string.h>
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
    char line[100]; 
    int vowels, consonants, digits, spaces; 
    vowels =  consonants = digits = spaces = 0; 
    cout << "Enter a line of string: "; 
    input(line,100); 
    for(int i = 0; i < strlen(line); ++i) 
    { 
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || 
           line[i]=='o' || line[i]=='u' || line[i]=='A' || 
           line[i]=='E' || line[i]=='I' || line[i]=='O' || 
           line[i]=='U') 
        { 

            ++vowels; 

        } 
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z')) 
        { 

            ++consonants; 

        } 
        else if(line[i]>='0' && line[i]<='9') 
        { 
           ++digits; 

        } 
        else if (line[i]==' ') 
        { 

            ++spaces; 

        } 

    } 
    cout << "Vowels: " << vowels << endl; 
    cout << "Consonants: " << consonants << endl; 
    cout << "Digits: " << digits << endl; 
    cout << "White spaces: " << spaces << endl; 
    return 0; 
} 