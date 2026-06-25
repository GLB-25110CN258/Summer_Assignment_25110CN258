
// Write a program to sort names alphabetically

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the number of names = ";
    cin>>number;

    string str[number],temp;

    for(int i=0 ; i<number ; i++)
    {
        cout<<"enter the name:"<<i+1;
        cin>>str[i];
    }
    for(int j=0 ; j<number-1 ; j++)
    {
        for(int k=j+1 ; k<number ; k++)
        {
            if(str[j]>str[k])
            {
                temp=str[j];
                str[j]=str[k];
                str[k]=temp;
            }
        }
    }
    cout<<"names = "<<endl;

    for(int p=0 ; p<number ; p++)
    {
        cout<<str[p]<<endl;
    }
    return 0;
}