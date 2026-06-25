
// Write a program to find common characters in string

#include <iostream>
using namespace std;

int main()
{
    string str1,str2,str3;
    int check=0,count=0,found=0;

    cout<<"Enter the first string = ";
    cin>>str1;

    cout<<"Enter the second string = ";
    cin>>str2;

   cout<<"Common characters = "; 

    for(int i=0 ; str1[i]!='\0' ; i++)
    {
        check=0,found=0;

        for(int j=0 ; str2[j]!='\0' ; j++)
        {
            if(str1[i]==str2[j])
            {
                found=1;

                for(int k=0 ; k<count ; k++)
                {
                   if(str1[i]==str3[k])
                   {
                    check=1;
                    break;
                   }
                }
                break;
            }
        }
        if(check==0 && found==1)
        {
            str3[count]=str1[i];
            count++;

            cout<<str1[i]<<"  ";
        }
    }
    return 0;
}