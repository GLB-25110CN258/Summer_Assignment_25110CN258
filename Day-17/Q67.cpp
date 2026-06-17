
// Write a program to intersection of arrays

#include <iostream>
using namespace std;

int main()
{
    int size1,size2,count=0,max,check;

    cout<<"Enter the size of first array = ";
    cin>>size1;

    cout<<"Enter the size of second array = ";
    cin>>size2;

    int array1[size1],array2[size2],array3[size1+size2];

    for(int i=0 ; i<size1 ; i++)
    {
        cout<<"Enter the value of first array element["<<i<<"]=";
        cin>>array1[i];
    }
    for(int j=0 ; j<size2 ; j++)
    {
        cout<<"Enter the value of second array element["<<j<<"]=";
        cin>>array2[j];
    }
    for(int k=0 ; k<size1 ; k++)
    {
        for(int m=0 ; m<size2 ; m++)
        {
            if(array1[k]==array2[m])
            {
                check=0;

                for(int p=0 ; p<count ; p++)
                {
                    if(array3[p]==array1[k])
                    {
                        check=1;
                        break;
                    }
                }
                if(check==0)
                {
                    array3[count]=array1[k];
                    count++;
                }
                break;
            }
        }
    }
    cout<<"Intersection = ";

    for(int n=0 ; n<count ; n++)
    {
        cout<<array3[n]<<"  ";
    }
    return 0;
}