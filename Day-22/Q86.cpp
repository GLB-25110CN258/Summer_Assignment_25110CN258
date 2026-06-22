
// Write a program to count words in a sentence

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int count=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    for(int i=0 ; str[i]!='\0' ; i++)
    {
        if((i==0 && str[i]!=' ') || (str[i]!=' ' && str[i-1]==' '))
        {
            count++;
        }
    }
    cout<<"Number of words = "<<count;
}
