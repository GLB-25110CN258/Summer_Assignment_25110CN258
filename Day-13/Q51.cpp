
// Write a program to find largest and smallest element

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of term ["<<i<<"] = ";
        cin>>array[i];
    }
    int max=array[0] , min=array[0];

    for(int j=1 ; j<size ; j++)
    {
        if(array[j]>max)
        {
            max=array[j];
        }
    }
    for(int k=1 ; k<size ; k++)
    {
        if(array[k]<min)
        {
            min=array[k];
        }
    }
    cout<<"Largest element = "<<max<<endl;
    cout<<"Smallest element = "<<min;

    return 0;
}