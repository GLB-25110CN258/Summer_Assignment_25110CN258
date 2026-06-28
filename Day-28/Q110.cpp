
// Write a program to create bank account system. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int number,balance;
        string name;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end,depos,with;

    do
    {
        cout<<"1:Add new account details"<<endl;
        cout<<"2:Deposit money"<<endl;
        cout<<"3:Withdraw money"<<endl;
        cout<<"4:Display all accounts record"<<endl;
        cout<<"5:Check your current balance"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter account number = ";
            cin>>array[length].number;

            cin.ignore();

            cout<<"Enter account holder's name = ";
            getline(cin,array[length].name);

            cout<<"Employee current balance = ";
            cin>>array[length].balance;

            length++;

            cout<<"Record successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter account number = ";
            cin>>del;

            check=0;

            cout<<"Enter amount to be deposited = ";
            cin>>depos;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].number==del)
                {
                    check=1;

                    array[i].balance= array[i].balance + depos;

                    cout<<"Updated balance = "<<array[i].balance<<endl;
                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found"<<endl;
            }
        }
        else if(choice==3)
        {
            cout<<"Enter account number = ";
            cin>>display;

            check=0;

            cout<<"enter amount to be withdrawn = ";
            cin>>with;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].number==display)
                {
                    check=1;

                    if(with<=array[i].balance)
                    {
                        array[i].balance = array[i].balance - with;

                        cout<<"Updated balance = "<<array[i].balance<<endl;
                    }
                    else
                    {
                        cout<<"insufficient balance!";
                    }
                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found"<<endl;
            }
        }
        else if(choice==4)
        {
            check=0;

            for(int i=0 ; i<length ; i++)
            {
                check=1;

                cout<<"Account:"<<i+1<<endl;
                cout<<"Account number = "<<array[i].number<<endl;
                cout<<"Account holders name="<<array[i].name<<endl;
                cout<<"cuurrent balance = "<<array[i].balance<<endl;   
            }
            if(check==0)
                {
                    cout<<"Record not found."<<endl;
                }
        }
        else if(choice==5)
        {
            cout<<"Enter account number = ";
            cin>>update;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].number==update)
                {
                    check=1;

                    cout<<"Current balance = "<<array[i].balance;

                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found."<<endl;
            }
        }
        else
        {
            cout<<"Error! please try again";
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