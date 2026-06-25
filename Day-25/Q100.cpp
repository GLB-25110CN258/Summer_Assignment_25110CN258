
// Write a program to sort words by length

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the number of words = ";
    cin>>number;

    string str[number],temp;

    for(int i=0 ; i<number ; i++)
    {
        cout<<"enter the word:"<<i+1;
        cin>>str[i];
    }
    for(int j=0 ; j<number-1 ; j++)
    {
        for(int k=j+1 ; k<number ; k++)
        {
            if(str[j].length()>str[k].length())
            {
                temp=str[j];
                str[j]=str[k];
                str[k]=temp;
            }
        }
    }
    cout<<"words = "<<endl;

    for(int p=0 ; p<number ; p++)
    {
        cout<<str[p]<<endl;
    }
    return 0;
}