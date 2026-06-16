
// Write a program to remove duplicate from array

#include <iostream>
using namespace std;

int main()
{
    int size,count=1,check=0;

    cout<<"Enter the number of elements = ";
    cin>>size;

    int array[size],removed[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    removed[0]=array[0];

    for(int j=0 ; j<size ; j++)
    {
        check=0;

        for(int k=0 ; k<count ; k++)
        {
            if(array[j] == removed[k])
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            removed[count]=array[j];
            count++;
        }
    }
    cout<<"new array = ";

    for(int m=0 ; m<count ; m++)
    {
        cout<<removed[m]<<"  ";
    }

    return 0;
}
