
// Write a program to reverse a string

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    while(str[length]!='\0')
    {
        length++;
    }
    cout<<"reversed string = ";

    for(int i=length-1 ; i>=0 ; i--)
    {
        cout<<str[i];
    }
    return 0;
}