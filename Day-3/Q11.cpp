
// Write a program to find the GCD of two numbers

#include <iostream>
using namespace std;

int main()

{
    int FirstNum,SecondNum,GCD=1;

    cout<<"Enter the first number = ";
    cin>>FirstNum;

    cout<<"Enter the second number = ";
    cin>>SecondNum;

    for(int i=1; i<=FirstNum && i<=SecondNum ;i++)
    {
        if (FirstNum%i==0 && SecondNum%i==0)
        {
           GCD=i;
        }
    }

    cout<<"GCD = "<<GCD;

    return 0;

}
