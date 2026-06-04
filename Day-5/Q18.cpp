
// Write a program to check strong number

#include <iostream>
using namespace std;

int main()

{
    int number,sum=0,original,digit=0,factorial=1;
    
    cout<<"Enter the number = ";
    cin>>number;

    if(number<=0)
    {
        cout<<"It is not a strong number";
        return 0;
    }

    original=number;

    while(number>0)
    {
        digit=number%10;
        factorial=1;

        for(int i=1;i<=digit;i++)
        {
            factorial*=i;   
        }

        sum+=factorial;
        number=number/10;
    }
    
    if(sum==original)
    {
        cout<<"It is a strong number";
    }
    else
    {
        cout<<"It is not a strong number";
    }

    return 0;
}