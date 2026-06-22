
// Write a program to check palindrome string

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length=0,check=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);
    
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0 ; i<length/2 ; i++)
    {
        if(str[i]=!str[length-i-1])
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        cout<<"Entered string is a palindrome";
    }
    else
    {
        cout<<"Entered string is not a palindrome";
    }
    return 0;
}


