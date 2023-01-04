#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the last number = ";
    cin>>n;
    cout<<"1+2+3+.....+n = ";
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<sum<<endl;

    getch();
}


