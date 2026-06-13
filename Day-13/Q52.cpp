
// Write a program to count even and odd elements

#include <iostream>
using namespace std;

int main()
{
    int size,even=0,odd=0;

    cout<<"enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"the value of element ["<<i<<"] = ";
        cin>>array[i];
    }
    for(int j=0 ; j<size ; j++)
    {
        if(array[j]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    cout<<"even = "<<even<<endl;
    cout<<"odd = "<<odd;

    return 0;
}