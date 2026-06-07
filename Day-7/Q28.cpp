
// Write a program to recursive reverse number

#include <iostream>
using namespace std;

int reverse(int num,int rev=0)
{
    if(num==0)
    {
        return rev;
    }
    else
    {
        return reverse(num/10,(num%10)+rev*10);
    }
}

int main()
{
    int number;

    cout<<"Enter the number = ";
    cin>> number;

    cout<<"reverse = "<<reverse(number);
    
    return 0;
}