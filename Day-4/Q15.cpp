
// Write a program to check armstrong number

#include <iostream>
#include <cmath>
using namespace std;


int main()

{    
    int number,sum=0,digit=0,original,count=0,temp;

    cout<<"Enter the number = ";
    cin>>number;

    original=number;
    temp=number;

    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    while(number>0)
    {
        digit=number%10;
        sum=sum + round(pow(digit,count));
        number=number/10;
    }
    if(sum==original)
    {
        cout<<"it is a armstrong number";
    }
    else
    {
        cout<<"It is not a armstrong number";
    }

    return 0;
}