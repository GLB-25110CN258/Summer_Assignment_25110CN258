
// Write a program to recursive Fibonacci

#include <iostream>
using namespace std;

int fibonacci(int term)
{
    if(term==1)
    {
        return 0;
    }
    else if(term==2)
    {
        return 1;
    }
    else
    {
        return(fibonacci(term-2) + fibonacci(term-1));
    }
}

int main()
{
    int number;

    cout<<"enter number of terms in the series = ";
    cin>>number;

    for(int i=1;i<=number;i++)
    {
        cout<<fibonacci(i)<<"  ";
    }    
    return 0;
}