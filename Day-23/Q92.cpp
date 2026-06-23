
// Write a program to find maximum occuring character

#include <iostream>
using namespace std;

int main()
{
    char str[100],element;
    int count=0,max=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    for(int i=0 ; str[i]!='\0' ; i++)
    {
        count=0;

        for(int j=0 ; str[j]!='\0' ; j++)
        {
            if(str[i]==str[j])
            {
                count++; 
            }
        }  
        if(max<count)
        {
            max=count;
            element=str[i];
        }
    }
    cout<<"maximum occuring character = "<<element;

    return 0;
}