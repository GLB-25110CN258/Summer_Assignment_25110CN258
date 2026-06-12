
// Write a program to write function for palindrome

#include <iostream>
using namespace std;

int palindrome(int num)
{
    int reverse=0;

    while(num>0)
    {
        reverse= reverse*10 + num%10;
        num/=10;
    }
    return reverse;
}
int main()
{
    int number;

    cout<<"Enter the number = ";
    cin>>number;
    
    if(palindrome(number)==number)
    {
        cout<<number<<" is a palindrome";
    }
    else
    {
        cout<<number<<" is not a palindrome";
    }
    return 0;
}