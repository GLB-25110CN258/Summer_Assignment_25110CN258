
// Write a program to find row wise sum

#include <iostream>
using namespace std;

int main()
{
    int row,column,sum;

    cout<<"Enter the number of rows = ";
    cin>>row;

    cout<<"Enter the number of column = ";
    cin>>column;

    int matrix[row][column];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cout<<"Enter matrix :element("<<i<<","<<j<<")=";
            cin>>matrix[i][j];
        }
    }
    for(int i=0 ; i<row ; i++)
    {
        sum=0;

        for(int j=0 ; j<column ; j++)
        {
            sum+=matrix[i][j];
        }
        cout<<"row"<<i+1<<" = "<<sum<<endl;
    }
    return 0;
}