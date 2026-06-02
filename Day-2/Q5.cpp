
//Write a program to find sum of digits of a number

#include <iostream>
using namespace std;

int main() 
{
    int Number,Sum=0,Digit;

    cout<<"Enter a number = ";   
    cin>>Number;

    while(Number>0)
    {
        Digit=Number%10;
        Sum=Sum+Digit;
        Number=Number/10;
    }

    cout<<"Sum of digits = "<<Sum;

    return 0;
}
