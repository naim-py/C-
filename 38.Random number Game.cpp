#include<cstdlib>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int randomNum,guessNum;

    cout<<"Enter the guess number 1 to 5= ";
    cin>>guessNum;

    randomNum=1 + rand() % 5;

    if(guessNum==randomNum)
    {
        cout<<"You have won the game"<<endl<<endl;
    }
    else
    {
        cout<<"You have lost try again "<<endl;
        cout<<"Random Number = "<<randomNum<<endl<<endl;
    }
    }

    getch();
}

