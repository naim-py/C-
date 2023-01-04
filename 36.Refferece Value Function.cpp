#include<iostream>
#include<conio.h>
using namespace std;
void dsplay(int *num)
{
    *num=20;
}

int main()
{
    int x=10;
    cout<<"Before the pass value = "<<x<<endl;
    cout<<endl;
    dsplay(&x);//(&x) mane thikana bujhai
    cout<<"After the Refferece pass value = "<<x;


    getch();
}
