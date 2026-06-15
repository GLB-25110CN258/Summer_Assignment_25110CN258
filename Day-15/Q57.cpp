
// Write a program to reverse array

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter the number of elements in the array = ";
    cin>>size;

    int array[size],rev[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"the value of element["<<i<<"]=";
        cin>>array[i];
    }
    for (int j=0 ; j<size ; j++)
    {
        rev[j]=array[size-j-1];
    }

    cout<<"reversed array = ";

    for(int k=0 ; k<size ; k++)
    {
        cout<<rev[k]<<"  ";
    }
    
    return 0 ;
}