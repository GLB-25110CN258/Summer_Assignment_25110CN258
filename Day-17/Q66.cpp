
// Write a program to union of arrays

#include <iostream>
using namespace std;

int main()
{
    int size1,size2,check=0,count=1;

    cout<<"Enter the size of first array = ";
    cin>>size1;

    cout<<"Enter the size of second array = ";
    cin>>size2;

    int array1[size1+size2],array2[size2],array3[size1+size2];

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
    array3[0]=array1[0];

    for(int m=size1 ; m<size1+size2 ;m++)
    {
        array1[m]=array2[m-size1];
    }

    for(int k=1 ; k<size1+size2 ; k++)
    {
        check=0;

        for(int w=0 ; w<count ; w++)
        {
            if(array1[k]==array3[w])
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
    }
    cout<<"union = ";

    for(int n=0 ; n<count ; n++)
    {
        cout<<array3[n]<<"  ";
    }
    return 0;
}