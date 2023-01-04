#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer number \n";
    cin>>num;
    if(num%2==0)
    {
        cout<<"Even number = "<<num;
    }
    else
    {
        cout<<"Odd number = "<<num;
    }
    getch();
}

