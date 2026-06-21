
// Write a program to find string length without strlen()

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
    cout<<"length = "<<length;

    return 0;
}