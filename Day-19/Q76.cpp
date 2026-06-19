
// Write a program to find diagonal sum

#include <iostream>
using namespace std;

int main()
{
    int row,column,sum=0;

    cout<<"Enter the number of rows = ";
    cin>>row;

    cout<<"Enter the number of column = ";
    cin>>column;

    int matrix[row][column];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cout<<"Enter first matrix :element("<<i<<","<<j<<")=";
            cin>>matrix[i][j];
        }
    }
    for(int n=0 ;  n<row ; n++)
    {
        for(int p=0 ; p<column ; p++)
        {
            if(p==n)
            {
                sum+=matrix[n][p];
            }
        }
    }
    cout<<"sum = "<<sum;
    
    return 0;
}