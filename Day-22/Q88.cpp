
// Write a program to remove spaces from string

#include <iostream>
using namespace std;

int main()
{
    char str[100],str1[100];
    int count=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);
 
    for(int i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]!=' ')
        {
            str1[count]=str[i];
            count++;
        }
    }
    str1[count]='\0';

    for(int j=0 ; str1[j]!='\0' ; j++)
    {
        cout<<str1[j];
    }
    return 0;
}
