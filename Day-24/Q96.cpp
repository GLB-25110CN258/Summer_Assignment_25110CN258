
// Write a program to remove duplicate characters

#include <iostream>
using namespace std;

int main()
{
    char str[100],str1[100];
    int check=0,count=1;

    cout<<"Enter a string = ";
    cin.getline(str,100);

    str1[0]=str[0];

    for(int i=0 ; str[i]!='\0' ; i++)
    {
        check=0;

        for(int j=0 ; str1[j]!='\0' ; j++)
        {
            if(str[i]==str1[j])
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            str1[count]=str[i];
            count++;
        }
    }
    str1[count]='\0';
    
    for(int k=0 ; str1[k]!='\0' ; k++)
    {
        cout<<str1[k];
    }
    return 0;
}