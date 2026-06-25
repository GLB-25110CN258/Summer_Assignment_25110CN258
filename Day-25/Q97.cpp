
// Write a program to merge two sorted arrays

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,i=0,j=0,k=0;

    cout<<"Enter the number of elements in first array = ";
    cin>>num1;

    cout<<"Enter the number of elements in second array = ";
    cin>>num2;

    int array1[num1],array2[num2],merged[num1+num2];

    for(int i=0 ; i<num1 ; i++)
    {
        cout<<"enter the first sorted array element["<<i<<"] = ";
        cin>>array1[i];
    }
    for(int j=0 ; j<num2 ; j++)
    {
        cout<<"enter the second sorted array element["<<j<<"] = ";
        cin>>array2[j];
    }
    while(i<num1 && j<num2)
    {
        if(array1[i]<=array2[j])
        {
            merged[k]=array1[i];
            i++;
        }
        else
        {
            merged[k]=array2[j];
            j++;
        }
        k++;
    }
    while(i<num1)
    {
        merged[k]= array1[i];
        i++;
        k++;
    }
    while(j<num2)
    {
        merged[k] = array2[j];
        j++;
        k++;
    }
    cout<<"Merged array = ";
    for(int p=0 ; p<k ; p++)
    {
        cout<<merged[p]<<"  ";
    }
    return 0;
}