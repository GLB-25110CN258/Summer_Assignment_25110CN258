
// Write a program to input and display array

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the size of array = ";
    cin>>number;

    int array[number];

    for(int i=0 ; i<number ; i++)
    {
        cout<<"enter the array term ["<<i<<"] = ";
        cin>>array[i];
    }
    cout<<"Array elements = ";

    for(int j=0 ; j<number ; j++)
    {
        cout<<array[j]<<"  ";
    }
    return 0;
}

