
// Write a program to create menu driven string operations system

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string array[100];

    int choice,index,check,end,length=0;

    do
    {
        cout<<"1-Enter a string"<<endl;
        cout<<"2-Display a string"<<endl;
        cout<<"3-Find string length"<<endl;
        cout<<"4-Reverse the string"<<endl;
        cout<<"5-convert string to lowercase"<<endl;
        cout<<"6-convert string to uppercase"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cin.ignore();

            cout<<"Enter the string:"<<length+1<<" = ";
            getline(cin,array[length]);

            length++;

            cout<<"Element successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter the string index number = ";
            cin>>index;

            check=0;

            if(index>=0 && index <length)
            {
                check=1;
                cout<<array[index]<<endl;
            }
            if(check==0)
            {
                cout<<"String not found"<<endl;
            }
        }
        else if(choice==3)
        {
            cout<<"Enter string index number = ";
            cin>>index;

            check=0;

            if(index>=0 && index<length)
            {
                check=1;

                cout<<"length = "<<array[index].length()<<endl;
            }
            if(check==0)
            {
                cout<<"String not found"<<endl;
            }
        }
        else if(choice==4)
        {
            cout<<"Enter string index number = ";
            cin>>index;

            check=0;

            if(index>=0 && index<length)
            {
                check=1;

                reverse(array[index].begin(),array[index].end());

                cout<<"String successfully reversed "<<endl;
                cout<<"Reversed string = "<<array[index]<<endl;

            }
            if(check==0)
            {
                cout<<"String not found."<<endl;
            }
        }
        else if(choice==5)
        {
            cout<<"Enter string index number = ";
            cin>>index;

            check=0;

            if(index>=0 && index<length)
            {
                for(int i=0 ; i<array[index].length() ; i++)
                {
                    array[index][i]=tolower(array[index][i]);

                }
                check=1;

                cout<<"String successfully converted into lowercase"<<endl;

                cout<<"String = "<<array[index]<<endl;
            }
            if(check==0)
            {
                    cout<<"String not found."<<endl;
            }
        }
        else if(choice==6)
        {
            cout<<"Enter string index number = ";
            cin>>index;

            check=0;

            if(index>=0 && index<length)
            {
                for(int i=0 ; i<array[index].length() ; i++)
                {
                    array[index][i]=toupper(array[index][i]);

                }
                check=1;

                cout<<"String successfully converted into uppercase"<<endl;

                cout<<"String = "<<array[index]<<endl;
            }
            if(check==0)
            {
                    cout<<"String not found."<<endl;
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

