#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Marks for students "<<i+1<<" = ";
        cin>>marks[i];
    }
    cout<<"Marks are = ";
    for(i=0;i<5;i++)
    {
        cout<<" "<<marks[i];

    }
    getch();
}

