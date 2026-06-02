
//write a program to find product of digits

#include <iostream>
using namespace std;

int main() 
{
    int Number, Product=1,Digit;
    
    cout<<"Enter a number = ";
    cin>>Number;
    
    while (Number!=0)
    {
        Digit=Number%10;
        Product=Product*Digit;
        Number=Number/10;
    }
    
    cout<<"Product of digits = "<<Product;
    
    return 0;
}