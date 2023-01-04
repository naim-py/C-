#include<iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,p,q,t[10][10];
    cout<<"Enter the number of row and colum = ";
    cin>>p>>q;

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<" A["<<i<<"]["<<j<<"] = ";
           cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrix elements \n";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    //cout<<"Transpose Matrix computing \t";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           t[j][i]=a[i][j];

        }
    }
    cout<<"Transpose Matrix elements \n";
    for(i=0;i<q;i++)
    {
        for(j=0;j<p;j++)
        {

           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
