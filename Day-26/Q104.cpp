
// Write a program to create quiz application

#include <iostream>
using namespace std;

int main()
{
    int num=0,count=0,length=0,choose,answer[100];
    string array1[100],array[100];

    cout<<"Enter the number of questions = ";
    cin>>num;
    cin.ignore();

    for(int i=0 ; i<num ; i++)
    {
        cout<<"Question number :"<<i+1<<endl;

        cout<<"Enter the Question = ";
        getline(cin,array1[i]);

        for(int j=0 ; j<4 ; j++)
        {
            cout<<"Enter option number:"<<j+1<<"=";
            getline(cin,array[count]);
            
            count++;
        }
        cout<<"Enter the correct option(1/2/3/4) = ";
        cin>>answer[i];
    }
    for(int i=0 ; i<num ; i++)
    {
        cout<<"Question"<<i+1<<" = "<<array1[i]<<endl;

        for(int j=0 ; j<4 ; j++)
        {
            cout<<"option:"<<j+1<<"="<<array[length]<<endl;
            length++;
        }
        cout<<"Enter the correct option number(1/2/3/4) = ";
        cin>>choose;

        length++;

        if(answer[i]==choose)
        {
            cout<<"Congragulations! correct answer";
        }
        else
        {
            cout<<"Wrong answer"<<endl;
            cout<<"correct option = "<<answer[i]<<endl;
        }
    }
    return 0;
}