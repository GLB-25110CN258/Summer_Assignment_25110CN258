
// Write a program to print multiplication table of a given number.

#include <iostream>
using namespace std; 

int main()

{
    int Number;

    cout<<"Enter Number = ";
    cin>>Number;


    cout<<"Multiplication Table"<<endl;
    
    for(int i=1 ; i<=10 ; i++)
    {
      cout<<Number<<" X "<<i<<" = "<<Number*i<<endl;
    }
    
    return 0;
}