
// Write a program to find x^n without pow()

#include <iostream>
using namespace std;

int main()

{
    int number,multiple=1,power;

    cout<<"Enter the number = ";
    cin>>number;

    cout<<"Enter the power = ";
    cin>>power;

    for(int i=1;i<=power;i++)
    {
        multiple*=number;
    }

    cout<<multiple;
    
    return 0;
}
