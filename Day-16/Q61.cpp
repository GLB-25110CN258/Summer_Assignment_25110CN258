
// Write a program to find missing number in array

#include <iostream>
using namespace std;

int main()
{
    int num,real,sum=0;

    cout<<"for array of digits from 1 to n :Enter the value of n = ";
    cin>>num;

    real=num*(num+1)/2;

    int size=num-1,array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the value of element["<<i<<"]=";
        cin>>array[i];
        sum+=array[i];
    }
    cout<<"Missing number = "<<real-sum;
    
    return 0;
}