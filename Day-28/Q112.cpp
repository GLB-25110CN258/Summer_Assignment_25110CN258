
// Write a program to create contact management system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        long long phone;
        string name;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,check,end;

    do
    {
        cout<<"1-Add new contact"<<endl;
        cout<<"2-Delete existing contact"<<endl;
        cout<<"3-Search contact"<<endl;
        cout<<"4-Display all contact records"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Contact number = "<<num<<endl;

            num++;

            cout<<"Enter phone number= ";
            cin>>array[length].phone;

            cin.ignore();

            cout<<"Enter name = ";
            getline(cin,array[length].name);

            length++;

            cout<<"contact successfully saved!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter phone number = ";
            cin>>del;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].phone==del)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"ontact number successfully deleted."<<endl;
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
            cout<<"Enter phone number = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].phone==display)
                {
                    check=1;

                    cout<<"Phone number = "<<array[i].phone<<endl;
                    cout<<"name="<<array[i].name<<endl;
    
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

                cout<<"Contact number:"<<i+1<<endl;

                cout<<"Phone number = "<<array[i].phone<<endl;
                cout<<"name="<<array[i].name<<endl;
    
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