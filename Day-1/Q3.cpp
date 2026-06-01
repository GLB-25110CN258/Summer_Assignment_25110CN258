
//Write a program to find factorial of a number.

#include <iostream>
using namespace std;

int main()

{
    int Number,Factorial=1;

    cout<<"Enter Number = ";
    cin>>Number;

    for(int i=1 ; i<=Number ; i++)
    {
        Factorial = Factorial * i;
    }

    cout<<"Factorial = "<<Factorial;

    return 0;
}