
// Write a program to write function to find maximum

#include <iostream>
using namespace std;

int maximum(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int number1,number2;

    cout<<"Enter the first number = ";
    cin>>number1;

    cout<<"Enter the second number = ";
    cin>>number2;

    cout<<"Maximum = "<<maximum(number1,number2);
}