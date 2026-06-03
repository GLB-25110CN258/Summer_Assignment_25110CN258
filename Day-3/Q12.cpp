
// write a program to find LCM of two numbers

#include <iostream>
using namespace std;

int main()
{
    int FirstNum,SecondNum,maximum,LCM=0;

    cout<<"Enter the first number = ";
    cin>>FirstNum;

    cout<<"Enter the second number = ";
    cin>>SecondNum;

    maximum=(FirstNum>SecondNum)? FirstNum:SecondNum;

    for(int i=maximum;;i++)
    {    
        if(i%FirstNum==0 && i%SecondNum==0)
        {
           LCM=i;
           break;
        }  
    }

    cout<<"LCM = "<<LCM;

    return 0;
}