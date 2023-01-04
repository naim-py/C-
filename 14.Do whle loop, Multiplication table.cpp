#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=1,num;
    cout<<"Enter the number = ";
    cin>>num;
    do{
       cout<<"  "<< num<<" X "<<i<<" = "<<(num*i)<<endl;
       i++;



    }while(i<=20);
    getch();
}
