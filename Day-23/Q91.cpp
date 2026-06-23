
// Write a program to check anagram string 

#include <iostream>
using namespace std;

int main()
{
    char str[100],word[100];
    int length1=0,length2=0;

    cout<<"Enter the string = ";
    cin.getline(str,100);

    cout<<"Enter a word = ";
    cin.getline(word,100);

    while(str[length1]!='\0')
    {
        length1++;
    }
    while(word[length2]!='\0')
    {
        length2++;
    }
    if(length1!=length2)
    {
        cout<<"Entered word is not anagram";
        return 0;
    }
    for(int i=0 ; i<length1 ; i++)
    {
        int count1=0,count2=0;

        for(int j=0 ; j<length1 ; j++)
        {
            if(str[i]==str[j])
            {
                count1++;
            }
            if(str[i]==word[j])
            {
                count2++;
            }
        }
        if(count1!=count2)
        {
            cout<<"Entered word is not anagram";
            return 0;
        }
    }
    cout<<"Entered word is anagram";
    return 0;
}