
// Write a program to second largest element

#include <iostream>
using namespace std;

int main()
{
    int size,max,second;

    cout<<"enter the number of elements = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"] = ";
        cin>>array[i];
    }
    max=array[0];
    second=array[0];

    for(int j=1 ; j<size ; j++)
    {
        if(max<array[j])
        {
            second=max;
            max=array[j];
        }
        else if(array[j]>second && (array[j] != max))
        {
            second=array[j];
        }
    }
    cout<<"second largest = "<<second;

    return 0;
}
