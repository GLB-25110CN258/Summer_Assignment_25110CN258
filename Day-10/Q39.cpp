
// Write a program to print number pyramid

#include <iostream>
using namespace std;

int main()
{
    int row;

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
            cout<<m+1;
        }
        for(int n=0 ; n<i ; n++)
        {
            cout<<i-n;
        }
    cout<<endl;
    }

    return 0;
}