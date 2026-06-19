
// Write a program to subtract matrices

#include <iostream>
using namespace std;

int main()
{
    int row,column;

    cout<<"Enter the number of rows = ";
    cin>>row;

    cout<<"Enter the number of column = ";
    cin>>column;

    int matrix1[row][column],matrix2[row][column];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cout<<"Enter first matrix :element("<<i<<","<<j<<")=";
            cin>>matrix1[i][j];
        }
    }
    for(int k=0 ; k<row ; k++)
    {
        for(int m=0 ; m<column ; m++)
        {
            cout<<"Enter second matrix :element("<<k<<","<<m<<")=";
            cin>>matrix2[k][m];
        }
    }
    for(int n=0 ;  n<row ; n++)
    {
        for(int p=0 ; p<column ; p++)
        {
            cout<<matrix1[n][p]-matrix2[n][p]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

