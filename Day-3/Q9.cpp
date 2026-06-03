
// Write a program to check whether a number is prime

#include <iostream>
using namespace std;

int main()
{
    int number,check=0;

    cout<<"Enter a number = ";
    cin>>number;  

    for(int i=2;i<number;i++)
    {
        if (number%i==0)
        {
            check=1;
            break;   
        } 
    }

    if(check==0 && number>1)
    {
        cout<<"it is a prime number";
    }
    else
    {
        cout<<"it is not a prime number";
    }

    return 0;
}
