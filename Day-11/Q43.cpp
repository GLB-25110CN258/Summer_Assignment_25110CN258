
// Write a program to write function to check prime

#include <iostream>
using namespace std;

int prime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2 ; i<num ; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number;

    cout<<"Enter the number = ";
    cin>>number;

    if(prime(number)==1)
    {
        cout<<number<<" is a prime number";
    }
    else
    {
        cout<<number<<" is not a prime number";
    }

    return 0;
}