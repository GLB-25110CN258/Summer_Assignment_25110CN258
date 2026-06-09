
// Write a program to print hollow square pattern

#include <iostream>
using namespace std;

int main()
{
    int row;

    cout<<"Enter the number of rows = ";
    cin>>row;

    for(int i=0 ; i<row ; i++)
    {
        cout<<"*";
    }
    cout<<endl;

    for(int j=0 ; j<row-2 ; j++)
    {
        cout<<"*";
        for(int k=0 ; k<row-2 ; k++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    for(int i=0 ; i<row ; i++)
    {
        cout<<"*";
    }
    return 0;
}