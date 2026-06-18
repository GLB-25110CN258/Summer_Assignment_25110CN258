
// Write a program to sort array in descending order

 #include <iostream>
 using namespace std;

 int main()
 {
    int size,element;

    cout<<"Enter the number of elements in array = ";
    cin>>size;

    int array[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter the value of element["<<i<<"]=";
        cin>>array[i];
    }

    for(int j=0 ; j<size-1 ; j++)
    {
        for(int m=0 ; m<size-j-1 ; m++)
        {
            if(array[m]<array[m+1])
            {
                element=array[m];
                array[m]=array[m+1];
                array[m+1]=element;
            }
        }    
    }
    for(int k=0 ; k<size ; k++)
    {
        cout<<array[k]<<"  ";
    }
    return 0;
 }
 