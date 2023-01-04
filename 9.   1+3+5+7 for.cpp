#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the last number = ";
    cin>>n;
    cout<<"1+3+5+7+.....+n = ";
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }

    cout<<sum;


    getch();
}

