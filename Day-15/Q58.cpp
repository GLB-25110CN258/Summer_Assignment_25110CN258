
// Write a program to rotate array left

#include <iostream>
using namespace std;

int main()
{
    int size,shift=0,num=0;

    cout<<"Enter the number of elements = ";
    cin>>size;

    int array[size],left[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    cout<<"Number of elements to be shifted left = ";
    cin>>shift;

    for (int j=0 ; j<size-shift ; j++)
    {
        left[j]=array[shift+j];
    }
    for (int k=size-shift ; k<size ; k++)
    {
        left[k]=array[num];
        num++;
    }
    for(int m=0 ; m<size ; m++)
    {
        cout<<left[m]<<"  ";
    }
    return 0;
}