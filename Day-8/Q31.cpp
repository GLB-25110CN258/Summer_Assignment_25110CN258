
// Write a program to print character triangle

#include <iostream>
using namespace std;

int main()
{
    int row;
    char ch=65;

    cout<<"Enter the number of rows = ";
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            ch=65+j;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}