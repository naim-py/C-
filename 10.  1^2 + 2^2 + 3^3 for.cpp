#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the last number = ";
    cin>>n;
    cout<<"1^2 +3^2 +5^2 +7^2 +.....+n^n = ";
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i*i;
    }

    cout<<sum;


    getch();
}


