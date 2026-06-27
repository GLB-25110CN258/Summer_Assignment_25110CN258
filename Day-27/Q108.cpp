
// Write a program to create marksheet generation system

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct record
    {
        int roll,english,science,maths,hindi,total;
        float percentage;
        string name;
    };
    record array[100];

    int num=1,choice,length=0,del,count=0,display,update,check,end;

    do
    {
        cout<<"1-add student marksheet"<<endl;
        cout<<"2-remove student marksheet"<<endl;
        cout<<"3-display a students marksheet"<<endl;
        cout<<"4-update a students marksheet"<<endl;
        cout<<"5-display all students marksheet"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        if(choice==1)
        {
            cout<<"marksheet number = "<<num<<endl;

            cout<<"Enter the roll number = ";
            cin>>array[length].roll;

            cin.ignore();

            cout<<"Enter student's name = ";
            getline(cin,array[length].name);

            cout<<"Maths marks = ";
            cin>>array[length].maths;

            cout<<"English marks = ";
            cin>>array[length].english;

            cout<<"Hindi marks = ";
            cin>>array[length].hindi;

            cout<<"Science marks = ";
            cin>>array[length].science;

            array[length].total=array[length].maths+array[length].english+array[length].science+array[length].hindi;

            array[length].percentage=(array[length].total*100)/400;

            length++;

            cout<<"Record successfully added!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter the roll number = ";
            cin>>del;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].roll==del)
                {
                    check=1;

                    for(int j=i ; j<length-1 ; j++)
                    {
                        array[j]=array[j+1];
                    }
                    length--;

                    cout<<"Student record successfully removed."<<endl;
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
            cout<<"Enter the roll number of student = ";
            cin>>display;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].roll==display)
                {
                    check=1;

                    cout<<"roll number = "<<array[i].roll<<endl;
                    cout<<"name="<<array[i].name<<endl;
                    cout<<"hindi marks = "<<array[i].hindi<<endl;
                    cout<<"maths marks = "<<array[i].maths<<endl;
                    cout<<"science marks = "<<array[i].science<<endl;
                    cout<<"english marks = "<<array[i].english<<endl;
                    cout<<"total marks = "<<array[i].total<<endl;
                    cout<<"percentage = "<<array[i].percentage<<endl;

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
            cout<<"Enter the roll number = ";
            cin>>update;

            check=0;

            for(int i=0 ; i<length ; i++)
            {
                if(array[i].roll==update)
                {
                    check=1;

                    cout<<"Enter updated english marks = ";
                    cin>>(array[i].english);

                    cout<<"Enter updated maths marks = ";
                    cin>>(array[i].maths);

                    cout<<"Enter updated science marks = ";
                    cin>>(array[i].science);

                    cout<<"Enter updated hindi marks = ";
                    cin>>(array[i].hindi);

                    array[i].total=array[i].maths+array[i].english+array[i].science+array[i].hindi;

                    array[i].percentage=(array[i].total*100)/400;

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

                cout<<"marksheet:"<<i+1<<endl;
                cout<<"roll number = "<<array[i].roll<<endl;
                cout<<"name="<<array[i].name<<endl;
                cout<<"hindi marks = "<<array[i].hindi<<endl;
                cout<<"english marks = "<<array[i].english<<endl;
                cout<<"science marks = "<<array[i].science<<endl;
                cout<<"maths marks = "<<array[i].maths<<endl;   
                cout<<"total marks = "<<array[i].total<<endl;
                cout<<"percentage = "<<array[i].percentage<<endl;
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