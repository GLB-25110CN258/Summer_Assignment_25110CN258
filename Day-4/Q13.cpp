
// Write a program to generate fibonacci series

#include <iostream>
using  namespace std;

int main()

{
    int number,first=0,second=1,sum=0;

    cout<<"Enter number of terms in the series = ";
    cin>>number;

    if(number>=1)
    {
        cout<<first<<"  ";
    }
    if(number>=2)
    {
        cout<<second<<"  ";
    }

    for(int i=3 ; i<=number; i++)
    {
       sum=second+first;
       cout<<sum<<"  ";
       first=second;
       second=sum;
    }
    
    return 0;
}