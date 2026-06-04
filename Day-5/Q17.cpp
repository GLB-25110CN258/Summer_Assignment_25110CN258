
// Write a program to check perfect number

#include <iostream>
using namespace std;

int main()

{
    int number,sum=0;

   cout<<"Enter the number = ";
   cin>>number;

   if(number<=0)
   {
       cout<<"It is not a perfect number";
       return 0;
   }

   for(int i=1;i<number;i++)
   {
       if(number%i==0)
       {
          sum+=i;
       }
   }
   
   if(sum==number)
   {
        cout<<"It is a perfect number";
   }
   else
   {
        cout<<"It is not a perfect number";
   }

    return 0;
}
