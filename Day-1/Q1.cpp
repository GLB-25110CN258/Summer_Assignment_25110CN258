
// Write a program to calculate sum of first N natural numbers.

#include <iostream>
using namespace std;

int main()

{
    int Number,Sum=0;

    cout<<"Enter the number = ";
    cin>>Number;

    for(int i=1 ; i<=Number ; i++)
    {
        Sum = Sum + i;
    }

    cout<<"Sum = "<<Sum;

    return 0;
}
