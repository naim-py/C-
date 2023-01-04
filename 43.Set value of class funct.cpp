#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public :
    int id;
    double gpa;

    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }

    void setvalue(int x,double y)
    {
        id=x;
        gpa=y;
    }

};

int main()
{
    student naim,sahin;

    naim.setvalue(234,4.56);
    naim.display();

    sahin.setvalue(434,2.345);
    sahin.display();

    getch();
}

