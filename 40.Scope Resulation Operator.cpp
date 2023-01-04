#include<iostream>
#include<conio.h>
using namespace std;

int x=20;

int main()
{
    int x=10;
    ::x=30;
    cout<<:: x<<endl;

    getch();
}

