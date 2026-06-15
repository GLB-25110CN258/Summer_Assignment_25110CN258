
//Write a pprogram to rotate array right

#include <iostream>
using namespace std;

int main()
{
    int size,shift,num=0;

    cout<<"Enter the number of elements = ";
    cin>>size;

    int array[size],right[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    cout<<"enter the number of elements to be shifted right = ";
    cin>>shift;

    for(int j=shift ; j<size ; j++)
    {
        right[j]=array[num];
        num++;
    }
    for(int k=0 ; k<shift ; k++)
    {
        right[k]=array[size-shift+k];
    }
    for (int m=0 ; m<size ; m++)
    {
        cout<<right[m]<<"  ";
    }

    return 0;
}