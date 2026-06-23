
// Write a program to first repeating character

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
        count=0;
        
        for(int j=0 ; str[j]!='\0' ; j++)
        {

            if(str[i]==str[j] && i!=j)
            {
                count=1;
                break;
            }
        }  
        if(count==1)
        {
            cout<<"First repeating character = "<<str[i];
            break;
        }
    }
    return 0;
}