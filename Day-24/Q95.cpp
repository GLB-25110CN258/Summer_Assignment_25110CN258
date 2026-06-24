
// Write a program to find longest word

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int max=0,length=0,first=0,highest=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    for(int i=0 ; ; i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            length++;
        }
        else
        {
            if(length>max)
            {
                max=length;
                highest=first;
            }
            length=0;
            first=i+1;

            if(str[i]=='\0')
            {
                break;
            }
        }
    }
    cout<<"Longest word = ";

    for(int j=highest ; j<highest+max ; j++)
    {
        cout<<str[j];
    }
    return 0;
}