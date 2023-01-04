#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[2][3],row,col;
    //initialization
    arr[0][0] = 20;
    arr[0][1] = 22;
    arr[0][2] = 25;

    arr[1][0] = 24;
    arr[1][1] = 30;
    arr[1][2] = 40;

    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();


}


