
//Write a program to count set bits in a number

#include <iostream>
using namespace std;

int main()

{
    int number,count=0;

    cout<<"Enter ther number = ";
    cin>>number;

    while(number>0)
    {
        count += number%2;
        number=number/2;
    }
    
    cout<<"set bits = "<<count;
 
    return 0;
}
