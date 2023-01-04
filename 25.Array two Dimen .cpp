#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[2][3];
    int row,col;
    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            cout<<A[row][col]<<" ";

        }
        cout<<endl;
    }
    getch();

}

