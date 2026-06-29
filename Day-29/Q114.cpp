
// Write a program to create a menu driven array operations system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array[100],ele;

    int choice,index,check,end,length=0;

    do
    {
        cout<<"1-add new element"<<endl;
        cout<<"2-remove existing element"<<endl;
        cout<<"3-display an elemnts"<<endl;
        cout<<"4-replace an element"<<endl;
        cout<<"5-display all elements"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter the element = ";
            cin>>array[length];

            length++;

            cout<<"Element successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter element index number = ";
            cin>>index;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(i==index)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"Element successfully removed."<<endl;
                    break;
                }
            }
            if(check==0)
            {
                cout<<"element not found"<<endl;
            }
        }
        else if(choice==3)
        {
            cout<<"Enter element index = ";
            cin>>index;

            check=0;

            if(index>=0 && index<length)
            {
                check=1;

                cout<<"Element = "<<array[index];
            }
            if(check==0)
            {
                cout<<"element not found"<<endl;
            }
        }
        else if(choice==4)
        {
            cout<<"Enter Element index = ";
            cin>>index;

            cout<<"Enter new element = ";
            cin>>ele;

            check=0;

            if(index>=0 && index<length)
            {
                check=1;

                array[index]=ele;

                cout<<"Element successfully updated";
            }
            if(check==0)
            {
                cout<<"element not found."<<endl;
            }
        }
        else if(choice==5)
        {
            check=0;

            for(int i=0 ; i<length ; i++)
            {
                check=1;

                cout<<array[i]<<"  ";  
            }
            if(check==0)
            {
                    cout<<"element not found."<<endl;
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