
// Write a program to multiply matrices

#include <iostream>
using namespace std;

int main()
{
    int row1,row2,column1,column2,sum=0,count=0;

    cout<<"Enter the number of rows in first matrix = ";
    cin>>row1;

    cout<<"Enter the number of column in first matrix = ";
    cin>>column1;

    cout<<"Enter the number of rows in second matrix = ";
    cin>>row2;

    cout<<"Enter the number of column in second matrix = ";
    cin>>column2;

    int matrix1[row1][column1],matrix2[row2][column2],multiple[row1][column2];

    for(int i=0 ; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<"Enter first matrix :element("<<i<<","<<j<<")=";
            cin>>matrix1[i][j];
        }
    }
    for(int k=0 ; k<row2 ; k++)
    {
        for(int m=0 ; m<column2 ; m++)
        {
            cout<<"Enter second matrix :element("<<k<<","<<m<<")=";
            cin>>matrix2[k][m];
        }
    }
    for(int n=0 ; n<row1 ; n++)
    {
        for(int q=0 ; q<column2 ; q++)
        {
            multiple[n][q]=0;

            for(int w=0 ; w<column1 ; w++)
            {
                multiple[n][q]+=matrix1[n][w]*matrix2[w][q];
            }
        }
    }
    for(int r=0 ; r<row1 ; r++)
    {
        for(int y=0 ; y<column2 ; y++)
        {
            cout<<multiple[r][y]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}