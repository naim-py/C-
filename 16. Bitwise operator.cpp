#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;

    cout<<"Enter the two number  ";
    cin>>a>>b;

    c=a&&b;
    cout<<"Bitwise And = "<<c<<endl;

    d=a||b;
    cout<<"Bitwise Or = "<<d<<endl;

    e=a^b;
    cout<<"Bitwise Exclusive Or = "<<e<<endl;

}

