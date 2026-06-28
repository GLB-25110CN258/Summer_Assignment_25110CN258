
// Write a program to create ticket booking system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int pnr,seat;
        string name,start,destination;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end;

    do
    {
        cout<<"1-Buy new ticket"<<endl;
        cout<<"2-cancle ticket"<<endl;
        cout<<"3-display a ticket record"<<endl;
        cout<<"4-display all ticket records"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Ticket number = "<<num<<endl;

            num++;

            cout<<"Enter PNR number= ";
            cin>>array[length].pnr;

            cin.ignore();

            cout<<"Enter ticket booker's name = ";
            getline(cin,array[length].name);

            cout<<"Enter number of seats = ";
            cin>>array[length].seat;

            cin.ignore();

            cout<<"Enter boarding station's name = ";
            getline(cin,array[length].start);

            cout<<"Enter your destination = ";
            getline(cin,array[length].destination);

            length++;

            cout<<"Ticket successfully booked!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter PNR number = ";
            cin>>del;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].pnr==del)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"Ticket successfully cancelled."<<endl;
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
            cout<<"Enter PNR number = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].pnr==display)
                {
                    check=1;

                    cout<<"PNR number = "<<array[i].pnr<<endl;
                    cout<<"Ticket booker's name="<<array[i].name<<endl;
                    cout<<"Number of seats= "<<array[i].seat<<endl;
                    cout<<"Boarding station = "<<array[i].start<<endl;
                    cout<<"Destination = "<<array[i].destination<<endl;

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

                cout<<"Ticket number = "<<i+1<<endl;

                cout<<"PNR number = "<<array[i].pnr<<endl;
                cout<<"Ticket booker's name="<<array[i].name<<endl;
                cout<<"Number of seats= "<<array[i].seat<<endl;
                cout<<"Boarding station = "<<array[i].start<<endl;
                cout<<"Destination = "<<array[i].destination<<endl; 
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