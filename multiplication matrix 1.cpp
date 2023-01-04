#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[3][3],B[3][3],Result[3][3]={0};
    int i,j,k,r1,r2,c1,c2;

    //A Scanning input
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    //A Printing input
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"   "<<A[i][j];

        }
        cout<<endl;
    }
    //B Scanning input
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" B["<<i<<"]["<<j<<"] = ";
            cin>>B[i][j];
        }
        cout<<endl;
    }
    //B Printing input
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"   "<<B[i][j];

        }
        cout<<endl;
    }
    //multiplying matrix
    cout<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                Result[i][j]=Result[i][j]+A[i][k] * B[k][j];
            }

        }
    }
    cout<<"Result = "<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"   "<<Result[i][j];
        }
        cout<<endl;
    }
    getch();
}


