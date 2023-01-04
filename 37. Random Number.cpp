#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{

    for(int i=1;i<=10;i++)
    {
         int randNum=rand();
       cout<<"Random Number = "<<randNum % 5 + 1 <<endl;
    }


    getch();
}

