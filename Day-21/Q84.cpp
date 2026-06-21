
// Write a program to convert lower case to upper case

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length=0,consonant=0,vowel=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0 ; i<length ; i++)
    {
        char upper=str[i];

        if(upper>='a' && upper<='z')
        {
            upper=upper-32;
            cout<<upper;
        }
        else
        {
            cout<<upper;
        }
    }
    return 0;
}