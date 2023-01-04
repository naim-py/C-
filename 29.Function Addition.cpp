#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);
void reminder(int,int);

int main()
{
    addition(5,6);
    subtraction(5,6);
    multiplication(5,6);
    division(8,6);
    reminder(5,3);

    getch();
}

void addition(int a,int b)
{
    int sum=a+b;
    cout<<" Sum = "<<sum<<endl;
}

void subtraction(int a,int b)
{
    int sub=a-b;
    cout<<" Subtraction = "<<sub<<endl;
}

void multiplication(int a,int b)
{
    int mul=a*b;
    cout<<" Multiplication = "<<mul<<endl;
}

void division(int a,int b)
{
    int div=a/b;
    cout<<" Division = "<<div<<endl;
}

void reminder(int a,int b)
{
    int rem=a%b;
    cout<<" Reminder = "<<rem<<endl;
}

