
// Write a program to find nth fibonacci term

#include <iostream>
using namespace std;

int main()

{ 
    int number,first=0,second=1,term=0;

    cout<<"Enter the nth term = ";
    cin>>number;

    if(number==1)
    {
        cout<<"nth term = "<<first;
    }
    else if (number==2)
    {
        cout<<"nth term = "<<second;
    }
    else 
    {
        for(int i=3; i<=number ;i++)
        {
            term=first + second;
            first=second;
            second=term;
        }
        cout<<"nth term = "<<term;
    }

    return 0;
}

