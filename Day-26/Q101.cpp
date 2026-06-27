
// Write a program to create number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num,guess,high,low;

    cout<<"Highest possible value = ";
    cin>>high;

    cout<<"Lowest possible value = ";
    cin>>low;

    srand(time(0));

    num=rand()% (high-low+1) + low;

    do
    {
        cout<<"Enter your guess = ";
        cin>>guess;
        
        if(num>guess)
        {
            cout<<"NO! too low"<<endl;
        }
        else if(num<guess)
        {
            cout<<"NO! too high"<<endl;
        }
        else
        {
            cout<<"Congratulations! you guessed right";
        }
    }
    while(guess!=num);

    return 0;
}