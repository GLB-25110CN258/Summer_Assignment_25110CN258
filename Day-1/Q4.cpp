
//Write a program to count digits in a number

#include <iostream>
using namespace std;

int main()

{
        int Number,Count=0;
    
        cout<<"Enter the number = ";
        cin>>Number;

        while(Number>0)
        {
            Number=Number/10;
            Count ++;
        }

    cout<<"Number of digits = "<<Count;
    
    return 0;
}