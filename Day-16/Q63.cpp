
// Write a program to find pair with given sum

#include <iostream>
using namespace std;

int main()
{
    int size,sum,check=0;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }
    cout<<"Enter the sum of two numbers = ";
    cin>>sum;

    for(int j=0 ; j< size ; j++)
    {
        for (int k=j+1 ; k<size ; k++)
        {
            if(sum==array[j]+array[k])
            {
                cout<<"pair = "<<array[j]<<","<<array[k];
                check=1;
                break;
            }
        }
        if(check==1)
        {
            break;
        }
    }
    if(check==0)
    {
        cout<<"no pair found";
    }
    return 0;
}