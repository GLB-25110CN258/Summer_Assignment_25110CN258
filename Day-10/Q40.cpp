
// Write a program to print character pyramid

#include <iostream>
using namespace std;

int main()
{
    int row;
    char ch;

    cout<<"Enter the number of rows = ";
    cin>>row;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<row-i-1 ; j++)
        {
            cout<<" ";
        }
        for(int m=0 ; m<i+1 ; m++)
        {
            ch=65+m;
            cout<<ch;
        }
        for(int n=0 ; n<i ; n++)
        {
            ch=65+i-n-1;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}