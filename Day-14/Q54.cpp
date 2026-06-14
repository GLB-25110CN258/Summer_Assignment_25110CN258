
// Write a program to frequency of an elemnent

#include <iostream>
using namespace std;

int main()
{
    int size,element,frequency=0;

    cout<<"Enter the number of elements = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"] = ";
        cin>>array[i];
    }
    cout<<"Enter the element = ";
    cin>>element;

    for(int j=0 ; j<size ; j++)
    {
        if(element==array[j])
        {
            frequency++;
        }
    }
    if(frequency==0)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Frequency = "<<frequency;
    }
    
    return 0;
}
