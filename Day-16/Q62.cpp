
// Write a program to find maximum frequency element

#include <iostream>
using namespace std;

int main()
{
    int size,count=0,max=0,element;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    for(int j=0 ; j<size ; j++)
    { 
        count=0;
        
        for(int k=0 ; k<size ; k++)
        {
            if(array[j]==array[k])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            element=array[j];
        }
    }
    cout<<"Maximum frequency element = "<<element;

    return 0;
}