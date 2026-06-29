
// Write a program to create inventory management system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int id,quantity;
        float price;
        string title;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end;

    do
    {
        cout<<"1-add item record"<<endl;
        cout<<"2-remove item record"<<endl;
        cout<<"3-display an item record"<<endl;
        cout<<"4-update an item record"<<endl;
        cout<<"5-display all item record"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Item number = "<<num<<endl;

            cout<<"Enter item id = ";
            cin>>array[length].id;

            cin.ignore();

            cout<<"Enter item's title = ";
            getline(cin,array[length].title);

            cout<<"Enter item's price = ";
            cin>>array[length].price;

            cout<<"Enter item's quantity = ";
            cin>>array[length].quantity;

            length++;

            cout<<"Record successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter item id = ";
            cin>>del;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==del)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"Item record successfully removed."<<endl;
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
            cout<<"Enter item id = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==display)
                {
                    check=1;

                    cout<<"id = "<<array[i].id<<endl;
                    cout<<"Title="<<array[i].title<<endl;
                    cout<<"price = "<<array[i].price<<endl;
                    cout<<"quantity = "<<array[i].quantity<<endl;

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
            cout<<"Enter item's id = ";
            cin>>update;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].id==update)
                {
                    check=1;

                    cout<<"Enter updated id = ";
                    cin>>array[i].id;

                    cin.ignore();

                    cout<<"Enter updated id title=";
                    getline(cin,array[i].title);
                    
                    cout<<"Enter updated price = ";
                    cin>>(array[i].price);

                    cout<<"Enter updated quantity = ";
                    cin>>(array[i].quantity);

                    cout<<"Record successfully updated";

                    break;
                }
            }
            if(check==0)
            {
                cout<<"Record not found."<<endl;
            }
        }
        else if(choice==5)
        {
            check=0;

            for(int i=0 ; i<length ; i++)
            {
                check=1;

                cout<<"Item:"<<i+1<<endl;
                cout<<"id = "<<array[i].id<<endl;
                cout<<"title="<<array[i].title<<endl;
                cout<<"quantity = "<<array[i].quantity<<endl; 
                cout<<"price = "<<array[i].price<<endl;   
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