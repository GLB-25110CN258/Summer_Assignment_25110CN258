
//Write a program to write function to find sum of two numbers

#include <iostream>
using namespace std;

int sum(int num1,int num2)
{
    int add;
    add=num1+num2;
    return add;
}

int main()
{
    int number1,number2;

    cout<<"Enter the first number = ";
    cin>>number1;

    cout<<"Enter the second number = ";
    cin>>number2;

    cout<<"sum = "<<sum(number1,number2);

    return 0;
}