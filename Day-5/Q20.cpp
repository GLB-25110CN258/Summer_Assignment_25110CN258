
// Write a program to find largest prime factor

#include <iostream>
using namespace std;

int main()

{
    int number,check=0,prime=0;

    cout<<"Enter the number = ";
    cin>>number;

    if(number<=1)
    {
        cout<<"No prime factor";
        return 0;
    }

    for(int i=2;i<=number;i++)
    {   
        check=0;

        if(number%i==0 )
        {
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    check=1;
                    break;
                }
            } 
            if(check==0)
            {
                prime=i;
            }
        }
    }
    cout<<"Largest prime factor = "<<prime;

    return 0;
}