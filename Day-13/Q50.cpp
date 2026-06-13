
//Write a program to find sum and average of array

#include <iostream>
using namespace std;

int main()
{
    int size,sum=0;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the array element ["<<i<<"] = ";
        cin>>array[i];
    }
    for(int j=0 ; j<size ; j++)
    {
        sum+=array[j];
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<< sum/size ;

    return 0;
}