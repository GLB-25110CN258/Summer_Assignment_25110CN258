
// Write a program to print repeated number patter

#include <iostream>
using namespace std;

int main()
{
    int row;

    cout<<"enter the number of rows = ";
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }

    return 0;
}