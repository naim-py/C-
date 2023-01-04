#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter any two number = \n";
    cin>>num1>>num2;
    cout<<showpoint;
    cout<<setprecision(10);

    float sum=num1+num2;
    cout<<setw(20)<<"sum = "<<sum;
    cout<<endl;

    int sub=num1-num2;
    cout<<"sub = "<<sub;
    cout<<endl;

    int mul=num1*num2;
    cout<<"mul = "<<mul;
    cout<<endl;

    double Div=num1/num2;
    cout<<setw(20)<<"Div = "<<Div;
    cout<<endl;

    int rem=num1%num2;
    cout<<"rem = "<<rem;
    getch();
}

