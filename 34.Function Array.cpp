#include<iostream>
#include<conio.h>
using namespace std;
void funcArray(int num[])
{
   for(int i=0;i<5;i++)
        cout<<"  "<<num[i];
}

int main()
{
    int number[5]={3,4,5,6,7};
    funcArray(number);

    getch();
}


