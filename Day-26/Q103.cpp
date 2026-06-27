
// Write a program to create ATM simulation

#include <iostream>
using namespace std;

int main()
{
    int pin=1234,balance=800,num,check=1,choice,amount,newpin;

    do
    {
        cout<<"Enter you ATM pin = ";
        cin>>num;


        if(num==pin)
        {
            cout<<"1:Check your current balance"<<endl;
            cout<<"2:Deposit money"<<endl;
            cout<<"3:Withdraw money"<<endl;
            cout<<"4:Change pin"<<endl;

            cout<<"enter you choice = ";
            cin>>choice;

            if(choice==1)
            {
                cout<<"current balance = "<<balance;
            }
            else if(choice==2)
            {
                cout<<"amount to be deposited = ";
                cin>>amount;

                balance+=amount;

                cout<<"Done! updated balance ="<<balance;
            }
            else if(choice==3)
            {
                cout<<"Amount to be withdrawn = ";
                cin>>amount;

                if(amount<+balance)
                {
                    balance= balance-amount;

                    cout<<"Withdrawl completed! remaining balance = "<<balance<<endl;
                }
                else
                {
                    cout<<"Insufficient balance!"<<endl;
                }

            }
            else if(choice==4)
            {
                cout<<"Please enter your new pin = ";
                cin>>newpin;

                pin=newpin;

                cout<<"Pin successfuly changed"<<endl;
            }
            else
            {
                cout<<"not found! please retry"<<endl;
            }
        }
        else
        {
            cout<<"Wrong pin! Please try again"<<endl;
        }
        cout<<"do you wish to continue?"<<endl<<"If yes, then press:1"<<endl<<"If no, then press:0"<<endl;
        cin>>check;
    }
    while(check==1);

    if(check==0)
    {
        cout<<"Thank you! Have a good day.";
    }
    return 0;
}