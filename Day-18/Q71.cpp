
// Write a program to binary search

#include <iostream>
 using namespace std;

 int main()
 {
    int size,element,temp,high,low,half,check=0;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    cout<<"Enter the element to be searched = ";
    cin>>element;

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    for(int j=0 ; j<size-1 ; j++)
    {
        for(int m=0 ; m<size-j-1 ; m++)
        {
            if(array[m]>array[m+1])
            {
                temp=array[m];
                array[m]=array[m+1];
                array[m+1]=temp;
            }
        }    
    }
    high=size-1;
    low=0;
    
    while(low<=high)
    {
        half=(high+low)/2;

        if(array[half]==element)
        {
            cout<<"Element is found at index = "<<half;
            check=1;
            break;
        }
        else if(array[half]>element)
        {
            high=half-1;
        }
        else
        {
            low=half+1;
        }
    }
    if(check==0)
    {
        cout<<"Element not found";
    }
    return 0;
 }
