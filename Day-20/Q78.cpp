
// Write a program to check symmetric matrix

#include <iostream>
using namespace std;

int main()
{
    int row,column,check=0;

    cout<<"Enter the number of rows = ";
    cin>>row;

    cout<<"Enter the number of column = ";
    cin>>column;

    int matrix1[row][column];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cout<<"Enter matrix :element("<<i<<","<<j<<")=";
            cin>>matrix1[i][j];
        }
    }
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            if(matrix1[i][j]=!matrix1[j][i])
            {
                check=1;
                break;
            }
        }
    }
    if(check==0)
    {
        cout<<"matrix is symmetric";
    }
    else
    {
        cout<<"matrix is not symmetric";
    }
    return 0;
}