#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[10][10],B[10][10],result[10][10];
    int i,j,k,r1,r2,c1,c2,sum=0;
    cout<<"Enter the number of row & column for A matrix = ";
    cin>>r1>>c1;
    cout<<"Enter the number of row & column for B matrix = ";
    cin>>r2>>c2;

    while(c1!=r2)
    {
        cout<<"Error ! c1 is not equal to r2 ";

        cout<<"Enter the number of row & column for A matrix = ";
        cin>>r1>>c1;
        cout<<"Enter the number of row & column for B matrix = ";
        cin>>r2>>c2;
    }
    //A matrix scanning
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    //A matrix printing
    cout<<"A matrix element = "<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"    "<<A[i][j];
        }
        cout<<endl;
    }
    //B matrix scanning
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>B[i][j];
        }
        cout<<endl;
    }
    //B matrix printing
    cout<<"B matrix element = "<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"    "<<B[i][j];
        }
        cout<<endl;
    }
    //result setting
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
                result[i][j]=sum;
            }
        }
    }
    cout<<"Result"<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"    "<<result[i][j];
        }
        cout<<endl;
    }



}

