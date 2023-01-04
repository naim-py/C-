#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[10][10],B[10][10],Result[10][10]={0};
    int i,j,k,r1,r2,c1,c2,multiple=1;
    cout<<"Enter rows and cols for A matrix = ";
    cin>>r1>>c1;
    cout<<"Enter rows and cols for B matrix = ";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"Error  !! c1 is not equal to r2 "<<endl;

        cout<<"Enter rows and cols for A matrix = ";
        cin>>r1>>c1;
        cout<<"Enter rows and cols for B matrix = ";
        cin>>r2>>c2;
    }
    //A Scanning input
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<" A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    //A Printing input
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"   "<<A[i][j];

        }
        cout<<endl;
    }
    //B Scanning input
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<" B["<<i<<"]["<<j<<"] = ";
            cin>>B[i][j];
        }
        cout<<endl;
    }
    //B Printing input
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"   "<<B[i][j];

        }
        cout<<endl;
    }
    //multiplying matrix
    cout<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                multiple=Result[i][j]+A[i][k] * B[k][j];
                Result[i][j]=multiple;
            }

        }
    }
    cout<<"Result = "<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"   "<<Result[i][j];
        }
        cout<<endl;
    }
    getch();
}

