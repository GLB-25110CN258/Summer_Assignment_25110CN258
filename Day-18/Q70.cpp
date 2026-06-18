
// Write a program to selection sort

#include <iostream>
 using namespace std;

 int main()
 {
    int size,min,element;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }

    for(int j=0 ; j<size-1 ; j++)
    {
        min=j;

        for (int k=j+1 ; k<size ; k++)
        {
            if(array[k]<array[min])
            {
                min=k;
            }
        }
        if(min!=j)
        {
            element=array[j];
            array[j]=array[min];
            array[min]=element;
        }
    }
    for(int k=0 ; k<size ; k++)
    {
        cout<<array[k]<<"  ";
    }
    return 0;
 }