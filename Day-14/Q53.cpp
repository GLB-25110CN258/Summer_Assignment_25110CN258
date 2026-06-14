
// Write a program to linear search

#include <iostream>
using namespace std;
int main()
{
    int size,element,check=0;

    cout<<"Enter the number of elements = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the value of element["<<i<<"] = ";
        cin>>array[i];
    }
    cout<<"enter the element to be searched = ";
    cin>>element;

    for(int j=0 ; j<size ; j++)
    {
        if(element == array[j])
        {
            cout<<"Element found at index = "<<j;
            check=1;
            break;
        }
    }
    if(check==0)
    {
        cout<<"Element not found";
    }
    return 0;
}


