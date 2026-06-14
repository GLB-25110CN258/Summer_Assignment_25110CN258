
// Write a program to find duplicates in array

#include <iostream>
using namespace std;

int main()
{
    int size,element,count;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the value of element["<<i<<"] = ";
        cin>>array[i];
    }
    for(int j=0 ; j<size ; j++)
    {
        element=array[j];
        count=0;
        
        for(int k=j+1 ; k<size ; k++ )
        {
            if(element==array[k])
            {
              cout<<element<<"  ";
              break;
            }
        }
    }
    return 0;
}
