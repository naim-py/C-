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

    student(int x,double y)
    {
        id=x;
        gpa=y;
    }

};

int main()
{
    student naim(234,4.56),sahin(434,2.345);
    naim.display();
    sahin.display();

    getch();
}

