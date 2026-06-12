
// Write a program to write function for fibonacci

#include <iostream>
using namespace std;

int fibonacci(int number)
{
    int first=0,second=1,sum=0;

    if(number==0)
    {
        return 0;
    }
    if(number==1)
    {
        return 1;
    }
    
    for(int i=2 ; i<=number ; i++)
    {
        sum=first+second;
        first=second;
        second=sum;
    }
    return sum;
}
int main()
{
    int num;

    cout<<"Enter the term = ";
    cin>>num;

    cout<<"term = "<<fibonacci(num);

    return 0;
}