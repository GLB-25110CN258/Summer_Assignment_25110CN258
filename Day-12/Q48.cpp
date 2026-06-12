
// Write a program to write function for perfect number

#include <iostream>
using namespace std;

int perfect(int number)
{
    int sum=0;

    for(int i=1 ; i<number ; i++)
    {
        if (number%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int num;

    cout<<"Enter the number = ";
    cin>>num;

    if(perfect(num)==num)
    {
        cout<<num<<" is a perfect number";
    }
    else
    {
        cout<<num<<" is not a perfect number";
    }
    return 0;
}