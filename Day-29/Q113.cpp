
// Write a program to create menu driven calculator

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float num1,num2,sum,sub,div;
    int end,choice;

    do
    {
        cout<<"1-Add two numbers"<<endl;
        cout<<"2-Subtract two numbers"<<endl;
        cout<<"3-Multiply two numbers"<<endl;
        cout<<"4-Divide two numbers"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"First number = ";
            cin>>num1;

            cout<<"Second number = ";
            cin>>num2;

            sum=num1+num2;

            cout<<"Addition = "<<sum<<endl;
        }
        else if(choice==2)
        {
            cout<<"First number = ";
            cin>>num1;

            cout<<"Second number = ";
            cin>>num2;

            if(num1>num2)
            {
                sub=num1-num2;
            }
            else
            {
                sub=num2-num1;
            }
            cout<<"Subtraction = "<<sub<<endl;
        }
        else if(choice==3)
        {
            cout<<"First number = ";
            cin>>num1;

            cout<<"Second number = ";
            cin>>num2;
            
            cout<<"Multiplication = "<<num1*num2<<endl;
        }
        else if(choice==4)
        {
            cout<<"enter divisor = ";
            cin>>num1;

            cout<<"Enter dividend = ";
            cin>>num2;

            if(num1==0)
            {
                cout<<"Division by zero not possible"<<endl;
            }
            else
            {
                cout<<"Division = "<<num2/num1<<endl;
            }
        }
        else
        {
            cout<<"Error! please try again"<<endl;
        }
        cout<<"do you wish to continue?"<<endl<<"If yes, then press:1"<<endl<<"If no, then press:0"<<endl<<"Choice = ";
        cin>>end;
    }
    while(end==1);

    if(end==0)
    {
        cout<<"Thank you! Have a good day.";
    }
    return 0;
}