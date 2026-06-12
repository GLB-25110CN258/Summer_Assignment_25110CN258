
// Write a program to write function for armstrong

#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int number)
{
    int sum=0,original=number,power=0,digit;

    while(number>0)
    {
        power++;
        number/=10;
    }
    while(original>0)
    {
        digit=original%10;
        sum+=round(pow(digit,power));
        original/=10;
    }
    return sum;
}
int main()
{
    int num;

    cout<<"Enter the number = ";
    cin>>num;

    if(armstrong(num)==num)
    {
        cout<<num<<" is armstrong number";
    }
    else
    {
        cout<<num<<" is not armstrong number";
    }
    return 0;
}

