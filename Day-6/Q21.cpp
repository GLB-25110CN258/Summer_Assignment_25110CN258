
// Write a program to convert decimal to binary

#include <iostream>
using namespace std;

int main()
{
    int number,digit=0,remainder,place=1;

    cout<<"Enter the number = ";
    cin>>number;

    while(number>0)
    {
        remainder=number%2;
        digit= digit + remainder*place;
        place*=10;
        number=number/2;
    }
    cout<<digit;

    return 0;
}