
//write a program to reverse a number

#include <iostream>
using namespace std;

int main() 
{
    int Number, Reverse = 0,Digit;
    
    cout << "Enter a number = ";
    cin >> Number;
    
    while (Number != 0) 
    {
        Digit = Number % 10; 
        Reverse = Reverse * 10 + Digit; 
        Number=Number/10; 
    }
    
    cout<<"Reversed Number = "<<Reverse;
    
    return 0;
}