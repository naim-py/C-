#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char l,ch;
    cout<<"Enter any letter = ";
    cin>>l;
    ch = toupper(l);
    if( ch=='A' ||ch=='E' || ch=='I' ||ch=='O' || ch=='U' )
        cout<<"Vowel";
    else
        cout<<"Consonant";
    getch();

}


