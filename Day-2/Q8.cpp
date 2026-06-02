
// Write a program to check whether a number is palindrome 

#include <iostream>
using namespace std;

int main()
{
    int Number,Reverse=0,Digit,Original;

    cout<<"Enter a number = ";
    cin>>Number;
    Original=Number;

    while(Number!=0)
    {
        Digit=Number%10;
        Reverse=Reverse*10 + Digit;
        Number=Number/10;

    }

    if(Original==Reverse)
    {
        cout<<"Number is a palindrome";
    }
    else
    {
        cout<<"Number is not a palindrome";
    }
    return 0;
}