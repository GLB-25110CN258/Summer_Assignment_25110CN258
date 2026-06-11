
// Write a program to write function to find factorial

#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;

    for(int i=1 ; i<=num ; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int number;

    cout<<"Enter the number = ";
    cin>>number;

    cout<<"factorial = "<<factorial(number);

    return 0;
}
