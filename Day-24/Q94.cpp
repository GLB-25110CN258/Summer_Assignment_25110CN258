
// Write a program to compress a string

#include <iostream>
using namespace std;

int main()
{
    string str;
    int count=1;

    cout<<"Enter a string = ";
    cin>>str;

    for(int i=0 ; str[i]!='\0' ; i++)
    {

        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            cout<<str[i]<<count;
            count=1;
        }
    }
    return 0;
}