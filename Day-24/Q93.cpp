
// Write a program to check string rotation

#include <iostream>
using namespace std;

int main()
{
    string str,word,sum;

    cout<<"Enter the string = ";
    cin>>str;

    cout<<"Enter the word = ";
    cin>>word;

    if(str.length()!=word.length())
    {
        cout<<"Entered word is not a string rotation";
    }
    else
    {
        sum=str+str;

        if(sum.find(word)==string::npos)
        {
            cout<<"Entered word is not a string rotation";
        }
        else
        {
            cout<<"Entered word is a string rotation";
        }
    }
    return 0;
}