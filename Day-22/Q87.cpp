
// Write a program to character frequency

#include <iostream>
using namespace std;

int main()
{
    char str[100],element;
    int count=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    cout<<"Enter a character = ";
    cin>>element;

    for(int i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]==element)
        {
            count++;
        }
    }
    cout<<"Frequency = "<<count;

    return 0;
}