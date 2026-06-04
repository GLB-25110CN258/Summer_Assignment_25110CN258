
// Write a program to print armstrong numbers in a range

#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int first,last,digit=0,sum=0,Original,copy1=0,copy2=0,count=0;

    cout<<"enter starting digit of range = ";
    cin>>first;

    cout<<"Enter end digit of range = ";
    cin>>last;

    for(int i=first;i<=last;i++)
    {
        count=0;
        sum=0;
        Original=i;
        copy1=i;
        copy2=i;

        while(copy2>0)
        {
            count++;
            copy2=copy2/10;
        }
        while(copy1>0)
        {
           digit=copy1%10;
           sum=sum+ round(pow(digit,count));
           copy1=copy1/10;
        }
        if(Original==sum)
        {
            cout<<Original<<endl;
        }
    }
    return 0;
}
