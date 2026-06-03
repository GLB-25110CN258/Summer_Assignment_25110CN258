
// Write a program to print prime numbers in a range

#include <iostream>
using namespace std;

int main()

{
    int number,check=0;

    cout<<"enter a number = ";
    cin>>number;

    for (int i=2;i<=number;i++)
    {
        check=0;

        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {  
                check=1;
                break;
            }
        }  
        if(check!=1)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
