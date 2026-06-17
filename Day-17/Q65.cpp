
// Write a program to merge arrays

#include <iostream>
using namespace std;

int main()
{
    int size1,size2;

    cout<<"Enter the size of first array = ";
    cin>>size1;

    cout<<"Enter the size of second array = ";
    cin>>size2;

    int array1[size1+size2],array2[size2];

    for(int i=0 ; i<size1 ; i++)
    {
        cout<<"Enter the value of first array element["<<i<<"]=";
        cin>>array1[i];
    }
    for(int j=0 ; j<size2 ; j++)
    {
        cout<<"Enter the value of second array element["<<j<<"]=";
        cin>>array2[j];
    }
    for(int k=size1 ; k<size1+size2 ; k++)
    {
        array1[k]=array2[k-size1];
    }
    for(int m=0 ; m<size1 + size2 ; m++)
    {
        cout<<array1[m]<<"  ";
    }
    return 0;
}