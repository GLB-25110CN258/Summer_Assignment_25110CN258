
// Write a program to move zeroes to end

#include <iostream>
using namespace std;

int main()
{
    int size,num=0,count=0;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size],arr[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    for(int j=0 ; j<size ; j++)
    {
        if(array[j]==0)
        {
            count++;
        }
        else
        {
            arr[num]=array[j];
            num++;
        }
    }
    for(int k=0 ; k<count ; k++)
    {
        arr[num+k]=0;
    }
    for(int m=0 ; m<size ; m++)
    {
        cout<<arr[m]<<"  ";
    }

    return 0;
}

