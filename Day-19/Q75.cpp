
// Write a program to transpose matrix

#include <iostream>
using namespace std;

int main()
{
    int row,column;

    cout<<"Enter the number of rows = ";
    cin>>row;

    cout<<"Enter the number of column = ";
    cin>>column;

    int matrix[row][column],transpose[column][row];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cout<<"Enter matrix :element("<<i<<","<<j<<")=";
            cin>>matrix[i][j];
        }
    }
    for(int n=0 ;  n<row ; n++)
    {
        for(int p=0 ; p<column ; p++)
        {
            transpose[p][n]=matrix[n][p];
        }
    }
    for(int k=0 ; k<column ; k++)
    {
        for(int d=0 ; d<row ; d++)
        {
            cout<<transpose[k][d]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

