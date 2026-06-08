
// Write a program to convert binary to decimal

#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int number,power=0,decimal=0,digit;

    cout<<"Enter the number = ";
    cin>>number;

    while(number>0)
    {
        digit=number%10;
        decimal=decimal + digit*(power(2,decimal));
        number=number/10;
    }
    cout<<decimal;

    return 0;
}