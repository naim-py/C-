#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public :
    int id;
    float gpa;

    void display()
    {
        cout<<"Naim"<<endl;
        cout<<endl<<id<<"  "<<gpa<<endl<<endl;
cout<<"sahin";

    }
};
int main()
{
    student naim,sahin;

    naim.id=123;
    naim.gpa=4.99;
    naim.display();

    sahin.id=4004;
    sahin.gpa=2.56;
    sahin.display();


    getch();

}

